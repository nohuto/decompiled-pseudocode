/*
 * XREFs of RegisterHvPerfFeedbackCounters @ 0x14003EF20
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfFeedbackInternal @ 0x140037C40 (InitPerfFeedbackInternal.c)
 */

__int64 __fastcall RegisterHvPerfFeedbackCounters(_QWORD *a1)
{
  return InitPerfFeedbackInternal(a1, (__int64 (__fastcall *)(_QWORD *))RegisterHvFeedbackCountersCallback);
}
