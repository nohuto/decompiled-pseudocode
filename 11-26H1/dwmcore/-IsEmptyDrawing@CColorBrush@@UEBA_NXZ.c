/*
 * XREFs of ?IsEmptyDrawing@CColorBrush@@UEBA_NXZ @ 0x1801B9010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CColorBrush::IsEmptyDrawing(CColorBrush *this)
{
  return COERCE_FLOAT(*((_DWORD *)this + 29) & _xmm) < 0.0000011920929;
}
