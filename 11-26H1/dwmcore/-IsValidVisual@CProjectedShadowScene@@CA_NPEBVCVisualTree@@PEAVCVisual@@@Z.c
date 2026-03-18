/*
 * XREFs of ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800D6064
 * Callers:
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x1800D5A50 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x1800D5BEC (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x1800D78A0 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x1800D6104 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800D624C (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 */

bool __fastcall CProjectedShadowScene::IsValidVisual(struct CVisual **a1, struct CVisual *a2)
{
  struct CVisual *v2; // r8
  struct CVisual *v3; // r9
  struct CVisual **v4; // rax
  const struct Windows::Foundation::Numerics::float4x4 *v6; // rdx
  float v7; // xmm0_4
  _BYTE v8[64]; // [rsp+30h] [rbp-58h] BYREF
  int v9; // [rsp+70h] [rbp-18h]

  v2 = a2;
  v3 = a2;
  while ( 1 )
  {
    if ( !v2 || (*((_BYTE *)v2 + 102) & 0x20) == 0 || *((char *)v2 + 101) < 0 )
      return 0;
    if ( v2 == a1[9] )
      break;
    if ( v3 )
    {
      v4 = (struct CVisual **)*((_QWORD *)v3 + 11);
      v3 = (struct CVisual *)v4;
      if ( v4 )
      {
        if ( v2 == (struct CVisual *)v4 )
          return 0;
        v3 = v4[11];
        if ( v2 == v3 )
          return 0;
      }
    }
    v2 = (struct CVisual *)*((_QWORD *)v2 + 11);
  }
  v9 = 0;
  if ( (int)CVisual::GetWorldTransform(a2, (const struct CVisualTree *)a1, (struct CMILMatrix *)v8, 0LL, 0LL) < 0 )
    return 0;
  v7 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v8, v6);
  return CMILMatrix::IsInvertibleDeterminant(v7);
}
