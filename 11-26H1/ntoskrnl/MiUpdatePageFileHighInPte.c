/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x14028C010
 * Callers:
 *     MiDemoteLocalLargePage @ 0x1402844A0 (MiDemoteLocalLargePage.c)
 *     MiProbeUnlockPage @ 0x14028B900 (MiProbeUnlockPage.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028C8F4 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x14028E4A4 (MiInitializeAllResidentPageBasePfns.c)
 *     MiCopyPfnEntryEx @ 0x140294570 (MiCopyPfnEntryEx.c)
 *     MiActOnValidPte @ 0x140297138 (MiActOnValidPte.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     MiInitializeMdlPfnSecureState @ 0x14033BD48 (MiInitializeMdlPfnSecureState.c)
 *     MiActOnTransitionPte @ 0x14033C8B0 (MiActOnTransitionPte.c)
 *     MiReservePageFileSpace @ 0x1403670E8 (MiReservePageFileSpace.c)
 *     MiAllocatePageFileReadResources @ 0x1403719F8 (MiAllocatePageFileReadResources.c)
 *     MiFinishLargePageFree @ 0x1403C5FB0 (MiFinishLargePageFree.c)
 *     MiAllocateLargeZeroPages @ 0x1403C673C (MiAllocateLargeZeroPages.c)
 *     MiGetLargePageChain @ 0x1403C7E10 (MiGetLargePageChain.c)
 *     MiStoreWriteProcessFailedPages @ 0x140409734 (MiStoreWriteProcessFailedPages.c)
 *     MmMapDriverTablePage @ 0x14040E640 (MmMapDriverTablePage.c)
 *     MmAllocateNonChargedSecurePages @ 0x1404170E8 (MmAllocateNonChargedSecurePages.c)
 *     MiConvertContiguousPages @ 0x14046B804 (MiConvertContiguousPages.c)
 *     MiLargePagePromote @ 0x140479C00 (MiLargePagePromote.c)
 *     MiHandleForkDemandZeroPte @ 0x14049AABC (MiHandleForkDemandZeroPte.c)
 *     MiMapPageFileHash @ 0x1404A0244 (MiMapPageFileHash.c)
 *     MiLargeFreePageToMdl @ 0x1404CF258 (MiLargeFreePageToMdl.c)
 *     MmAllocateSecureKernelPages @ 0x1404E93EC (MmAllocateSecureKernelPages.c)
 *     MiClearDriverTablePtes @ 0x140505FE8 (MiClearDriverTablePtes.c)
 *     MiGetLargePage @ 0x14051E3C4 (MiGetLargePage.c)
 *     MiCreatePfnTemplate @ 0x1406E70E8 (MiCreatePfnTemplate.c)
 *     MiEnableNewPfns @ 0x1406E8478 (MiEnableNewPfns.c)
 *     MiFreeReservationRun @ 0x140AC1DFC (MiFreeReservationRun.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140CFB804 (MiUpdateBootHpatPagesInUse.c)
 *     MxInsertEnclaveBootPages @ 0x140CFD18C (MxInsertEnclaveBootPages.c)
 *     MiCreateBootSlabEntries @ 0x140CFE048 (MiCreateBootSlabEntries.c)
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
    if ( qword_140E2D740 )
    {
      v2 = a1;
      v3 = a1 & qword_140E2D748;
      LODWORD(a1) = a1 & 0xFFFFFFEF;
      if ( (v2 & 0x10) == 0 )
        LODWORD(a1) = v3;
    }
  }
  result = (unsigned int)a1 | ((unsigned __int64)a2 << 32);
  if ( qword_140E2D740 )
  {
    if ( (qword_140E2D740 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2D740;
  }
  return result;
}
