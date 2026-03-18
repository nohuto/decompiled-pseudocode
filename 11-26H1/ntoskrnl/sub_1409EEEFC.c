/*
 * XREFs of sub_1409EEEFC @ 0x1409EEEFC
 * Callers:
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     sub_140B38E0C @ 0x140B38E0C (sub_140B38E0C.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     sub_1409EEB04 @ 0x1409EEB04 (sub_1409EEB04.c)
 *     sub_1409EF3D4 @ 0x1409EF3D4 (sub_1409EF3D4.c)
 *     sub_140A75194 @ 0x140A75194 (sub_140A75194.c)
 */

__int64 __fastcall sub_1409EEEFC(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
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
  v7 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140E3E928, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E3E928, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140E3E928.Header.Lock, 0, v7, &stru_140E3E928);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  v8 = sub_140A75194(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E3E928, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140E3E928.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E3E928);
  KeLeaveGuardedRegion();
  if ( v8 >= 0 )
  {
    v10 = KeGetCurrentThread();
    --v10->SpecialApcDisable;
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E3E928, 0LL, 0LL, v9);
    v13 = _interlockedbittestandset64(&stru_140E3E928.Header.Lock, 0LL);
    v14 = v11;
    if ( v13 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E3E928, v11, (__int64)&stru_140E3E928);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v14, v12);
      else
        *((_BYTE *)v14 + 10) = 1;
    }
    v8 = sub_1409EEB04((__int64)&qword_140E3E900, a1, 8, -1, (__int64)&v16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E3E928, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E3E928.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E3E928);
    KeLeaveGuardedRegion();
    sub_1409EF3D4(v16);
  }
  return (unsigned int)v8;
}
