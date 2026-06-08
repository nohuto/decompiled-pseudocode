/*
 * XREFs of RegisterHvPerfStatesCounters @ 0x14003EF40
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x140037F74 (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterHvPerfStatesCounters(__int64 a1)
{
  return InitPerfStatesInternal(a1, (int (__fastcall *)(__int64))RegisterHvFeedbackCountersCallback);
}
