/*
 * XREFs of RegisterHvLegacyPccCounters @ 0x14003DE50
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x14000AE10 (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterHvLegacyPccCounters(_QWORD *a1)
{
  return InitLegacyPccInternal(a1, RegisterHvFeedbackCountersCallback);
}
