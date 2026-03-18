/*
 * XREFs of ?IsValid@CPositionedLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18026CF40
 * Callers:
 *     <none>
 * Callees:
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x180057D90 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x1800D6104 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800D624C (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 */

bool __fastcall CPositionedLight::IsValid(
        CPositionedLight *this,
        const struct CVisualTree *a2,
        const struct CVisual *a3)
{
  __int64 v5; // rdx
  CVisual *v6; // rcx
  const struct Windows::Foundation::Numerics::float4x4 *v7; // rdx
  float v8; // xmm0_4
  _BYTE v10[64]; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+70h] [rbp-18h]

  v5 = *((_QWORD *)this + 29);
  if ( !v5 )
    return 0;
  if ( !CVisualTree::_IsInTree((__int64)a2, v5, 1) )
    return 0;
  v6 = (CVisual *)*((_QWORD *)this + 29);
  v11 = 0;
  if ( (int)CVisual::GetWorldTransform(v6, a2, (struct CMILMatrix *)v10, 0LL, 0LL) < 0 )
    return 0;
  v8 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v10, v7);
  return CMILMatrix::IsInvertibleDeterminant(v8);
}
