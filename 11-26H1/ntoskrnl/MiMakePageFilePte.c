/*
 * XREFs of MiMakePageFilePte @ 0x140298330
 * Callers:
 *     MiTransferSoftwarePte @ 0x140296D90 (MiTransferSoftwarePte.c)
 *     MiDetermineModifiedPageListHead @ 0x140297EF0 (MiDetermineModifiedPageListHead.c)
 *     MiActOnPte @ 0x1402B61E0 (MiActOnPte.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1403FDB00 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403FDED0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiGetKernelStackSwapSupport @ 0x1403FEB9C (MiGetKernelStackSwapSupport.c)
 *     MiFindPageFileWriteCluster @ 0x1403FEDBC (MiFindPageFileWriteCluster.c)
 *     MiModwriterAssignPageFileAddresses @ 0x140400260 (MiModwriterAssignPageFileAddresses.c)
 *     MiStoreWriteModifiedPagePostIssue @ 0x140401104 (MiStoreWriteModifiedPagePostIssue.c)
 *     MiUpdatePfnBackingStore @ 0x140401584 (MiUpdatePfnBackingStore.c)
 *     MiModwriterConfirmMdl @ 0x140401828 (MiModwriterConfirmMdl.c)
 *     MiStoreWriteModifiedPagePrepare @ 0x1404022B0 (MiStoreWriteModifiedPagePrepare.c)
 *     MiWritePageFileHash @ 0x140469E18 (MiWritePageFileHash.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140AC3D0C (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakePageFilePte(unsigned int a1)
{
  unsigned __int64 result; // rax

  result = (unsigned int)CLFS_LSN_NULL_EXT | ((unsigned __int64)a1 << 32);
  if ( qword_140E2D8C0 )
  {
    if ( (qword_140E2D8C0 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2D8C0;
  }
  return result;
}
