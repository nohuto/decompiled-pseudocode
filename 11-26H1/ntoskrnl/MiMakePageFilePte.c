/*
 * XREFs of MiMakePageFilePte @ 0x140298DD0
 * Callers:
 *     MiTransferSoftwarePte @ 0x140297830 (MiTransferSoftwarePte.c)
 *     MiDetermineModifiedPageListHead @ 0x140298990 (MiDetermineModifiedPageListHead.c)
 *     MiActOnPte @ 0x1402D4420 (MiActOnPte.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x140404A00 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140404DD0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiGetKernelStackSwapSupport @ 0x140405AA8 (MiGetKernelStackSwapSupport.c)
 *     MiFindPageFileWriteCluster @ 0x140405CC8 (MiFindPageFileWriteCluster.c)
 *     MiModwriterAssignPageFileAddresses @ 0x140407170 (MiModwriterAssignPageFileAddresses.c)
 *     MiStoreWriteModifiedPagePostIssue @ 0x140408014 (MiStoreWriteModifiedPagePostIssue.c)
 *     MiUpdatePfnBackingStore @ 0x140408494 (MiUpdatePfnBackingStore.c)
 *     MiModwriterConfirmMdl @ 0x140408738 (MiModwriterConfirmMdl.c)
 *     MiStoreWriteModifiedPagePrepare @ 0x1404091C0 (MiStoreWriteModifiedPagePrepare.c)
 *     MiWritePageFileHash @ 0x140470698 (MiWritePageFileHash.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140AC1C6C (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakePageFilePte(unsigned int a1)
{
  unsigned __int64 result; // rax

  result = (unsigned int)CLFS_LSN_NULL_EXT | ((unsigned __int64)a1 << 32);
  if ( qword_140E2D740 )
  {
    if ( (qword_140E2D740 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2D740;
  }
  return result;
}
