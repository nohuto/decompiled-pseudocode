/*
 * XREFs of ?DxgkFeatureNativeFence_GetOSCaps1@@YAJPEAU_DXGKARGCB_FEATURE_NATIVEFENCE_CAPS_1@@@Z @ 0x1400851F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkFeatureNativeFence_GetOSCaps1(struct _DXGKARGCB_FEATURE_NATIVEFENCE_CAPS_1 *a1)
{
  *(_DWORD *)a1 |= 3u;
  return 0LL;
}
