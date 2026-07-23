/*
 * XREFs of MiInitializeLargePfnList @ 0x14045A7B0
 * Callers:
 *     MiAllocateLargeProcessPagesFromCache @ 0x1402F278C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiGetFastLargePages @ 0x1403D0A5C (MiGetFastLargePages.c)
 *     MiPfnRangeIsZero @ 0x1406EE840 (MiPfnRangeIsZero.c)
 *     MiAllocateFastLargePagesForMdl @ 0x1406F2C10 (MiAllocateFastLargePagesForMdl.c)
 *     MiMakeMdlPfnsDesiredSize @ 0x1406F36C0 (MiMakeMdlPfnsDesiredSize.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
 *     MiEmptyCacheSlice @ 0x14071675C (MiEmptyCacheSlice.c)
 *     MmCreateShadowMapping @ 0x14087BD54 (MmCreateShadowMapping.c)
 *     MiAllocateFastAwePages @ 0x14087DAC8 (MiAllocateFastAwePages.c)
 *     MiCreatePagingFileMapPrepare @ 0x1409895D4 (MiCreatePagingFileMapPrepare.c)
 *     MiCommitVadPreparePacket @ 0x140998470 (MiCommitVadPreparePacket.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiInitializeLargePfnList(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = (_QWORD *)(a1 + 8);
  v2 = 4LL;
  do
  {
    result[1] = 0LL;
    *(result - 1) = 0x3FFFFFFFFFLL;
    *result = 0x3FFFFFFFFFLL;
    result += 3;
    --v2;
  }
  while ( v2 );
  return result;
}
