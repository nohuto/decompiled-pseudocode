/*
 * XREFs of sub_140056FC0 @ 0x140056FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

FEATURE_ENABLED_STATE __fastcall sub_140056FC0(UINT32 a1, FEATURE_CHANGE_TIME a2, _DWORD *a3)
{
  *a3 = 1;
  return GetFeatureEnabledState(a1, a2);
}
