/*
 * XREFs of ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x180063A00
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006CFD0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z @ 0x1800D1D84 (-TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z.c)
 *     ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800E96D0 (-DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800E99D4 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?GetCpuClip@CDrawingContext@@QEBAXPEAVCCpuClip@@@Z @ 0x180202B9C (-GetCpuClip@CDrawingContext@@QEBAXPEAVCCpuClip@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180063BB0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1BF0 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 */

char __fastcall CCpuClippingData::CalcScopeTransformFromWorld(
        const struct CMILMatrix *a1,
        const struct CMILMatrix *a2,
        struct CMILMatrix *a3)
{
  int v3; // eax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  bool v8; // al
  __int64 v9; // r9
  struct CMILMatrix *v10; // r10
  struct Windows::Foundation::Numerics::float4x4 *v12; // r8
  int *v13; // r9
  int v14; // xmm0_4
  __int32 v15; // xmm0_4
  int v16; // xmm1_4
  bool v17; // al
  __m128 v18; // [rsp+20h] [rbp-49h] BYREF
  __m256i v19; // [rsp+30h] [rbp-39h]
  __int128 v20; // [rsp+50h] [rbp-19h]
  int v21; // [rsp+60h] [rbp-9h]
  unsigned __int64 v22; // [rsp+70h] [rbp+7h]
  __int64 v23; // [rsp+78h] [rbp+Fh]
  __m256i v24; // [rsp+80h] [rbp+17h]
  _BYTE v25[20]; // [rsp+A0h] [rbp+37h]

  v3 = *((_DWORD *)a1 + 16);
  v5 = *((_OWORD *)a1 + 1);
  v18 = *(__m128 *)a1;
  v6 = *((_OWORD *)a1 + 2);
  v21 = v3;
  *(_OWORD *)v19.m256i_i8 = v5;
  v7 = *((_OWORD *)a1 + 3);
  *(_OWORD *)&v19.m256i_u64[2] = v6;
  v20 = v7;
  v8 = Windows::Foundation::Numerics::invert(
         (Windows::Foundation::Numerics *)&v18,
         (const struct Windows::Foundation::Numerics::float4x4 *)&v18,
         a3);
  LOWORD(v21) = v21 & 0xC003;
  if ( !v8 )
  {
    if ( COERCE_FLOAT(*(_DWORD *)(v9 + 40) & _xmm) >= 0.000081380211 )
      return 0;
    if ( !(unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(v9) )
      return 0;
    v14 = *v13;
    HIDWORD(v22) = v13[1];
    v24.m256i_i32[0] = v13[4];
    LODWORD(v22) = v14;
    v15 = v13[5];
    *(_OWORD *)&v24.m256i_u64[1] = 0LL;
    *(_QWORD *)&v25[12] = 1065353216LL;
    v16 = v13[12];
    v24.m256i_i32[1] = v15;
    *(_QWORD *)&v25[4] = (unsigned int)v13[13];
    *(_DWORD *)v25 = v16;
    v23 = 0LL;
    v24.m256i_i64[3] = 1065353216LL;
    v19 = v24;
    v18 = (__m128)v22;
    *(_WORD *)&v25[16] = 10248;
    v20 = *(_OWORD *)v25;
    v21 = *(_DWORD *)&v25[16];
    v17 = Windows::Foundation::Numerics::invert(
            (Windows::Foundation::Numerics *)&v18,
            (const struct Windows::Foundation::Numerics::float4x4 *)&v18,
            v12);
    LOWORD(v21) = v21 & 0xC003;
    if ( !v17 )
      return 0;
  }
  CMILMatrix::Multiply(a2, &v18, v10);
  return 1;
}
