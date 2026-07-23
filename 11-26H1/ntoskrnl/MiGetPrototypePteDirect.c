/*
 * XREFs of MiGetPrototypePteDirect @ 0x1402B2B80
 * Callers:
 *     MiEmptyPageAccessLog @ 0x1402B1B9C (MiEmptyPageAccessLog.c)
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 *     MiCountSharedPages @ 0x1402B2BD0 (MiCountSharedPages.c)
 *     MiQueryPteAttributes @ 0x1402B4C40 (MiQueryPteAttributes.c)
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 *     MiSectionProtectAllPtes @ 0x1402E5F80 (MiSectionProtectAllPtes.c)
 *     MiGetPageProtection @ 0x1402E8264 (MiGetPageProtection.c)
 *     MiHandleForkProtoPte @ 0x1402F0C18 (MiHandleForkProtoPte.c)
 *     MiComputePageCommitment @ 0x140313D10 (MiComputePageCommitment.c)
 *     MiSplitPrivatePage @ 0x14031942C (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x140319EF0 (MiIsCfgBitMapPageShared.c)
 *     MiIsFaultPteIntact @ 0x14031E538 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14031E6D4 (MiFindActualFaultingPte.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MiTranslatePageForCopy @ 0x14033ADCC (MiTranslatePageForCopy.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140362D00 (MiDecommitHandleProtoFormatPte.c)
 *     MiInitializeReadInProgressPfn @ 0x140375570 (MiInitializeReadInProgressPfn.c)
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 *     MiCheckProtoAccess @ 0x14041EF60 (MiCheckProtoAccess.c)
 *     MiDiscardPtePrototype @ 0x140526F14 (MiDiscardPtePrototype.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406E8AD0 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPrototypePteDirect(unsigned __int64 a1)
{
  __int64 v1; // rdx

  if ( qword_140E2D8C0 && (a1 & 0x10) == 0 )
    a1 &= qword_140E2D8C8;
  v1 = qword_140E37D10;
  if ( (a1 & 0x800000000000000LL) == 0 )
    v1 = qword_140E37D20;
  return v1 + ((a1 >> 9) & 0x1FFFFFFFFFF8LL);
}
