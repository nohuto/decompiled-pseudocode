/*
 * XREFs of KiTpIsExcludedKernelTracepointLocation @ 0x1407BC378
 * Callers:
 *     KiTpIsSupportedKernelTracepointLocation @ 0x1407BC484 (KiTpIsSupportedKernelTracepointLocation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     RtlNumberOfSetBitsInRange @ 0x1404FD660 (RtlNumberOfSetBitsInRange.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x1407BC154 (KiTpBuildExcludedKernelTracepointBitmap.c)
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
  RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  if ( !KsepShimDbLock.WaitBlock[2].WaitListEntry.Flink )
  {
    v6 = (AutoBoost *)KeAbPreAcquire((__int64)&KsepShimDbLock.WaitBlock[1].Object, 0LL, 0LL, a4);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock.WaitBlockFill11[80], 0LL);
    v9 = v6;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&KsepShimDbLock.WaitBlock[1].Object,
        v6,
        (__int64)&KsepShimDbLock.WaitBlock[1].Object);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, v7);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    if ( !KsepShimDbLock.WaitBlock[2].WaitListEntry.Flink )
      *(RTL_BITMAP *)&KsepShimDbLock.WaitBlockFill11[88] = *KiTpBuildExcludedKernelTracepointBitmap(&BitMapHeader);
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&KsepShimDbLock.WaitBlock[1].Object,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock.WaitBlock[1].Object);
    KeAbPostRelease((unsigned __int64)&KsepShimDbLock.WaitBlock[1].Object);
    if ( !KsepShimDbLock.WaitBlock[2].WaitListEntry.Flink )
      return 1LL;
  }
  LOBYTE(v4) = (unsigned int)RtlNumberOfSetBitsInRange(
                               (__int64)&KsepShimDbLock.WaitBlock[1].SparePtr,
                               (a1 - PsNtosImageBase) >> 4,
                               (unsigned int)((a1 - PsNtosImageBase + 16) >> 4)
                             - (unsigned int)((a1 - PsNtosImageBase) >> 4)) != 0;
  return v4;
}
