/*
 * XREFs of KiTpIsExcludedKernelTracepointLocation @ 0x1407BF3D8
 * Callers:
 *     KiTpIsSupportedKernelTracepointLocation @ 0x1407BF4E4 (KiTpIsSupportedKernelTracepointLocation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlNumberOfSetBitsInRange @ 0x1404F6BA0 (RtlNumberOfSetBitsInRange.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x1407BF1B4 (KiTpBuildExcludedKernelTracepointBitmap.c)
 */

__int64 __fastcall KiTpIsExcludedKernelTracepointLocation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // ebx
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  if ( !*(_QWORD *)&KsepShimDbLock.WaitBlockFill11[64] )
  {
    v6 = (AutoBoost *)KeAbPreAcquire((__int64)&KsepShimDbLock.WaitBlock[1].Thread, 0LL, 0LL, a4);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock.WaitBlockFill11[72], 0LL);
    v9 = v6;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&KsepShimDbLock.WaitBlock[1].Thread,
        v6,
        (__int64)&KsepShimDbLock.WaitBlock[1].Thread);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, v7);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    if ( !*(_QWORD *)&KsepShimDbLock.WaitBlockFill11[64] )
      *(_RTL_BITMAP *)&KsepShimDbLock.WaitBlockFill11[56] = *KiTpBuildExcludedKernelTracepointBitmap(&BitMapHeader);
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&KsepShimDbLock.WaitBlock[1].Thread,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock.WaitBlock[1].Thread);
    KeAbPostRelease((unsigned __int64)&KsepShimDbLock.WaitBlock[1].Thread);
    if ( !*(_QWORD *)&KsepShimDbLock.WaitBlockFill11[64] )
      return 1LL;
  }
  LOBYTE(v4) = RtlNumberOfSetBitsInRange(
                 (PRTL_BITMAP)&KsepShimDbLock.WaitBlockFill11[56],
                 (unsigned __int64)(a1 - (_QWORD)PsNtosImageBase) >> 4,
                 ((unsigned __int64)(a1 - (_QWORD)PsNtosImageBase + 16) >> 4)
               - ((unsigned __int64)(a1 - (_QWORD)PsNtosImageBase) >> 4)) != 0;
  return v4;
}
