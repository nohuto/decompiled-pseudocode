/*
 * XREFs of ExpWnfInvalidateDataStores @ 0x140B341C0
 * Callers:
 *     ExWnfHiveUnloaded @ 0x140A3D814 (ExWnfHiveUnloaded.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

void __fastcall ExpWnfInvalidateDataStores(void *Buf1, size_t Size, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  size_t v4; // rbp
  void *v6; // rdx
  LegacyAutoBoost *v7; // rbx
  struct _KTHREAD *i; // rbx
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rsi
  void *v13; // rsi

  v4 = (unsigned int)Size;
  v7 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.Timer.TimerListEntry, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&PspSiloMonitorLock.Timer.TimerListEntry.Flink,
         17LL,
         0LL) )
  {
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PspSiloMonitorLock.Timer.TimerListEntry,
      0,
      v7,
      (struct _KTHREAD *)&PspSiloMonitorLock.Timer.TimerListEntry);
  }
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  for ( i = ExpPlatformBinaryLock.WaitBlock[3].Thread;
        i != (struct _KTHREAD *)&ExpPlatformBinaryLock.WaitBlockFill11[168];
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    if ( i[-1].Padding[4]
      && HIDWORD(i->Header.WaitListHead.Blink) == (_DWORD)v4
      && !memcmp(Buf1, &i->SListFaultAddress, v4) )
    {
      v10 = (AutoBoost *)KeAbPreAcquire((__int64)&i[-1].Padding[3], 0LL, 0LL, v9);
      v12 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&i[-1].Padding[3], 0LL) )
        ExfAcquirePushLockExclusiveEx(&i[-1].Padding[3], v10, (__int64)&i[-1].Padding[3]);
      if ( v12 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v12, v11);
        else
          *((_BYTE *)v12 + 10) = 1;
      }
      v13 = (void *)i[-1].Padding[4];
      i[-1].Padding[4] = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&i[-1].Padding[3], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&i[-1].Padding[3]);
      KeAbPostRelease((unsigned __int64)&i[-1].Padding[3]);
      if ( v13 )
        ZwClose(v13);
    }
  }
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&PspSiloMonitorLock.Timer.TimerListEntry.Flink,
         0LL,
         17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock.Timer.TimerListEntry);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.Timer.TimerListEntry);
}
