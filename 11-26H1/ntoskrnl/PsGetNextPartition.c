/*
 * XREFs of PsGetNextPartition @ 0x1402598D8
 * Callers:
 *     EtwpLogMemNodeInfo @ 0x140259734 (EtwpLogMemNodeInfo.c)
 *     ExpCheckForWorker @ 0x140346C58 (ExpCheckForWorker.c)
 *     MiCommitPoolMemory @ 0x140366880 (MiCommitPoolMemory.c)
 *     MiFreeExcessSegments @ 0x14046E490 (MiFreeExcessSegments.c)
 *     MiDistributeSystemCacheVaReductions @ 0x1406EC2FC (MiDistributeSystemCacheVaReductions.c)
 *     MmEmptyAllWorkingSets @ 0x1406FCAF8 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1406FCC28 (MmTrimFilePagesFromWorkingSets.c)
 *     MmFlushAllPagesEx @ 0x1406FDDA0 (MmFlushAllPagesEx.c)
 *     MiWakeAllZeroConductors @ 0x14071387C (MiWakeAllZeroConductors.c)
 *     MiSignalNewAcceleratorsAvailable @ 0x140714488 (MiSignalNewAcceleratorsAvailable.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140845B80 (ExpNodeHotAddProcessorWorker.c)
 *     MiMirrorBrownPhase @ 0x140C13640 (MiMirrorBrownPhase.c)
 * Callees:
 *     PsGetNextPartitionUnsafe @ 0x140259B7C (PsGetNextPartitionUnsafe.c)
 *     PsReferencePartitionSafe @ 0x14025A030 (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 */

void *__fastcall PsGetNextPartition(void *a1)
{
  void *v1; // rbx
  void *v2; // rdi
  __int64 NextPartitionUnsafe; // rax
  __int64 v4; // rdx
  void *v6; // r8

  v1 = a1;
  v2 = 0LL;
  while ( 1 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(a1);
    if ( !NextPartitionUnsafe )
      break;
    if ( (unsigned __int8)PsReferencePartitionSafe(NextPartitionUnsafe, v4, NextPartitionUnsafe) )
    {
      v2 = v6;
      break;
    }
    a1 = v6;
  }
  if ( v1 )
    PsDereferencePartition(v1, 1850045264LL);
  return v2;
}
