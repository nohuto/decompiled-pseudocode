/*
 * XREFs of ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18005E3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800590B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E228 (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x18005E3C4 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18005EB50 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005FB60 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18006010C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801728A0 (-CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180172B60 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180196DBC (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 */

__int64 __fastcall CTreeEffectLayer::CalcDeviceTransformDelta(
        CTreeEffectLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  char *v3; // r15
  unsigned int v7; // r14d
  __int64 v8; // rcx
  int ShadowBounds; // eax
  char *v10; // r8
  __int64 v11; // r11
  FLOAT v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm6_4
  float v15; // xmm0_4
  int v16; // eax
  __m128i v17; // xmm1
  int v18; // eax
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  unsigned int v22; // eax
  __m128i v23; // xmm2
  int v24; // eax
  const struct CVisual *v25; // r11
  int v26; // eax
  struct D2D_RECT_F v27; // [rsp+38h] [rbp-39h] BYREF
  __m128i v28; // [rsp+48h] [rbp-29h] BYREF
  __m128i si128; // [rsp+58h] [rbp-19h]
  __m128i v30; // [rsp+68h] [rbp-9h]
  __m128i v31; // [rsp+78h] [rbp+7h]
  int v32; // [rsp+88h] [rbp+17h]
  FLOAT v33; // [rsp+D8h] [rbp+67h] BYREF
  FLOAT v34; // [rsp+E0h] [rbp+6Fh] BYREF

  v3 = (char *)this + 128;
  v33 = 0.0;
  v34 = 0.0;
  v7 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 280), (CTreeEffectLayer *)((char *)this + 128));
  v8 = *((_QWORD *)this + 32);
  if ( v8 )
  {
    v27 = 0LL;
    ShadowBounds = CLayerVisual::GetShadowBounds(v8, &v27);
    v7 = ShadowBounds;
    if ( ShadowBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShadowBounds, 0x24Eu, 0LL);
      return v7;
    }
    if ( v27.right <= v27.left || v27.bottom <= v27.top )
    {
      *(_OWORD *)((char *)this + 212) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
    }
    else
    {
      v10 = (char *)this + 212;
      if ( *(_BYTE *)(*((_QWORD *)this + 32) + 697LL) )
        CDrawingContext::CalcLocalSpaceClippedBounds(a2, &v27, v10);
      else
        CDrawingContext::CalcWorldSpaceClippedBounds(a2, &v27, v10);
    }
  }
  if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(*((CLayerVisual **)this + 32)) )
  {
    v32 = 10496;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v22 = -*((_DWORD *)this + 5);
    v31 = _mm_load_si128((const __m128i *)&_xmm);
    v28 = _mm_load_si128((const __m128i *)&_xmm);
    v30 = _mm_load_si128((const __m128i *)&_xmm);
    v23 = _mm_cvtsi32_si128(v22);
    v24 = -*((_DWORD *)this + 4);
    LOBYTE(v32) = -86;
    CMILMatrix::Translate((CMILMatrix *)&v28, (float)v24, _mm_cvtepi32_ps(v23).m128_f32[0]);
    CMILMatrix::Scale((CMILMatrix *)&v28, *((float *)this + 70), *((float *)this + 70), 1.0);
    v26 = CDrawingContext::PushTransformInternal(a2, v25, (const struct CMILMatrix *)&v28, 0, 1);
    v7 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x275u, 0LL);
    }
    else
    {
      CVisual::GetEffectiveSize(*((CVisual **)this + 32), &v33, &v34);
      v27.bottom = v34;
      v27.right = v33;
      *(_QWORD *)&v27.left = 0LL;
      CMILMatrix::Transform2DBoundsHelper<1>((__int64)&v28, &v27, (float *)this + 49);
      *(_QWORD *)((char *)a3 + 60) = 1065353216LL;
      *(_QWORD *)a3 = 1065353216LL;
      *((_QWORD *)a3 + 1) = 0LL;
      *((_DWORD *)a3 + 4) = 0;
      *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
      *(_QWORD *)((char *)a3 + 28) = 0LL;
      *((_DWORD *)a3 + 9) = 0;
      *((_QWORD *)a3 + 5) = 1065353216LL;
      *((_QWORD *)a3 + 6) = 0LL;
      *((_DWORD *)a3 + 14) = 0;
      *((_BYTE *)a3 + 65) &= 0xE9u;
      *((_BYTE *)a3 + 65) |= 0x29u;
      *((_BYTE *)a3 + 64) = -86;
    }
  }
  else
  {
    v12 = *(float *)(v11 + 144);
    v27.right = *(FLOAT *)(v11 + 140);
    v27.bottom = v12;
    *(_QWORD *)&v27.left = 0LL;
    CMILMatrix::Transform2DBoundsHelper<1>((__int64)v3, &v27, (float *)this + 49);
    v13 = *((float *)this + 51) - *((float *)this + 49);
    v14 = *((float *)this + 70);
    v32 = 10666;
    *((float *)this + 51) = (float)(v13 * v14) + *((float *)this + 49);
    v15 = (float)((float)(*((float *)this + 52) - *((float *)this + 50)) * v14) + *((float *)this + 50);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v31 = _mm_load_si128((const __m128i *)&_xmm);
    *((float *)this + 52) = v15;
    v16 = -*((_DWORD *)this + 5);
    v28 = _mm_load_si128((const __m128i *)&_xmm);
    v30 = _mm_load_si128((const __m128i *)&_xmm);
    CMILMatrix::Translate((CMILMatrix *)&v28, (float)-*((_DWORD *)this + 4), (float)v16);
    CMILMatrix::Scale((CMILMatrix *)&v28, v14, v14, 1.0);
    v17 = si128;
    v18 = v32;
    *(__m128i *)a3 = v28;
    v19 = v30;
    *((__m128i *)a3 + 1) = v17;
    v20 = v31;
    *((__m128i *)a3 + 2) = v19;
    *((__m128i *)a3 + 3) = v20;
    *((_DWORD *)a3 + 16) = v18;
  }
  return v7;
}
