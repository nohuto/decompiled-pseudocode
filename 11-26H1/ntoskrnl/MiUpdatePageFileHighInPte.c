/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x14028B570
 * Callers:
 *     MiDemoteLocalLargePage @ 0x140283A10 (MiDemoteLocalLargePage.c)
 *     MiProbeUnlockPage @ 0x14028AE60 (MiProbeUnlockPage.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x14028DA04 (MiInitializeAllResidentPageBasePfns.c)
 *     MiCopyPfnEntryEx @ 0x140293AD0 (MiCopyPfnEntryEx.c)
 *     MiActOnValidPte @ 0x140296698 (MiActOnValidPte.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiInitializeMdlPfnSecureState @ 0x14033DDC8 (MiInitializeMdlPfnSecureState.c)
 *     MiActOnTransitionPte @ 0x14033E930 (MiActOnTransitionPte.c)
 *     MiReservePageFileSpace @ 0x140368E88 (MiReservePageFileSpace.c)
 *     MiAllocatePageFileReadResources @ 0x1403737A8 (MiAllocatePageFileReadResources.c)
 *     MiFinishLargePageFree @ 0x1403CFEB0 (MiFinishLargePageFree.c)
 *     MiAllocateLargeZeroPages @ 0x1403D0630 (MiAllocateLargeZeroPages.c)
 *     MiGetLargePageChain @ 0x1403D1D00 (MiGetLargePageChain.c)
 *     MiStoreWriteProcessFailedPages @ 0x140402824 (MiStoreWriteProcessFailedPages.c)
 *     MmAllocateNonChargedSecurePages @ 0x14040B6F8 (MmAllocateNonChargedSecurePages.c)
 *     MmMapDriverTablePage @ 0x14045569C (MmMapDriverTablePage.c)
 *     MiConvertContiguousPages @ 0x140464F84 (MiConvertContiguousPages.c)
 *     MiLargePagePromote @ 0x140473560 (MiLargePagePromote.c)
 *     MiHandleForkDemandZeroPte @ 0x14049460C (MiHandleForkDemandZeroPte.c)
 *     MiMapPageFileHash @ 0x140499D94 (MiMapPageFileHash.c)
 *     MiLargeFreePageToMdl @ 0x1404C8C88 (MiLargeFreePageToMdl.c)
 *     MmAllocateSecureKernelPages @ 0x1404E279C (MmAllocateSecureKernelPages.c)
 *     MiClearDriverTablePtes @ 0x1404FF898 (MiClearDriverTablePtes.c)
 *     MiGetLargePage @ 0x1405209D4 (MiGetLargePage.c)
 *     MiCreatePfnTemplate @ 0x1406EBD98 (MiCreatePfnTemplate.c)
 *     MiEnableNewPfns @ 0x1406ED114 (MiEnableNewPfns.c)
 *     MiFreeReservationRun @ 0x140AC3E9C (MiFreeReservationRun.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140D01B84 (MiUpdateBootHpatPagesInUse.c)
 *     MxInsertEnclaveBootPages @ 0x140D0350C (MxInsertEnclaveBootPages.c)
 *     MiCreateBootSlabEntries @ 0x140D043F0 (MiCreateBootSlabEntries.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, unsigned int a2)
{
  char v2; // al
  int v3; // r8d
  unsigned __int64 result; // rax

  if ( a1 )
  {
    if ( qword_140E2D8C0 )
    {
      v2 = a1;
      v3 = a1 & qword_140E2D8C8;
      LODWORD(a1) = a1 & 0xFFFFFFEF;
      if ( (v2 & 0x10) == 0 )
        LODWORD(a1) = v3;
    }
  }
  result = (unsigned int)a1 | ((unsigned __int64)a2 << 32);
  if ( qword_140E2D8C0 )
  {
    if ( (qword_140E2D8C0 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2D8C0;
  }
  return result;
}
