/*
 * XREFs of EmPowerPagingEnabled @ 0x140B3D8C8
 * Callers:
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 */

void __fastcall EmPowerPagingEnabled(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v5; // di
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rbx
  struct _KLOCK_ENTRIES *v10; // r9
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rdi
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v5 = 0;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.Header.WaitListHead.Blink, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.Header.WaitListHead.Blink, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&EmpParseLock.Header.WaitListHead.Blink,
      v6,
      (__int64)&EmpParseLock.Header.WaitListHead.Blink);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  if ( a1 )
  {
    *((_DWORD *)&EmpParseLock.0 + 1) |= 0x80000000;
  }
  else
  {
    *((_DWORD *)&EmpParseLock.0 + 1) &= ~0x80000000;
    if ( *((_DWORD *)&EmpParseLock.0 + 1) )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v5 = 1;
      *(_QWORD *)&EmpParseLock.WaitRegister.Flags = &Event;
    }
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&EmpParseLock.Header.WaitListHead.Blink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock.Header.WaitListHead.Blink);
  KeAbPostRelease((unsigned __int64)&EmpParseLock.Header.WaitListHead.Blink);
  if ( v5 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.Header.WaitListHead.Blink, 0LL, 0LL, v10);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.Header.WaitListHead.Blink, 0LL);
    v13 = v11;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&EmpParseLock.Header.WaitListHead.Blink,
        v11,
        (__int64)&EmpParseLock.Header.WaitListHead.Blink);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v12);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    *(_QWORD *)&EmpParseLock.WaitRegister.Flags = 0LL;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&EmpParseLock.Header.WaitListHead.Blink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock.Header.WaitListHead.Blink);
    KeAbPostRelease((unsigned __int64)&EmpParseLock.Header.WaitListHead.Blink);
  }
}
