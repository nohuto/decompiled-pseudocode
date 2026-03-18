/*
 * XREFs of MiGetPrototypePteDirect @ 0x1402D0DC0
 * Callers:
 *     MiEmptyPageAccessLog @ 0x1402CFDDC (MiEmptyPageAccessLog.c)
 *     MmCopyToCachedPage @ 0x1402D05F0 (MmCopyToCachedPage.c)
 *     MiCountSharedPages @ 0x1402D0E10 (MiCountSharedPages.c)
 *     MiQueryPteAttributes @ 0x1402D2E80 (MiQueryPteAttributes.c)
 *     MiWalkVaRange @ 0x1402D3560 (MiWalkVaRange.c)
 *     MiSectionProtectAllPtes @ 0x140303F00 (MiSectionProtectAllPtes.c)
 *     MiGetPageProtection @ 0x1403061E4 (MiGetPageProtection.c)
 *     MiHandleForkProtoPte @ 0x14030EB98 (MiHandleForkProtoPte.c)
 *     MiComputePageCommitment @ 0x140311CE0 (MiComputePageCommitment.c)
 *     MiSplitPrivatePage @ 0x1403173FC (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x140317EC0 (MiIsCfgBitMapPageShared.c)
 *     MiIsFaultPteIntact @ 0x14031C508 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14031C6A4 (MiFindActualFaultingPte.c)
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     MiTranslatePageForCopy @ 0x140338D4C (MiTranslatePageForCopy.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140360F60 (MiDecommitHandleProtoFormatPte.c)
 *     MiInitializeReadInProgressPfn @ 0x1403737C0 (MiInitializeReadInProgressPfn.c)
 *     MiUserFault @ 0x1403A3140 (MiUserFault.c)
 *     MiSystemFault @ 0x1403A4508 (MiSystemFault.c)
 *     MiCheckProtoAccess @ 0x140431F30 (MiCheckProtoAccess.c)
 *     MiDiscardPtePrototype @ 0x1405248A4 (MiDiscardPtePrototype.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406E3E20 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPrototypePteDirect(unsigned __int64 a1)
{
  __int64 v1; // rdx

  if ( qword_140E2D740 && (a1 & 0x10) == 0 )
    a1 &= qword_140E2D748;
  v1 = qword_140E37B90;
  if ( (a1 & 0x800000000000000LL) == 0 )
    v1 = qword_140E37BA0;
  return v1 + ((a1 >> 9) & 0x1FFFFFFFFFF8LL);
}
