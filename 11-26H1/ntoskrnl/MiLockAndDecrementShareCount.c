/*
 * XREFs of MiLockAndDecrementShareCount @ 0x1402EB25C
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x1402B8530 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402BAC10 (MiCompleteProtoPteFault.c)
 *     MiProtoFaultApplyPrivateFixups @ 0x1402BC040 (MiProtoFaultApplyPrivateFixups.c)
 *     MiCombineWithStandbyExisting @ 0x1402E9D44 (MiCombineWithStandbyExisting.c)
 *     MiResolveProtoCombine @ 0x1402EAA7C (MiResolveProtoCombine.c)
 *     MmFreeIndependentPages @ 0x1402EADC0 (MmFreeIndependentPages.c)
 *     MiAddSystemPageTableToList @ 0x1402EB128 (MiAddSystemPageTableToList.c)
 *     MiReleaseInPageRefs @ 0x1402EBD88 (MiReleaseInPageRefs.c)
 *     MiCombineInitialFinish @ 0x1402EC334 (MiCombineInitialFinish.c)
 *     MiHandleForkTransitionPte @ 0x1402F04A0 (MiHandleForkTransitionPte.c)
 *     MiOutPageSingleKernelStack @ 0x14036A700 (MiOutPageSingleKernelStack.c)
 *     MiDecrementCloneBlock @ 0x14036BFF0 (MiDecrementCloneBlock.c)
 *     MiCompleteRestrictedImageFault @ 0x140376250 (MiCompleteRestrictedImageFault.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     MiResolveTransitionFault @ 0x1403A8C64 (MiResolveTransitionFault.c)
 *     MiDecommitLargePoolVa @ 0x1403CD620 (MiDecommitLargePoolVa.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x140485680 (MiMakeModifiedSystemCachePteValid.c)
 *     MmOutSwapProcess @ 0x140494118 (MmOutSwapProcess.c)
 *     MiRevertPrivateZeroFault @ 0x1404ED7F4 (MiRevertPrivateZeroFault.c)
 *     MiUnmapKernelScp @ 0x1404F0274 (MiUnmapKernelScp.c)
 *     MiMarkBootGuardPage @ 0x140703ED4 (MiMarkBootGuardPage.c)
 *     MiOutSwapFreeSoftWslePxe @ 0x140714A24 (MiOutSwapFreeSoftWslePxe.c)
 *     MiCaptureSparsePages @ 0x140880010 (MiCaptureSparsePages.c)
 *     MxClearStaleSecurePageMapping @ 0x140CFB550 (MxClearStaleSecurePageMapping.c)
 *     MiInitializeBootShadowStackPage @ 0x140D02594 (MiInitializeBootShadowStackPage.c)
 *     MiFreeBootDriverPages @ 0x140D11120 (MiFreeBootDriverPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiDecreaseUsedPtesInPfn @ 0x1402EB080 (MiDecreaseUsedPtesInPfn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
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
