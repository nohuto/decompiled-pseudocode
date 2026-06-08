/*
 * XREFs of RegisterHvLegacyPccCounters @ 0x14003EA60
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x14000D7A4 (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterHvLegacyPccCounters(_QWORD *a1)
{
  return InitLegacyPccInternal(a1, RegisterHvFeedbackCountersCallback);
}
