/*
 * XREFs of RtlpFcDoesFeatureHaveUniqueState @ 0x14077FC68
 * Callers:
 *     RtlpFcCreateAndAddFeatureFromUpdate @ 0x14077DC68 (RtlpFcCreateAndAddFeatureFromUpdate.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140B1BCBC (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpFcDoesFeatureHaveUniqueState(_DWORD *a1)
{
  return *a1 && (a1[1] & 0xFF70) != 0;
}
