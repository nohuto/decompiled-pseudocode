/*
 * XREFs of DifInit @ 0x14064B8C0
 * Callers:
 *     VfVolatileSetDifRuleClass @ 0x140647B64 (VfVolatileSetDifRuleClass.c)
 *     VfInitBootDriversLoaded @ 0x140CDE91C (VfInitBootDriversLoaded.c)
 * Callees:
 *     DifInitSegContext @ 0x14064CF8C (DifInitSegContext.c)
 */

__int64 DifInit()
{
  *((_QWORD *)&DifAPIThunkContextHead + 1) = &DifAPIThunkContextHead;
  *(_QWORD *)&DifAPIThunkContextHead = &DifAPIThunkContextHead;
  DifpPoolTagsSize = (unsigned int)DifpPoolTagsSizeBytes >> 2;
  DifInitSegContext(&stru_140E27B08.792, 1LL, 16LL);
  DifInitSegContext(&stru_140E27B08.InGlobalForegroundList, 1LL, 32LL);
  return DifInitSegContext(&stru_140E27B08.SchedulerApcFill5[48], 1LL, 32LL);
}
