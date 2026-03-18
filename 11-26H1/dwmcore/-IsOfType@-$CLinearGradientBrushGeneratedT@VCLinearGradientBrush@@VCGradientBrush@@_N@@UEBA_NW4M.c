/*
 * XREFs of ?IsOfType@?$CLinearGradientBrushGeneratedT@VCLinearGradientBrush@@VCGradientBrush@@_N@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801BD520
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801BD548 (-IsOfType@-$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CLinearGradientBrushGeneratedT<CLinearGradientBrush,CGradientBrush,bool>::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 77 )
    return 1;
  v2 = CGradientBrushGeneratedT<CGradientBrush,CBrush>::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
