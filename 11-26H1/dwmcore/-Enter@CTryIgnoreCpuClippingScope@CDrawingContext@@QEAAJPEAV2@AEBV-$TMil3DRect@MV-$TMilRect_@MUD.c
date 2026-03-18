/*
 * XREFs of ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800E99D4
 * Callers:
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x18006F600 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?DrawGenericInk@CDrawingContext@@QEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x180125298 (-DrawGenericInk@CDrawingContext@@QEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x18018B248 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?DrawInk@CDrawingContext@@QEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x180234FCC (-DrawInk@CDrawingContext@@QEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??0CCpuClip@@QEAA@XZ @ 0x180007CF8 (--0CCpuClip@@QEAA@XZ.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18000F9E0 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntialiasSinkContext@@@Z @ 0x18000FB50 (-Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntia.c)
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x180063A00 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18006B470 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006B600 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_R.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800B5B10 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800C9860 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800CCC30 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?IsPure2DRect@@YA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E987C (-IsPure2DRect@@YA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18013F6F0 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::CTryIgnoreCpuClippingScope::Enter(__int64 *a1, __int64 a2, struct D2D_RECT_F *a3)
{
  int v3; // esi
  void *v4; // r14
  CScopedClipStack *v8; // rbx
  __int64 v9; // rdx
  __int64 v11; // rdx
  const struct CMILMatrix *v12; // r9
  const struct CShape *v13; // rdx
  char v14; // bl
  int v15; // eax
  int v16; // eax
  __m128 v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h]
  _BYTE v19[64]; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+90h] [rbp-70h]
  _QWORD v21[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v22[96]; // [rsp+B0h] [rbp-50h] BYREF
  __m128 v23; // [rsp+110h] [rbp+10h] BYREF

  v3 = 0;
  v4 = &CMILMatrix::Identity;
  v8 = (CScopedClipStack *)(a2 + 736);
  v9 = *(_QWORD *)(a2 + 744);
  if ( v9 != *(_QWORD *)v8 )
  {
    if ( *(_QWORD *)(v9 - 176) )
    {
      v20 = 0;
      if ( IsPure2DRect((__int64)a3) || (unsigned __int8)CMILMatrix::ProducesUniformZ<1>(v11 - 84) )
      {
        if ( CCpuClippingData::CalcScopeTransformFromWorld(
               (const struct CMILMatrix *)(*(_QWORD *)(a2 + 744) - 84LL),
               v12,
               (struct CMILMatrix *)v19) )
        {
          v23 = 0LL;
          if ( IsPure2DRect((__int64)a3) )
          {
            CMILMatrix::Transform2DBoundsHelper<0>((__int64)v19, a3, v23.m128_f32);
          }
          else
          {
            v18 = 0LL;
            v17 = 0LL;
            CMILMatrix::Transform3DBoundsHelper<0>((__int64)v19, &a3->left, v17.m128_f32);
            v23 = v17;
          }
          CCpuClip::CCpuClip((CCpuClip *)v21);
          v13 = CScopedClipStack::HasCpuClipsInScope(v8) ? *(const struct CShape **)(*((_QWORD *)v8 + 244) - 40LL) : 0LL;
          CCpuClip::Initialize((CCpuClip *)v21, v13, 0LL, D2D1_ANTIALIAS_MODE_ALIASED, 0, 0LL);
          v14 = CCpuClip::FullyContains(v21, &v23, 0LL);
          CShapePtr::~CShapePtr((CShapePtr *)v22);
          if ( v14 )
          {
            v15 = *(_DWORD *)(a2 + 288);
            v23 = 0LL;
            if ( v15 )
              v4 = (void *)(*(_QWORD *)(a2 + 280) + 68LL * (unsigned int)(v15 - 1));
            v16 = CDrawingContext::PushClippingScope(
                    (struct CDrawingContext *)a2,
                    0LL,
                    1,
                    1u,
                    (__int64)v4,
                    v23.m128_f32);
            v3 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x19D5u, 0LL);
            }
            else
            {
              v3 = CDrawingContext::PushGpuClipRectInternal(a2, 0LL, &v23, 0, 1);
              if ( v3 < 0 )
              {
                CDrawingContext::PopClippingScope((CDrawingContext *)a2, 0);
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x19E2u, 0LL);
              }
              else
              {
                *a1 = a2;
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v3;
}
