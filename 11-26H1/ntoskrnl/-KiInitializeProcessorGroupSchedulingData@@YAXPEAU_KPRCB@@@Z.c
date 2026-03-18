/*
 * XREFs of ?KiInitializeProcessorGroupSchedulingData@@YAXPEAU_KPRCB@@@Z @ 0x1405F9060
 * Callers:
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140BF86CC (KiAddProcessorToGroupSchedulingDatabase.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeProcessorGroupSchedulingData(struct _KPRCB *a1)
{
  a1->ScbList.Blink = &a1->ScbList;
  a1->ScbList.Flink = &a1->ScbList;
  a1->ActiveScbList.Blink = &a1->ActiveScbList;
  a1->ActiveScbList.Flink = &a1->ActiveScbList;
  a1->ScbOffset = 464 * a1->Number + 128;
  a1->GenerationTarget = KiGenerationEndTick;
}
