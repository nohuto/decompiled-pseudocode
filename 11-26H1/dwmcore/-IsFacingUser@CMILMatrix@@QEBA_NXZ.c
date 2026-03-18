/*
 * XREFs of ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180075BC8
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180028970 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180071C64 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x1800737B0 (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 *     _CDrawingContext::PreSubgraph_::_2_::_lambda_1_::operator() @ 0x1801B0CE0 (_CDrawingContext--PreSubgraph_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x1800D6104 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800D624C (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 */

bool __fastcall CMILMatrix::IsFacingUser(CMILMatrix *this, const struct Windows::Foundation::Numerics::float4x4 *a2)
{
  float v2; // xmm6_4
  float v3; // xmm7_4
  bool IsInvertibleDeterminant; // al
  int v5; // ecx
  __int64 v6; // rax

  v2 = (float)((float)((float)((float)(*((float *)this + 7) * *((float *)this + 1))
                             - (float)(*((float *)this + 3) * *((float *)this + 5)))
                     * *((float *)this + 12))
             + (float)((float)((float)(*((float *)this + 3) * *((float *)this + 4))
                             - (float)(*((float *)this + 7) * *(float *)this))
                     * *((float *)this + 13)))
     + (float)((float)((float)(*((float *)this + 5) * *(float *)this)
                     - (float)(*((float *)this + 4) * *((float *)this + 1)))
             * *((float *)this + 15));
  v3 = Windows::Foundation::Numerics::determinant(this, a2);
  IsInvertibleDeterminant = CMILMatrix::IsInvertibleDeterminant(v3);
  v5 = 0;
  if ( IsInvertibleDeterminant )
  {
    LOBYTE(v5) = v3 < 0.0;
    return v5 == v2 < 0.0;
  }
  else
  {
    LOBYTE(v6) = v2 >= 0.0;
  }
  return v6;
}
