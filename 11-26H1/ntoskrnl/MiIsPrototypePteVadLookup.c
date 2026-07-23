/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x14031E380
 * Callers:
 *     MiSharedVaToPartition @ 0x140282C7C (MiSharedVaToPartition.c)
 *     MiQueryPteAttributes @ 0x1402B4C40 (MiQueryPteAttributes.c)
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 *     MiResolveDemandZeroFault @ 0x1402B6900 (MiResolveDemandZeroFault.c)
 *     MiSectionProtectAllPtes @ 0x1402E5F80 (MiSectionProtectAllPtes.c)
 *     MiGetPageProtection @ 0x1402E8264 (MiGetPageProtection.c)
 *     MiHandleForkValidProtoPte @ 0x1402ED390 (MiHandleForkValidProtoPte.c)
 *     MiHandleForkProtoPte @ 0x1402F0C18 (MiHandleForkProtoPte.c)
 *     MiComputePageCommitment @ 0x140313D10 (MiComputePageCommitment.c)
 *     MiSplitPrivatePage @ 0x14031942C (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x140319EF0 (MiIsCfgBitMapPageShared.c)
 *     MiIsFaultPteIntact @ 0x14031E538 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14031E6D4 (MiFindActualFaultingPte.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MiTranslatePageForCopy @ 0x14033ADCC (MiTranslatePageForCopy.c)
 *     MiSectionProtectProtoPte @ 0x14033EE50 (MiSectionProtectProtoPte.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140362D00 (MiDecommitHandleProtoFormatPte.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036D8F4 (MiSetReadOnlyOnSectionView.c)
 *     MiComputePageFileReadAttributes @ 0x14037257C (MiComputePageFileReadAttributes.c)
 *     MiInitializeReadInProgressPfn @ 0x140375570 (MiInitializeReadInProgressPfn.c)
 *     MiResolveProtoPteFault @ 0x1403A7B0C (MiResolveProtoPteFault.c)
 *     MiIsPteEvaluated @ 0x1403DCEC8 (MiIsPteEvaluated.c)
 *     MiDiscardPtePrototype @ 0x140526F14 (MiDiscardPtePrototype.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406E8AD0 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsPrototypePteVadLookup(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( (a1 & 0x400) != 0 )
    return (a1 & 0x3FFFFFFFFFF000LL) == 0x3FFFFFFFFFF000LL;
  return result;
}
