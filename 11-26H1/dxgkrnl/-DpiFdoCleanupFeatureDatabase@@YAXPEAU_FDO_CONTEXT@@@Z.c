/*
 * XREFs of ?DpiFdoCleanupFeatureDatabase@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x14006D228
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     DpiFdoResetFdo @ 0x140424504 (DpiFdoResetFdo.c)
 * Callees:
 *     ?DxgkDestroyFeatureDatabase@@YAXPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x140289280 (-DxgkDestroyFeatureDatabase@@YAXPEAUDXGK_FEATURE_DATABASE@@@Z.c)
 */

void __fastcall DpiFdoCleanupFeatureDatabase(struct _FDO_CONTEXT *a1)
{
  struct DXGK_FEATURE_DATABASE *v2; // rcx

  v2 = (struct DXGK_FEATURE_DATABASE *)*((_QWORD *)a1 + 729);
  if ( v2 )
  {
    DxgkDestroyFeatureDatabase(v2);
    *((_QWORD *)a1 + 729) = 0LL;
  }
}
