/*
 * XREFs of RegisterHvCpcCounters @ 0x14003D910
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x140032B70 (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterHvCpcCounters(__int64 a1)
{
  return InitCpcStatesInternal(a1, (__int64 (__fastcall *)(__int64))RegisterHvFeedbackCountersCallback);
}
