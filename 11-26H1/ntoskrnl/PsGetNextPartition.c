/*
 * XREFs of PsGetNextPartition @ 0x1402580F8
 * Callers:
 *     EtwpLogMemNodeInfo @ 0x140257F54 (EtwpLogMemNodeInfo.c)
 *     ExpCheckForWorker @ 0x140344BD8 (ExpCheckForWorker.c)
 *     MiCommitPoolMemory @ 0x140364AE0 (MiCommitPoolMemory.c)
 *     MiFreeExcessSegments @ 0x140474D10 (MiFreeExcessSegments.c)
 *     MiDistributeSystemCacheVaReductions @ 0x1406E764C (MiDistributeSystemCacheVaReductions.c)
 *     MmEmptyAllWorkingSets @ 0x1406F7E2C (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1406F7F58 (MmTrimFilePagesFromWorkingSets.c)
 *     MmFlushAllPagesEx @ 0x1406F90D0 (MmFlushAllPagesEx.c)
 *     MiWakeAllZeroConductors @ 0x14070EB7C (MiWakeAllZeroConductors.c)
 *     MiSignalNewAcceleratorsAvailable @ 0x14070F78C (MiSignalNewAcceleratorsAvailable.c)
 *     ExpNodeHotAddProcessorWorker @ 0x14083F940 (ExpNodeHotAddProcessorWorker.c)
 *     MiMirrorBrownPhase @ 0x140C0D430 (MiMirrorBrownPhase.c)
 * Callees:
 *     PsGetNextPartitionUnsafe @ 0x14025839C (PsGetNextPartitionUnsafe.c)
 *     PsReferencePartitionSafe @ 0x140258850 (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x140381940 (PsDereferencePartition.c)
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
