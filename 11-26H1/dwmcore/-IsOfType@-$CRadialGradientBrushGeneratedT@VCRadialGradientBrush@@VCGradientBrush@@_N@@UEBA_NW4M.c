/*
 * XREFs of ?IsOfType@?$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801BD548 (-IsOfType@-$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CRadialGradientBrushGeneratedT<CRadialGradientBrush,CGradientBrush,bool>::IsOfType(
        __int64 a1,
        unsigned __int64 a2)
{
  bool v2; // al
  char v3; // cl

  if ( (_DWORD)a2 == 102 )
    return 1;
  v2 = CGradientBrushGeneratedT<CGradientBrush,CBrush>::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
