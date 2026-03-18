/*
 * XREFs of ?IsCompositionThread@@YA_NXZ @ 0x18012AA34
 * Callers:
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18012A580 (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x18012A8AC (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 * Callees:
 *     ?IsCompositionThread@CComposition@@QEBA_NXZ @ 0x18012AA60 (-IsCompositionThread@CComposition@@QEBA_NXZ.c)
 */

char __fastcall IsCompositionThread(CComposition *a1)
{
  char v1; // bl

  v1 = 0;
  if ( g_pComposition )
    return CComposition::IsCompositionThread(a1);
  return v1;
}
