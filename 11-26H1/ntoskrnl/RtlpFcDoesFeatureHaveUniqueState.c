/*
 * XREFs of RtlpFcDoesFeatureHaveUniqueState @ 0x14077D174
 * Callers:
 *     RtlpFcCreateAndAddFeatureFromUpdate @ 0x14077AD38 (RtlpFcCreateAndAddFeatureFromUpdate.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140B1986C (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpFcDoesFeatureHaveUniqueState(_DWORD *a1)
{
  return *a1 && (a1[1] & 0xFF70) != 0;
}
