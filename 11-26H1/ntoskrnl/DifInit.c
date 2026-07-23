/*
 * XREFs of DifInit @ 0x14064F4A0
 * Callers:
 *     VfVolatileSetDifRuleClass @ 0x14064B744 (VfVolatileSetDifRuleClass.c)
 *     VfInitBootDriversLoaded @ 0x140CE4CB4 (VfInitBootDriversLoaded.c)
 * Callees:
 *     DifInitSegContext @ 0x140650B6C (DifInitSegContext.c)
 */

__int64 DifInit()
{
  *((_QWORD *)&DifAPIThunkContextHead + 1) = &DifAPIThunkContextHead;
  *(_QWORD *)&DifAPIThunkContextHead = &DifAPIThunkContextHead;
  DifpPoolTagsSize = (unsigned int)DifpPoolTagsSizeBytes >> 2;
  DifInitSegContext(&stru_140E27C48.792, 1LL, 16LL);
  DifInitSegContext(&stru_140E27C48.SchedulerApcFill5[48], 1LL, 32LL);
  return DifInitSegContext(&stru_140E27C48.InGlobalForegroundList, 1LL, 32LL);
}
