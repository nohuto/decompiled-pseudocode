/*
 * XREFs of MiInitializeLargePfnList @ 0x1404617F0
 * Callers:
 *     MiAllocateLargeProcessPagesFromCache @ 0x14031070C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiGetFastLargePages @ 0x1403C6B68 (MiGetFastLargePages.c)
 *     MiPfnRangeIsZero @ 0x1406E9BA0 (MiPfnRangeIsZero.c)
 *     MiAllocateFastLargePagesForMdl @ 0x1406EDF70 (MiAllocateFastLargePagesForMdl.c)
 *     MiMakeMdlPfnsDesiredSize @ 0x1406EEA20 (MiMakeMdlPfnsDesiredSize.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F259C (MiDemoteValidLargePageOneLevel.c)
 *     MiEmptyCacheSlice @ 0x140711A5C (MiEmptyCacheSlice.c)
 *     MmCreateShadowMapping @ 0x140875970 (MmCreateShadowMapping.c)
 *     MiAllocateFastAwePages @ 0x1408776E8 (MiAllocateFastAwePages.c)
 *     MiCreatePagingFileMapPrepare @ 0x1409B85F4 (MiCreatePagingFileMapPrepare.c)
 *     MiCommitVadPreparePacket @ 0x1409C7490 (MiCommitVadPreparePacket.c)
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
