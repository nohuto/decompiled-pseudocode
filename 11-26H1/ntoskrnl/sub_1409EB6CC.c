/*
 * XREFs of sub_1409EB6CC @ 0x1409EB6CC
 * Callers:
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     sub_140B3B01C @ 0x140B3B01C (sub_140B3B01C.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     sub_1409EB2D4 @ 0x1409EB2D4 (sub_1409EB2D4.c)
 *     sub_1409EBBA4 @ 0x1409EBBA4 (sub_1409EBBA4.c)
 *     sub_140A7DEB4 @ 0x140A7DEB4 (sub_140A7DEB4.c)
 */

__int64 __fastcall sub_1409EB6CC(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v6; // rdx
  LegacyAutoBoost *v7; // rdi
  int v8; // edi
  struct _KLOCK_ENTRIES *v9; // r9
  struct _KTHREAD *v10; // rax
  AutoBoost *v11; // rax
  void *v12; // rdx
  signed __int8 v13; // cf
  AutoBoost *v14; // rdi
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140E3EAA8, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E3EAA8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140E3EAA8.Header.Lock, 0, v7, &stru_140E3EAA8);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  v8 = sub_140A7DEB4(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E3EAA8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140E3EAA8.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E3EAA8);
  KeLeaveGuardedRegion();
  if ( v8 >= 0 )
  {
    v10 = KeGetCurrentThread();
    --v10->SpecialApcDisable;
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E3EAA8, 0LL, 0LL, v9);
    v13 = _interlockedbittestandset64(&stru_140E3EAA8.Header.Lock, 0LL);
    v14 = v11;
    if ( v13 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E3EAA8, v11, (__int64)&stru_140E3EAA8);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v14, v12);
      else
        *((_BYTE *)v14 + 10) = 1;
    }
    v8 = sub_1409EB2D4((__int64)&qword_140E3EA80, a1, 8, -1, (__int64)&v16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E3EAA8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E3EAA8.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E3EAA8);
    KeLeaveGuardedRegion();
    sub_1409EBBA4(v16);
  }
  return (unsigned int)v8;
}
