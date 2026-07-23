/*
 * XREFs of KeInitializeXSaveStructures @ 0x140BFA294
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     ExInitializeSystemLookasideList @ 0x140C136D0 (ExInitializeSystemLookasideList.c)
 */

__int64 KeInitializeXSaveStructures()
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 result; // rax

  ExInitializeSystemLookasideList(
    (unsigned int)&KiXStateContextLookasideList,
    512,
    MEMORY[0xFFFFF780000003E8] + 63,
    1281446744,
    128);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->PPLookasideList[9].L = (_GENERAL_LOOKASIDE *)&KiXStateContextLookasideList;
  CurrentPrcb->PPLookasideList[9].P = (_GENERAL_LOOKASIDE *)&KiXStateContextLookasideList;
  result = (unsigned int)(LODWORD(KiSupervisorXStateFeaturesLock.Header.WaitListHead.Flink) - 1);
  if ( (unsigned int)result <= 0xE || LODWORD(KiSupervisorXStateFeaturesLock.Header.WaitListHead.Flink) >= 0x401 )
    LODWORD(KiSupervisorXStateFeaturesLock.Header.WaitListHead.Flink) = 0;
  return result;
}
