/*
 * XREFs of ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800E96D0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??0CCpuClip@@QEAA@XZ @ 0x180007CF8 (--0CCpuClip@@QEAA@XZ.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18000F9E0 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x180063A00 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800B5B10 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800CCC30 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?IsPure2DRect@@YA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E987C (-IsPure2DRect@@YA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18013F6F0 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 */

char __fastcall CDrawingContext::DoesCpuClipFullyContainRect(__int64 a1, struct D2D_RECT_F *a2)
{
  CScopedClipStack *v2; // rbx
  __int64 v3; // r9
  __int64 v6; // r9
  __int64 v7; // r10
  const struct CMILMatrix *v8; // r11
  __int64 v9; // rbx
  char v10; // bl
  __m128 v11; // [rsp+20h] [rbp-E0h] BYREF
  __m128 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C0h]
  _QWORD v14[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v15[16]; // [rsp+60h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+70h] [rbp-90h]
  __m128i v17; // [rsp+80h] [rbp-80h]
  __m128i v18; // [rsp+90h] [rbp-70h]
  __m128i v19; // [rsp+A0h] [rbp-60h]
  char v20; // [rsp+B0h] [rbp-50h]
  char v21; // [rsp+B1h] [rbp-4Fh]
  __int64 v22; // [rsp+B4h] [rbp-4Ch]
  char v23; // [rsp+BCh] [rbp-44h]
  _BYTE v24[64]; // [rsp+C0h] [rbp-40h] BYREF
  int v25; // [rsp+100h] [rbp+0h]

  v2 = (CScopedClipStack *)(a1 + 736);
  v3 = *(_QWORD *)(a1 + 744);
  if ( v3 == *(_QWORD *)(a1 + 736) )
    return 0;
  if ( !*(_QWORD *)(v3 - 176) )
    return 0;
  v25 = 0;
  if ( !(unsigned __int8)IsPure2DRect(a2) && !(unsigned __int8)CMILMatrix::ProducesUniformZ<1>(v6 - 84) )
    return 0;
  if ( !CCpuClippingData::CalcScopeTransformFromWorld(
          (const struct CMILMatrix *)(*(_QWORD *)(v7 + 744) - 84LL),
          v8,
          (struct CMILMatrix *)v24) )
    return 0;
  v11 = 0LL;
  if ( (unsigned __int8)IsPure2DRect(a2) )
  {
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v24, a2, v11.m128_f32);
  }
  else
  {
    v13 = 0LL;
    v12 = 0LL;
    CMILMatrix::Transform3DBoundsHelper<0>((__int64)v24, &a2->left, v12.m128_f32);
    v11 = v12;
  }
  CCpuClip::CCpuClip((CCpuClip *)v14);
  if ( CScopedClipStack::HasCpuClipsInScope(v2) )
    v9 = *(_QWORD *)(*((_QWORD *)v2 + 244) - 40LL);
  else
    v9 = 0LL;
  CShapePtr::~CShapePtr((CShapePtr *)v15);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v17 = _mm_load_si128((const __m128i *)&_xmm);
  v21 = v21 & 0xC0 | 0x29;
  v23 = 0;
  v14[0] = v9;
  v22 = 1LL;
  v14[1] = 0LL;
  v18 = _mm_load_si128((const __m128i *)&_xmm);
  v19 = _mm_load_si128((const __m128i *)&_xmm);
  v20 = -86;
  v10 = CCpuClip::FullyContains(v14, &v11, 0LL);
  CShapePtr::~CShapePtr((CShapePtr *)v15);
  return v10;
}
