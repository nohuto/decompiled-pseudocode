/*
 * XREFs of ?IsOfType@?$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801BD548
 * Callers:
 *     ?IsOfType@?$CLinearGradientBrushGeneratedT@VCLinearGradientBrush@@VCGradientBrush@@_N@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801BD520 (-IsOfType@-$CLinearGradientBrushGeneratedT@VCLinearGradientBrush@@VCGradientBrush@@_N@@UEBA_NW4M.c)
 *     ?IsOfType@?$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248FF0 (-IsOfType@-$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@UEBA_NW4M.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGradientBrushGeneratedT<CGradientBrush,CBrush>::IsOfType(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( (unsigned int)a2 <= 0x3B )
  {
    v2 = 0x800001000010000LL;
    if ( _bittest64(&v2, a2) )
      return 1;
  }
  return result;
}
