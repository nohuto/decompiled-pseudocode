/*
 * XREFs of ?IsOfType@?$CColorBrushGeneratedT@VCColorBrush@@VCBrush@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801B6A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CColorBrushGeneratedT<CColorBrush,CBrush>::IsOfType(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( (unsigned int)a2 <= 0x24 )
  {
    v2 = 0x1000090000LL;
    if ( _bittest64(&v2, a2) )
      return 1;
  }
  return result;
}
