/*
 * XREFs of MiLockAndDecrementShareCount @ 0x1403091DC
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x1402D6770 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402D8E50 (MiCompleteProtoPteFault.c)
 *     MiProtoFaultApplyPrivateFixups @ 0x1402DA280 (MiProtoFaultApplyPrivateFixups.c)
 *     MiCombineWithStandbyExisting @ 0x140307CC4 (MiCombineWithStandbyExisting.c)
 *     MiResolveProtoCombine @ 0x1403089FC (MiResolveProtoCombine.c)
 *     MmFreeIndependentPages @ 0x140308D40 (MmFreeIndependentPages.c)
 *     MiAddSystemPageTableToList @ 0x1403090A8 (MiAddSystemPageTableToList.c)
 *     MiReleaseInPageRefs @ 0x140309D08 (MiReleaseInPageRefs.c)
 *     MiCombineInitialFinish @ 0x14030A2B4 (MiCombineInitialFinish.c)
 *     MiHandleForkTransitionPte @ 0x14030E420 (MiHandleForkTransitionPte.c)
 *     MiOutPageSingleKernelStack @ 0x140368960 (MiOutPageSingleKernelStack.c)
 *     MiDecrementCloneBlock @ 0x14036A250 (MiDecrementCloneBlock.c)
 *     MiCompleteRestrictedImageFault @ 0x1403744A0 (MiCompleteRestrictedImageFault.c)
 *     MiIssueHardFault @ 0x14038D350 (MiIssueHardFault.c)
 *     MiResolveTransitionFault @ 0x1403A6F04 (MiResolveTransitionFault.c)
 *     MiDecommitLargePoolVa @ 0x1403C3720 (MiDecommitLargePoolVa.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x14048BB40 (MiMakeModifiedSystemCachePteValid.c)
 *     MmOutSwapProcess @ 0x14049A5C8 (MmOutSwapProcess.c)
 *     MiRevertPrivateZeroFault @ 0x1404F4214 (MiRevertPrivateZeroFault.c)
 *     MiUnmapKernelScp @ 0x1404F6C64 (MiUnmapKernelScp.c)
 *     MiMarkBootGuardPage @ 0x1406FF204 (MiMarkBootGuardPage.c)
 *     MiOutSwapFreeSoftWslePxe @ 0x14070FD28 (MiOutSwapFreeSoftWslePxe.c)
 *     MiCaptureSparsePages @ 0x140879C14 (MiCaptureSparsePages.c)
 *     MxClearStaleSecurePageMapping @ 0x140CF51D0 (MxClearStaleSecurePageMapping.c)
 *     MiInitializeBootShadowStackPage @ 0x140CFC214 (MiInitializeBootShadowStackPage.c)
 *     MiFreeBootDriverPages @ 0x140D0AE50 (MiFreeBootDriverPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiBadShareCount @ 0x1402DC710 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402DC770 (MiPfnShareCountIsZero.c)
 *     MiDecreaseUsedPtesInPfn @ 0x140309000 (MiDecreaseUsedPtesInPfn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockAndDecrementShareCount(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // si
  ULONG_PTR v3; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rax
  unsigned int IsZero; // esi
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  v3 = BugCheckParameter2;
  if ( (a2 & 2) != 0 )
  {
    CurrentIrql = 17;
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v8);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(BugCheckParameter2) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(BugCheckParameter2, a2);
    }
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v8);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
  }
  if ( (v2 & 1) != 0 )
    *(_QWORD *)(v3 + 24) |= 0x4000000000000000uLL;
  if ( (v2 & 4) != 0 )
    MiDecreaseUsedPtesInPfn(v3, 1uLL);
  if ( (*(_BYTE *)(v3 + 34) & 7) != 6 )
    MiBadShareCount(v3);
  v5 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(v3 + 24) = ((v5 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v5 ^ ((v5 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
  if ( (v5 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    IsZero = MiPfnShareCountIsZero(v3, 0LL);
  else
    IsZero = 2;
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return IsZero;
}
