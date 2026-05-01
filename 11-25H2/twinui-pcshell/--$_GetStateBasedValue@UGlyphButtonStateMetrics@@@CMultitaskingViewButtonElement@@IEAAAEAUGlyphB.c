/*
 * XREFs of ??$_GetStateBasedValue@UGlyphButtonStateMetrics@@@CMultitaskingViewButtonElement@@IEAAAEAUGlyphButtonStateMetrics@@AEAU1@00@Z @ 0x1804BD960
 * Callers:
 *     _lambda_6388d5cf85f46d09280dec8197538f8a_::operator() @ 0x1804BDA6C (_lambda_6388d5cf85f46d09280dec8197538f8a_--operator().c)
 * Callees:
 *     ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x1804BD198 (-_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA-AW4ButtonRenderMode@1@XZ.c)
 */

__int64 __fastcall CMultitaskingViewButtonElement::_GetStateBasedValue<GlyphButtonStateMetrics>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // eax

  LOBYTE(v7) = CMultitaskingViewButtonElement::_CalcButtonRenderMode(a1);
  if ( !v7 )
    return a2;
  if ( v7 != 1 && v7 != 3 )
    return a4;
  return a3;
}
