/*
 * XREFs of ?DxgkFeatureSample_GetValueCB@@YAJQEAXPEAU_DXGKARGCB_FEATURE_SAMPLE_GETVALUE@@@Z @ 0x140085200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkFeatureSample_GetValueCB(void *const a1, struct _DXGKARGCB_FEATURE_SAMPLE_GETVALUE *a2)
{
  *(_DWORD *)a2 = 100;
  return 0LL;
}
