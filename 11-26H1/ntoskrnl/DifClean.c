/*
 * XREFs of DifClean @ 0x14064B580
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140647964 (VfVolatileClearDifRuleClass.c)
 * Callees:
 *     DifFreeChunks @ 0x14064CF4C (DifFreeChunks.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *DifClean()
{
  DifpPoolTagsSize = 10;
  DifAPIThunkContextHead = 0LL;
  DifFreeChunks(&stru_140E27B08.SchedulerApcFill5[48]);
  memset_0(&stru_140E27B08.SchedulerApcFill5[48], 0, 0x60uLL);
  DifFreeChunks(&stru_140E27B08.InGlobalForegroundList);
  memset_0(&stru_140E27B08.InGlobalForegroundList, 0, 0x60uLL);
  DifFreeChunks(&stru_140E27B08.792);
  return memset_0(&stru_140E27B08.792, 0, 0x60uLL);
}
