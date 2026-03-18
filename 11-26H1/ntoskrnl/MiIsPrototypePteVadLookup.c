/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x14031C350
 * Callers:
 *     MiSharedVaToPartition @ 0x14028370C (MiSharedVaToPartition.c)
 *     MiQueryPteAttributes @ 0x1402D2E80 (MiQueryPteAttributes.c)
 *     MiWalkVaRange @ 0x1402D3560 (MiWalkVaRange.c)
 *     MiResolveDemandZeroFault @ 0x1402D4B40 (MiResolveDemandZeroFault.c)
 *     MiSectionProtectAllPtes @ 0x140303F00 (MiSectionProtectAllPtes.c)
 *     MiGetPageProtection @ 0x1403061E4 (MiGetPageProtection.c)
 *     MiHandleForkValidProtoPte @ 0x14030B310 (MiHandleForkValidProtoPte.c)
 *     MiHandleForkProtoPte @ 0x14030EB98 (MiHandleForkProtoPte.c)
 *     MiComputePageCommitment @ 0x140311CE0 (MiComputePageCommitment.c)
 *     MiSplitPrivatePage @ 0x1403173FC (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x140317EC0 (MiIsCfgBitMapPageShared.c)
 *     MiIsFaultPteIntact @ 0x14031C508 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14031C6A4 (MiFindActualFaultingPte.c)
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     MiTranslatePageForCopy @ 0x140338D4C (MiTranslatePageForCopy.c)
 *     MiSectionProtectProtoPte @ 0x14033CDD0 (MiSectionProtectProtoPte.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140360F60 (MiDecommitHandleProtoFormatPte.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036BB54 (MiSetReadOnlyOnSectionView.c)
 *     MiComputePageFileReadAttributes @ 0x1403707CC (MiComputePageFileReadAttributes.c)
 *     MiInitializeReadInProgressPfn @ 0x1403737C0 (MiInitializeReadInProgressPfn.c)
 *     MiResolveProtoPteFault @ 0x1403A5DAC (MiResolveProtoPteFault.c)
 *     MiIsPteEvaluated @ 0x1403D9CDC (MiIsPteEvaluated.c)
 *     MiDiscardPtePrototype @ 0x1405248A4 (MiDiscardPtePrototype.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406E3E20 (MiCheckCommitReleaseFromVad.c)
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
