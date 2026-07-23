/*
 * XREFs of DifClean @ 0x14064F160
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x14064B544 (VfVolatileClearDifRuleClass.c)
 * Callees:
 *     DifFreeChunks @ 0x140650B2C (DifFreeChunks.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *DifClean()
{
  DifpPoolTagsSize = 10;
  DifAPIThunkContextHead = 0LL;
  DifFreeChunks(&stru_140E27C48.InGlobalForegroundList);
  memset_0(&stru_140E27C48.InGlobalForegroundList, 0, 0x60uLL);
  DifFreeChunks(&stru_140E27C48.SchedulerApcFill5[48]);
  memset_0(&stru_140E27C48.SchedulerApcFill5[48], 0, 0x60uLL);
  DifFreeChunks(&stru_140E27C48.792);
  return memset_0(&stru_140E27C48.792, 0, 0x60uLL);
}
