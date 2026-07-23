/*
 * XREFs of ExUninitializeDeviceAts @ 0x1406D448C
 * Callers:
 *     PiIommuUninitializeDeviceAts @ 0x1404F8CB0 (PiIommuUninitializeDeviceAts.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExpAtsDereferenceDevice @ 0x1406D4608 (ExpAtsDereferenceDevice.c)
 */

__int64 __fastcall ExUninitializeDeviceAts(struct _LIST_ENTRY *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // ebx
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi
  struct _LIST_ENTRY *i; // rcx

  v4 = 0;
  if ( a1 )
  {
    v6 = (AutoBoost *)KeAbPreAcquire((__int64)&ExSaPageGroupDescriptorArrayLock.152, 0LL, 0LL, a4);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.152, 0LL);
    v9 = v6;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&ExSaPageGroupDescriptorArrayLock.152,
        v6,
        (__int64)&ExSaPageGroupDescriptorArrayLock.152);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, v7);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    for ( i = ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink;
          i != (struct _LIST_ENTRY *)&ExSaPageGroupDescriptorArrayLock.ApcStateFill[8];
          i = i->Flink )
    {
      if ( i[1].Blink == a1 )
      {
        if ( LODWORD(i[2].Flink) > HIDWORD(i[2].Flink) )
          v4 = ExpAtsDereferenceDevice(i);
        break;
      }
    }
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.152,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.152);
    KeAbPostRelease((unsigned __int64)&ExSaPageGroupDescriptorArrayLock.152);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
