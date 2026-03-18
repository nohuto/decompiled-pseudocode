/*
 * XREFs of _CDrawingContext::PreSubgraph_::_2_::_lambda_1_::operator() @ 0x1801B0CE0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180075BC8 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 */

bool __fastcall CDrawingContext::PreSubgraph_::_2_::_lambda_1_::operator()(
        CMILMatrix **a1,
        const struct Windows::Foundation::Numerics::float4x4 *a2)
{
  char v2; // al

  v2 = *(_BYTE *)a2;
  if ( !*(_BYTE *)a2 )
  {
    v2 = 2 * CMILMatrix::IsFacingUser(*a1, a2) - 1;
    *(_BYTE *)a2 = v2;
  }
  return v2 == 1;
}
