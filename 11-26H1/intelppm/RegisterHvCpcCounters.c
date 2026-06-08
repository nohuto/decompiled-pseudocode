/*
 * XREFs of RegisterHvCpcCounters @ 0x14003E520
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x140036530 (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterHvCpcCounters(__int64 a1)
{
  return InitCpcStatesInternal(a1, (__int64 (__fastcall *)(__int64))RegisterHvFeedbackCountersCallback);
}
