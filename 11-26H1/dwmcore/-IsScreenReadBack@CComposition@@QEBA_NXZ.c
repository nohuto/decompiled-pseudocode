/*
 * XREFs of ?IsScreenReadBack@CComposition@@QEBA_NXZ @ 0x1801D2400
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CComposition::IsScreenReadBack(CComposition *this)
{
  return *((_BYTE *)this + 6458);
}
