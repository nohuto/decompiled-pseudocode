/*
 * XREFs of ?IsReadyToDraw@CGradientBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1801CE700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGradientBrush::IsReadyToDraw(CGradientBrush *this, struct CDrawingContext *a2, bool *a3)
{
  *a3 = *((_QWORD *)this + 16) == *((_QWORD *)this + 17);
  return *((_QWORD *)this + 16) != *((_QWORD *)this + 17);
}
