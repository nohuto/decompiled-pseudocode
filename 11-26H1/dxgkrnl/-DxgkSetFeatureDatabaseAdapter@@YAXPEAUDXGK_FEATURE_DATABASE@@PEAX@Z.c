/*
 * XREFs of ?DxgkSetFeatureDatabaseAdapter@@YAXPEAUDXGK_FEATURE_DATABASE@@PEAX@Z @ 0x1402897FC
 * Callers:
 *     DpiFdoSetFeatureDatabaseDxgAdapter @ 0x1400868AC (DpiFdoSetFeatureDatabaseDxgAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkSetFeatureDatabaseAdapter(struct DXGK_FEATURE_DATABASE *a1, void *a2)
{
  *((_QWORD *)a1 + 116) = a2;
}
