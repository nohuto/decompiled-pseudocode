/*
 * XREFs of ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18005D650
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x180016420 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18001661C (-RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180019610 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800197F0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800590B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18005C744 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005D0FC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@AEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingContext@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x18005E0D0 (-GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@AEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingCont.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18006010C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x1800F8EA0 (-IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z.c)
 *     ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x1800FA610 (-PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x180173050 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?RenderMask@CTreeEffectLayer@@AEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x1801CAF28 (-RenderMask@CTreeEffectLayer@@AEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@.c)
 *     ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801D0C2C (-GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderLayer(CTreeEffectLayer *this, struct CDrawingContext *a2)
{
  __int64 v2; // r10
  int v5; // r15d
  CDropShadow *v6; // rax
  float v7; // xmm1_4
  __m128i v8; // xmm2
  __m128i v9; // xmm3
  FLOAT v10; // xmm0_4
  FLOAT v11; // xmm1_4
  float v12; // xmm2_4
  FLOAT v13; // xmm0_4
  float v14; // xmm3_4
  struct CBrush *MaskForLayerVisualNoRef; // rax
  __int64 v16; // r10
  __m128i si128; // xmm7
  struct CBrush *v18; // r12
  __m128i v19; // xmm8
  __m128i v20; // xmm9
  __m128i v21; // xmm10
  __int64 v22; // rax
  char v23; // bl
  int v24; // eax
  unsigned int v25; // esi
  __int64 v26; // rcx
  float v27; // xmm1_4
  CDrawingContext *v28; // rcx
  const struct CMILMatrix *v29; // r13
  int v30; // eax
  struct IRenderTargetBitmap *v31; // rbx
  int v32; // eax
  float top; // xmm4_4
  float left; // xmm1_4
  float right; // xmm3_4
  float bottom; // xmm2_4
  float v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm0_4
  float v40; // xmm0_4
  float v41; // xmm3_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  int v44; // eax
  __m128i v46; // xmm4
  FLOAT v47; // xmm5_4
  float v48; // xmm1_4
  float v49; // xmm2_4
  int v50; // eax
  int v51; // eax
  int v52; // eax
  float v53; // xmm3_4
  float v54; // xmm0_4
  float v55; // xmm1_4
  __int64 v56; // rax
  float v57; // xmm2_4
  float v58; // xmm4_4
  float v59; // xmm4_4
  float v60; // xmm4_4
  float v61; // xmm4_4
  float v62; // xmm2_4
  float v63; // xmm1_4
  struct D2D_SIZE_F *v64; // rdx
  int v65; // eax
  __m128i v66; // xmm0
  __m128i v67; // xmm1
  __m128i v68; // xmm0
  __m128i v69; // xmm1
  int v70; // eax
  int *v71; // rdx
  int v72; // eax
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int64 v77; // rax
  int v78; // eax
  float v79; // xmm4_4
  __int64 v80; // rax
  float v81; // xmm0_4
  int v82; // eax
  int v83; // eax
  int v84; // eax
  struct D2D_RECT_F v85; // [rsp+60h] [rbp-A8h] BYREF
  struct IRenderTargetBitmap *v86; // [rsp+70h] [rbp-98h] BYREF
  struct D2D_SIZE_F v87; // [rsp+78h] [rbp-90h] BYREF
  struct D2D_RECT_F v88; // [rsp+80h] [rbp-88h] BYREF
  struct D2D_SIZE_F v89; // [rsp+90h] [rbp-78h] BYREF
  struct D2D_POINT_2F v90; // [rsp+98h] [rbp-70h] BYREF
  struct D2D_POINT_2F v91[2]; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v92; // [rsp+B8h] [rbp-50h] BYREF
  __m128i v93; // [rsp+C8h] [rbp-40h]
  __m128i v94; // [rsp+D8h] [rbp-30h]
  __m128i v95; // [rsp+E8h] [rbp-20h]
  char v96; // [rsp+F8h] [rbp-10h]
  __int16 v97; // [rsp+F9h] [rbp-Fh]
  char v98; // [rsp+FBh] [rbp-Dh]
  __m128i v99; // [rsp+108h] [rbp+0h] BYREF
  __m128i v100; // [rsp+118h] [rbp+10h]
  __m128i v101; // [rsp+128h] [rbp+20h]
  __m128i v102; // [rsp+138h] [rbp+30h]
  int v103; // [rsp+148h] [rbp+40h]
  int v104[4]; // [rsp+158h] [rbp+50h] BYREF
  __int128 v105; // [rsp+168h] [rbp+60h]
  __int128 v106; // [rsp+178h] [rbp+70h]
  __int128 v107; // [rsp+188h] [rbp+80h]
  int v108; // [rsp+198h] [rbp+90h]
  struct D2D_RECT_F v109; // [rsp+1A8h] [rbp+A0h] BYREF

  v2 = *((_QWORD *)this + 32);
  v103 = 0;
  v5 = 0;
  if ( !v2 || (v6 = *(CDropShadow **)(v2 + 672), (*(_QWORD *)&v85.left = v6) == 0LL) )
  {
    top = *((float *)this + 58);
    v85.left = *((FLOAT *)this + 57);
    left = v85.left;
    right = v85.left + *((float *)this + 59);
    bottom = top + *((float *)this + 60);
    v85.top = top;
    v85.right = right;
    v85.bottom = bottom;
    if ( *(_BYTE *)(v2 + 697) )
    {
      CMILMatrix::Transform2DBoundsHelper<1>((__int64)this + 128, &v85, &v85.left);
      bottom = v85.bottom;
      right = v85.right;
      top = v85.top;
      left = v85.left;
    }
    v37 = *((float *)this + 66);
    if ( v37 > left )
    {
      v85.left = *((FLOAT *)this + 66);
      left = v37;
    }
    v38 = *((float *)this + 67);
    if ( v38 > top )
    {
      v85.top = *((FLOAT *)this + 67);
      top = v38;
    }
    v39 = *((float *)this + 68);
    if ( right > v39 )
    {
      v85.right = *((FLOAT *)this + 68);
      right = v39;
    }
    v40 = *((float *)this + 69);
    if ( bottom > v40 )
    {
      v85.bottom = *((FLOAT *)this + 69);
      bottom = v40;
    }
    if ( right <= left || bottom <= top )
    {
      *(_QWORD *)&v85.right = 0LL;
      *(_QWORD *)&v85.left = 0LL;
    }
    v41 = *((float *)this + 70);
    v42 = *((float *)this + 50);
    v43 = *((float *)this + 49);
    v87 = 0LL;
    v91[0] = 0LL;
    v108 = 0;
    CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
      this,
      v43,
      v42,
      v41,
      v41,
      v91,
      a2,
      (struct CMILMatrix *)v104,
      &v87);
    v44 = CTreeEffectLayer::RenderEffect(this, a2, (struct CMILMatrix *)v104, (int)&v85, (__int64)&v87);
    v25 = v44;
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x209u, 0LL);
      return v25;
    }
LABEL_33:
    if ( !v5 )
      return v25;
    goto LABEL_17;
  }
  v7 = *((float *)this + 58);
  v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v9 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v10 = (float)*((int *)this + 4);
  v86 = 0LL;
  v109.top = v7;
  v11 = v7 + *((float *)this + 60);
  v90.x = v10;
  LODWORD(v12) = _mm_cvtepi32_ps(v8).m128_u32[0];
  v90.y = (float)*((int *)this + 5);
  v109.left = *((FLOAT *)this + 57);
  v13 = v109.left + *((float *)this + 59);
  LODWORD(v14) = _mm_cvtepi32_ps(v9).m128_u32[0];
  v89.width = v12;
  v109.right = v13;
  v89.height = v14;
  v109.bottom = v11;
  MaskForLayerVisualNoRef = CDropShadow::GetMaskForLayerVisualNoRef(v6);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v18 = MaskForLayerVisualNoRef;
  v19 = _mm_load_si128((const __m128i *)&_xmm);
  v20 = _mm_load_si128((const __m128i *)&_xmm);
  v21 = _mm_load_si128((const __m128i *)&_xmm);
  if ( MaskForLayerVisualNoRef )
  {
    v88 = 0LL;
    *(_OWORD *)&v91[0].x = 0LL;
    if ( *(_BYTE *)(v16 + 697) )
    {
      v98 = 0;
      v71 = (int *)&v92;
      v96 = -86;
      v97 = 41;
      v92 = v21;
      v93 = v20;
      v94 = v19;
      v95 = si128;
    }
    else
    {
      v73 = *((_OWORD *)this + 8);
      v71 = v104;
      v74 = *((_OWORD *)this + 9);
      v108 = *((_DWORD *)this + 48);
      *(_OWORD *)v104 = v73;
      v75 = *((_OWORD *)this + 10);
      v105 = v74;
      v76 = *((_OWORD *)this + 11);
      v106 = v75;
      v107 = v76;
    }
    CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(v16, (int)v71, (__int64)v91);
    v12 = v88.right - v88.left;
    v14 = v88.bottom - v88.top;
    v90 = *(struct D2D_POINT_2F *)&v88.left;
    v89.width = v88.right - v88.left;
    v89.height = v88.bottom - v88.top;
  }
  if ( CDrawingContext::IsSurfaceSizeValid(a2, (int)v12, (int)v14) )
  {
    v22 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 2) + 16LL))((char *)a2 + 16);
    LODWORD(v88.right) = 35;
    *(_QWORD *)&v88.left = "DWM Tree Effect Shadow intermediate";
    if ( (int)CDrawingContext::PushOffScreenRenderingLayer(
                (__int64)a2,
                (__int64)&v88,
                (unsigned int *)&v89,
                *(_DWORD *)(v22 + 8),
                1,
                &v86) < 0 )
    {
      v70 = CDrawingContext::PushNoOpLayer(a2, *((const struct CVisual **)this + 32));
      v25 = v70;
      if ( v70 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0x122u, 0LL);
        goto LABEL_48;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v86);
    }
    v23 = 1;
  }
  else
  {
    v72 = CDrawingContext::PushNoOpLayer(a2, *((const struct CVisual **)this + 32));
    v25 = v72;
    if ( v72 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v72, 0x12Cu, 0LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v86);
      return v25;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v86);
    v23 = 0;
  }
  v24 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v25 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x132u, 0LL);
    if ( v86 )
      (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v86 + 16LL))(v86);
    goto LABEL_52;
  }
  v26 = *((_QWORD *)this + 32);
  v5 = 1;
  if ( !v18 )
  {
    v88 = 0LL;
    CLayerVisual::GetUpdatedDropShadowBounds(v26, &v109, &v88);
    v46 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
    v47 = (float)*((int *)this + 5);
    v98 = 0;
    v96 = -86;
    v92 = v21;
    v97 = 41;
    v87 = 0LL;
    v91[0].y = v47;
    v109.top = v88.top + COERCE_FLOAT(LODWORD(v47) ^ _xmm);
    v91[0].x = _mm_cvtepi32_ps(v46).m128_f32[0];
    v93 = v20;
    v109.left = COERCE_FLOAT(LODWORD(v91[0].x) ^ _xmm) + v88.left;
    v109.bottom = v88.bottom + COERCE_FLOAT(LODWORD(v47) ^ _xmm);
    v48 = *((float *)this + 49) - v91[0].x;
    v49 = *((float *)this + 50) - v47;
    v94 = v19;
    v95 = si128;
    v109.right = v88.right + COERCE_FLOAT(LODWORD(v91[0].x) ^ _xmm);
    CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
      this,
      v48,
      v49,
      1.0,
      1.0,
      v91,
      a2,
      (struct CMILMatrix *)&v92,
      &v87);
    v50 = CTreeEffectLayer::RenderEffect(this, a2, (struct CMILMatrix *)&v92, (int)&v109, (__int64)&v87);
    v25 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x181u, 0LL);
      if ( v86 )
        (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v86 + 16LL))(v86);
      goto LABEL_18;
    }
    goto LABEL_10;
  }
  v27 = *(float *)(v26 + 144);
  if ( *(float *)(v26 + 140) != 0.0 && v27 != 0.0 )
  {
    v77 = *(_QWORD *)v18;
    v87.width = *(FLOAT *)(v26 + 140);
    v87.height = v27;
    v109 = 0LL;
    v78 = (*(__int64 (__fastcall **)(struct CBrush *, struct D2D_SIZE_F *, struct D2D_RECT_F *))(v77 + 192))(
            v18,
            &v87,
            &v109);
    v25 = v78;
    if ( v78 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v78, 0x142u, 0LL);
    }
    else
    {
      v79 = v109.left;
      v80 = *((_QWORD *)this + 32);
      v88 = v109;
      v91[0].x = v109.right - v109.left;
      v81 = v109.top;
      v91[0].y = v109.bottom - v109.top;
      if ( !*(_BYTE *)(v80 + 697) )
      {
        CMILMatrix::Transform2DBoundsHelper<1>((__int64)this + 128, &v109, &v88.left);
        v81 = v88.top;
        v79 = v88.left;
      }
      v98 = 0;
      v92 = v21;
      v93 = v20;
      v97 = 41;
      v94 = v19;
      v95 = si128;
      v96 = -86;
      CMILMatrix::Translate((CMILMatrix *)&v92, v79 - v90.x, v81 - v90.y);
      v82 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v92, 0, 1);
      v25 = v82;
      if ( v82 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v82, 0x156u, 0LL);
      }
      else
      {
        v5 = 2;
        v83 = (*(__int64 (__fastcall **)(struct CBrush *, struct CDrawingContext *, struct D2D_POINT_2F *, _QWORD))(*(_QWORD *)v18 + 208LL))(
                v18,
                a2,
                v91,
                0LL);
        v25 = v83;
        if ( v83 >= 0 )
        {
          CDrawingContext::PopTransformInternal(a2, 1);
          goto LABEL_10;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v83, 0x15Bu, 0LL);
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v86);
    do
    {
LABEL_18:
      CDrawingContext::PopTransformInternal(a2, 1);
      --v5;
    }
    while ( v5 );
LABEL_52:
    if ( v23 )
      CDrawingContext::PopLayer(a2);
    return v25;
  }
LABEL_10:
  CDrawingContext::PopTransformInternal(a2, 1);
  CDrawingContext::PopLayer(v28);
  if ( *(_BYTE *)(*((_QWORD *)this + 32) + 697LL) )
  {
    v66 = *((__m128i *)this + 8);
    v67 = *((__m128i *)this + 9);
    v103 = *((_DWORD *)this + 48);
    v99 = v66;
    v68 = *((__m128i *)this + 10);
    v100 = v67;
    v69 = *((__m128i *)this + 11);
    v101 = v68;
    v102 = v69;
  }
  else
  {
    v99 = v21;
    v100 = v20;
    BYTE1(v103) = BYTE1(v103) & 0xC0 | 0x29;
    v101 = v19;
    v102 = si128;
    LOBYTE(v103) = -86;
  }
  v29 = (CTreeEffectLayer *)((char *)this + 128);
  v30 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v99, 0, 1);
  v25 = v30;
  if ( v30 >= 0 )
  {
    v31 = v86;
    v5 = 1;
    v32 = CTreeEffectLayer::RenderShadow(this, &v90, &v89, 1.0, 1.0, a2, *(struct CDropShadow **)&v85.left, v86);
    v25 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x1A2u, 0LL);
      goto LABEL_15;
    }
    v98 = 0;
    v92 = v21;
    v93 = v20;
    v94 = v19;
    v95 = si128;
    v96 = -86;
    v97 = 41;
    if ( !v18 )
    {
      CMILMatrix::Translate((CMILMatrix *)&v92, (float)*((int *)this + 4), (float)*((int *)this + 5));
      if ( *(_BYTE *)(*((_QWORD *)this + 32) + 697LL) )
        CMILMatrix::Multiply((CMILMatrix *)&v92, v29);
      v51 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v92, 0, 1);
      v25 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x1E3u, 0LL);
LABEL_15:
        if ( v31 )
          (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v31 + 16LL))(v31);
        goto LABEL_17;
      }
      v5 = 2;
      v52 = CTreeEffectLayer::RenderMask(this, &v89, a2, v31);
      v25 = v52;
      if ( v52 >= 0 )
      {
        CDrawingContext::PopTransformInternal(a2, 1);
        v5 = 1;
LABEL_45:
        if ( v31 )
          (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v31 + 16LL))(v31);
        goto LABEL_33;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x1E6u, 0LL);
LABEL_82:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v86);
LABEL_17:
      v23 = 0;
      goto LABEL_18;
    }
    v53 = *((float *)this + 58);
    v54 = *((float *)this + 57);
    v55 = v53 + *((float *)this + 60);
    v56 = *((_QWORD *)this + 32);
    v57 = v54 + *((float *)this + 59);
    v85.left = v54;
    v85.top = v53;
    v85.bottom = v55;
    v85.right = v57;
    if ( *(_BYTE *)(v56 + 697) )
    {
      CMILMatrix::Transform2DBoundsHelper<1>((__int64)v29, &v85, &v85.left);
      CMILMatrix::Translate((CMILMatrix *)&v92, (float)*((int *)this + 4), (float)*((int *)this + 5));
      CMILMatrix::Multiply((CMILMatrix *)&v92, v29);
      v84 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v92, 0, 1);
      v25 = v84;
      if ( v84 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v84, 0x1BEu, 0LL);
        goto LABEL_82;
      }
      v55 = v85.bottom;
      v5 = 2;
      v57 = v85.right;
      v53 = v85.top;
      v54 = v85.left;
    }
    v58 = *((float *)this + 66);
    if ( v58 > v54 )
    {
      v85.left = *((FLOAT *)this + 66);
      v54 = v58;
    }
    v59 = *((float *)this + 67);
    if ( v59 > v53 )
    {
      v85.top = *((FLOAT *)this + 67);
      v53 = v59;
    }
    v60 = *((float *)this + 68);
    if ( v57 > v60 )
    {
      v85.right = *((FLOAT *)this + 68);
      v57 = v60;
    }
    v61 = *((float *)this + 69);
    if ( v55 > v61 )
    {
      v85.bottom = *((FLOAT *)this + 69);
      v55 = v61;
    }
    if ( v57 <= v54 || v55 <= v53 )
    {
      *(_QWORD *)&v85.right = 0LL;
      *(_QWORD *)&v85.left = 0LL;
    }
    v62 = *((float *)this + 50);
    v63 = *((float *)this + 49);
    v87 = 0LL;
    v91[0] = 0LL;
    CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
      this,
      v63,
      v62,
      1.0,
      1.0,
      v91,
      a2,
      (struct CMILMatrix *)&v92,
      &v87);
    v64 = &v87;
    if ( *(_BYTE *)(*((_QWORD *)this + 32) + 696LL) )
      v64 = &v89;
    v65 = CTreeEffectLayer::RenderEffect(this, a2, (struct CMILMatrix *)&v92, (int)&v85, (__int64)v64);
    v25 = v65;
    if ( v65 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v65, 0x1D2u, 0LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v86);
      goto LABEL_33;
    }
    goto LABEL_45;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x196u, 0LL);
LABEL_48:
  if ( v86 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v86 + 16LL))(v86);
  return v25;
}
