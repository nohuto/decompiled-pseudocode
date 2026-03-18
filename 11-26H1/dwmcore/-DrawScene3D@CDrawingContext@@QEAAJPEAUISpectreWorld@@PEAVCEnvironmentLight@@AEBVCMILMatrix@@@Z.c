/*
 * XREFs of ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC
 * Callers:
 *     ?Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180288970 (-Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029120 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005C5A0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18006010C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180069EE0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x18006AE00 (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E5F0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18006F290 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180074F30 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800C8918 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800C9860 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800E99D4 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F4650 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180132790 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801851A0 (-reset@-$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x180190198 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x180196E9C (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1801B2114 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     gsl::final_action__CShapeTree::RenderIntermediate_::_2_::_lambda_2___::_final_action__CShapeTree::RenderIntermediate_::_2_::_lambda_2___ @ 0x1801BE958 (gsl--final_action__CShapeTree--RenderIntermediate_--_2_--_lambda_2___--_final_action__CShapeTree.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1M@Z @ 0x1802037D0 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAUISpectreLightNode@@V?$allocator@PEAUISpectreLightNode@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802345D4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@PEAUISpectreLightNode@@V-$allocator@PEAUIS.c)
 *     ??1?$com_ptr_t@VCSpectreCallbackRenderer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802347B8 (--1-$com_ptr_t@VCSpectreCallbackRenderer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     gsl::final_action__CDrawingContext::DrawScene3D_::_10_::_lambda_1___::_final_action__CDrawingContext::DrawScene3D_::_10_::_lambda_1___ @ 0x1802347DC (gsl--final_action__CDrawingContext--DrawScene3D_--_10_--_lambda_1___--_final_action__CDrawingCon.c)
 *     gsl::final_action__CDrawingContext::DrawScene3D_::_26_::_lambda_2___::_final_action__CDrawingContext::DrawScene3D_::_26_::_lambda_2___ @ 0x1802347FC (gsl--final_action__CDrawingContext--DrawScene3D_--_26_--_lambda_2___--_final_action__CDrawingCon.c)
 *     gsl::final_action__CSpectreCallbackRenderer::Render_::_5_::_lambda_1___::_final_action__CSpectreCallbackRenderer::Render_::_5_::_lambda_1___ @ 0x180234824 (gsl--final_action__CSpectreCallbackRenderer--Render_--_5_--_lambda_1___--_final_action__CSpectre.c)
 *     ?Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCLight@@$0?0@gsl@@PEAPEAV1@@Z @ 0x18025A774 (-Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@.c)
 *     ?UpdateSceneLightInfo@CLight@@QEAAJPEBVCDrawingContext@@@Z @ 0x180264E0C (-UpdateSceneLightInfo@CLight@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawScene3D(
        CDrawingContext *this,
        struct ISpectreWorld *a2,
        struct CEnvironmentLight *a3,
        const struct CMILMatrix *a4)
{
  unsigned __int64 v4; // r15
  unsigned int v6; // edi
  struct CVisual *CurrentVisual; // rax
  const struct CMILMatrix *TopByReference; // rax
  __int128 *v11; // r9
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _QWORD *v16; // rax
  unsigned int v17; // ebx
  struct ISpectreRenderer *SpectreRenderer; // rsi
  int v19; // eax
  __int32 v20; // xmm8_4
  __m128 v21; // xmm7
  struct D2D_VECTOR_3F *v22; // rax
  __m128 v23; // xmm2
  float v24; // xmm10_4
  void (__fastcall *v25)(struct ISpectreRenderer *, struct _LUID *); // rax
  float v26; // xmm0_4
  float v27; // xmm10_4
  int v28; // eax
  int v29; // eax
  float v30; // xmm7_4
  int v31; // eax
  __int64 v32; // rbx
  unsigned int D3DMatrix; // eax
  __int64 v34; // r8
  int v35; // r9d
  int v36; // eax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rbx
  __int64 v41; // r8
  int v42; // eax
  CDeviceManager *v43; // rcx
  int ExistingDevice; // eax
  __m128 v45; // xmm0
  struct ID2D1PrivateCompositorRenderer *v46; // rbx
  __m128 v47; // xmm3
  int v48; // ecx
  __m128 v49; // xmm1
  int v50; // eax
  struct IRenderTargetBitmap *v51; // rbx
  __int64 (__fastcall ***v52)(_QWORD, GUID *, struct D2D_VECTOR_3F *); // rdi
  int v53; // eax
  __int64 v54; // rax
  __int64 (__fastcall *v55)(struct ISpectreRenderer *); // rax
  __int64 v56; // r13
  __int64 v57; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v58; // r8
  char v59; // si
  __int64 v60; // rsi
  __int64 v61; // rdx
  unsigned __int64 v62; // rcx
  size_t v63; // rdi
  __int64 v64; // rsi
  void (__fastcall *v65)(__int64, __int64); // rdi
  __int64 v66; // rax
  void (__fastcall *v67)(__int64, __int64); // rdi
  __int64 v68; // rax
  struct _D3DMATRIX *v69; // rax
  __int64 v70; // r9
  int v71; // eax
  __int64 v72; // rax
  int v73; // eax
  int v74; // eax
  int v76; // [rsp+28h] [rbp-E0h]
  __int64 v77; // [rsp+48h] [rbp-C0h] BYREF
  struct ID2D1PrivateCompositorRenderer *v78; // [rsp+50h] [rbp-B8h] BYREF
  struct IRenderTargetBitmap *v79; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_VECTOR_3F v80; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v81; // [rsp+70h] [rbp-98h] BYREF
  __int64 v82; // [rsp+80h] [rbp-88h]
  CDrawingContext *v83; // [rsp+88h] [rbp-80h] BYREF
  char v84; // [rsp+90h] [rbp-78h]
  _BYTE v85[24]; // [rsp+98h] [rbp-70h] BYREF
  struct _LUID v86; // [rsp+B0h] [rbp-58h] BYREF
  struct _D3DMATRIX v87; // [rsp+B8h] [rbp-50h] BYREF
  int v88; // [rsp+F8h] [rbp-10h]
  __int128 v89; // [rsp+108h] [rbp+0h] BYREF
  char v90; // [rsp+118h] [rbp+10h]
  __int64 v91; // [rsp+120h] [rbp+18h] BYREF
  int v92; // [rsp+128h] [rbp+20h]
  __int64 v93; // [rsp+130h] [rbp+28h] BYREF
  int v94; // [rsp+138h] [rbp+30h]
  float v95; // [rsp+140h] [rbp+38h] BYREF
  float v96; // [rsp+144h] [rbp+3Ch]
  float v97; // [rsp+148h] [rbp+40h]
  struct D2D_RECT_F v98; // [rsp+158h] [rbp+50h] BYREF
  struct D2D_VECTOR_3F v99; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v100[2]; // [rsp+178h] [rbp+70h] BYREF
  int v101; // [rsp+188h] [rbp+80h]
  int v102; // [rsp+18Ch] [rbp+84h]
  unsigned int v103; // [rsp+190h] [rbp+88h]
  _QWORD v104[3]; // [rsp+198h] [rbp+90h] BYREF
  struct D2D_RECT_F v105; // [rsp+1B0h] [rbp+A8h] BYREF
  int v106; // [rsp+1C0h] [rbp+B8h]
  int v107; // [rsp+1C4h] [rbp+BCh]
  struct _D3DMATRIX v108; // [rsp+1C8h] [rbp+C0h] BYREF
  int v109; // [rsp+208h] [rbp+100h]

  v4 = 0LL;
  v6 = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual(this);
  if ( *((_QWORD *)CurrentVisual + 85) > *(_QWORD *)(*((_QWORD *)CurrentVisual + 3) + 680LL) )
  {
    dword_1803DE364 |= 4u;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 280));
    v12 = *v11;
    v13 = v11[1];
    v88 = *((_DWORD *)v11 + 16);
    *(_OWORD *)&v87._11 = v12;
    v14 = v11[2];
    *(_OWORD *)&v87._21 = v13;
    v15 = v11[3];
    *(_OWORD *)&v87._31 = v14;
    *(_OWORD *)&v87._41 = v15;
    CMILMatrix::Multiply((CMILMatrix *)&v87, TopByReference);
    v104[0] = a3;
    v100[1] = v104;
    v16 = v104;
    v100[0] = v104;
    v101 = 3;
    v102 = 3;
    v103 = 1;
    v17 = 0;
    while ( 1 )
    {
      CLight::UpdateSceneLightInfo((CLight *)v16[v17++], this);
      if ( v17 >= v103 )
        break;
      v16 = (_QWORD *)v100[0];
    }
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(*((CSceneResourceManager **)g_pComposition + 84));
    if ( !SpectreRenderer )
      goto LABEL_74;
    v93 = 0LL;
    v94 = 0;
    v91 = 0LL;
    v92 = 0;
    (*(void (__fastcall **)(struct ISpectreWorld *, __int64 *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v93, &v91);
    *(_QWORD *)&v105.left = v93;
    *(_QWORD *)&v105.right = v91;
    v106 = v94;
    memset(v85, 0, sizeof(v85));
    v107 = v92;
    CMILMatrix::Transform3DBoundsHelper<1>((__int64)&v87, &v105.left, (float *)v85);
    v19 = CDrawingContext::PushGpuClipRectInternal((__int64)this, 0LL, (__m128 *)v85, 1, 0);
    v6 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x3FEu, 0LL);
      goto LABEL_74;
    }
    COERCE_FLOAT(v20 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    v83 = this;
    v84 = 1;
    if ( COERCE_FLOAT(LODWORD(v87._44) & v20) < 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v87._44 - 1.0) & v20) < 0.000081380211 )
    {
      v21 = (__m128)LODWORD(FLOAT_1_0);
    }
    else
    {
      v21 = (__m128)LODWORD(FLOAT_1_0);
      v21.m128_f32[0] = 1.0 / v87._44;
    }
    v95 = v21.m128_f32[0] * v87._41;
    v96 = v21.m128_f32[0] * v87._42;
    v80.x = fmaxf(COERCE_FLOAT(v91 & v20), COERCE_FLOAT(v93 & v20));
    v80.y = fmaxf(COERCE_FLOAT(HIDWORD(v91) & v20), COERCE_FLOAT(HIDWORD(v93) & v20));
    v80.z = fmaxf(COERCE_FLOAT(v92 & v20), COERCE_FLOAT(v94 & v20));
    v22 = CMILMatrix::Transform3DVector((CMILMatrix *)&v87, &v99, &v80);
    v23 = v21;
    v24 = sqrtf_0(
            (float)((float)((float)(v21.m128_f32[0] * v22->y) * (float)(v21.m128_f32[0] * v22->y))
                  + (float)((float)(v21.m128_f32[0] * v22->x) * (float)(v21.m128_f32[0] * v22->x)))
          + (float)((float)(v21.m128_f32[0] * v22->z) * (float)(v21.m128_f32[0] * v22->z)))
        + 1.0;
    v25 = *(void (__fastcall **)(struct ISpectreRenderer *, struct _LUID *))(*(_QWORD *)SpectreRenderer + 24LL);
    v26 = v24 + v24;
    v27 = v24 * 4.0;
    v97 = (float)(v21.m128_f32[0] * v87._43) + v26;
    v25(SpectreRenderer, &v86);
    if ( CCommonRegistryData::Scene::EnableDrawToBackbuffer
      && v86.LowPart == *((_DWORD *)this + 12)
      && v86.HighPart == *((_DWORD *)this + 13)
      && !*((_DWORD *)this + 60) )
    {
      v79 = 0LL;
      v28 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter((__int64 *)&v79, (__int64)this, &v105);
      v6 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x42Cu, 0LL);
        goto LABEL_31;
      }
      v29 = *((_DWORD *)this + 790);
      if ( v29 )
        v30 = *(float *)(*((_QWORD *)this + 394) + 4LL * (unsigned int)(v29 - 1));
      else
        v30 = FLOAT_1_0;
      LOBYTE(v77) = 0;
      *(_QWORD *)&v89 = &v77;
      *((_QWORD *)&v89 + 1) = this;
      v90 = 1;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v30 - 1.0) & v20) >= 0.0000011920929 )
      {
        v98 = 0LL;
        CDrawingContext::GetClipBoundsWorld((__int64)this, &v98.left);
        v31 = CDrawingContext::PushD2DLayer(this, 0LL, &v98, 0LL, 0LL, v30, 0, 0);
        v6 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, 0x444u, 0LL);
LABEL_30:
          gsl::final_action__CDrawingContext::DrawScene3D_::_26_::_lambda_2___::_final_action__CDrawingContext::DrawScene3D_::_26_::_lambda_2___((__int64)&v89);
LABEL_31:
          CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v79);
LABEL_65:
          gsl::final_action__CDrawingContext::DrawScene3D_::_10_::_lambda_1___::_final_action__CDrawingContext::DrawScene3D_::_10_::_lambda_1___((__int64)&v83);
LABEL_74:
          DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v100);
          return v6;
        }
        LOBYTE(v77) = 1;
      }
      v32 = v100[0];
      v78 = 0LL;
      gsl::details::extent_type<-1>::extent_type<-1>(&v81, v103);
      if ( (_QWORD)v81 == -1LL || !v32 && (_QWORD)v81 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      D3DMatrix = (unsigned int)CMILMatrix::GetD3DMatrix(&v87, &v108);
      *(_QWORD *)&v98.left = v34;
      *(_QWORD *)&v98.right = v32;
      v36 = CSpectreCallbackRenderer::Create(
              (_DWORD)a2,
              D3DMatrix,
              (unsigned int)&v95,
              v35,
              LODWORD(v27),
              (__int64)&v98,
              (__int64)&v78);
      v6 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0x44Fu, 0LL);
      }
      else
      {
        v37 = CDrawingContext::ApplyRenderStateInternal(this, 0);
        v6 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v37, 0x451u, 0LL);
        }
        else
        {
          v40 = *((_QWORD *)this + 4);
          CD2DContext::FlushDrawList((CD2DContext *)(v40 + 16), v38, v39);
          v42 = CD2DContext::DrawCustomCallbackRendererInternal((CD2DContext *)(v40 + 16), v78, v41);
          v6 = v42;
          if ( v42 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v42, 0x452u, 0LL);
        }
      }
      wil::com_ptr_t<CSpectreCallbackRenderer,wil::err_returncode_policy>::~com_ptr_t<CSpectreCallbackRenderer,wil::err_returncode_policy>((__int64 *)&v78);
      goto LABEL_30;
    }
    v89 = 0LL;
    CDrawingContext::GetClipBoundsWorld((__int64)this, (float *)&v89);
    v78 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v78);
    ExistingDevice = CDeviceManager::GetExistingDevice(v43, v86, &v78);
    v6 = ExistingDevice;
    if ( ExistingDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ExistingDevice, 0x45Cu, 0LL);
      goto LABEL_64;
    }
    v45 = (__m128)DWORD2(v89);
    v46 = v78;
    *(_QWORD *)&v98.left = 0LL;
    v98.right = *((float *)&v89 + 2) - *(float *)&v89;
    v98.bottom = *((float *)&v89 + 3) - *((float *)&v89 + 1);
    v47.m128_f32[0] = (float)(*((float *)&v89 + 3) - *((float *)&v89 + 1)) - 0.0;
    LODWORD(v99.x) = 87;
    *(_QWORD *)&v99.y = 1LL;
    v48 = (int)(float)((float)(*((float *)&v89 + 2) - *(float *)&v89) - 0.0);
    *(_DWORD *)&v85[8] = -1;
    *(_QWORD *)&v85[12] = 0LL;
    v85[20] = 0;
    v79 = 0LL;
    v49.m128_f32[0] = (float)(*((float *)&v89 + 2) - *(float *)&v89) - 0.0;
    v45.m128_f32[0] = (float)v48;
    LODWORD(v80.x) = v48 - _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(v45, v49));
    v23.m128_f32[0] = (float)(int)v47.m128_f32[0];
    *(_QWORD *)v85 = *((_QWORD *)v78 + 118);
    LODWORD(v80.y) = (int)v47.m128_f32[0] - _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(v23, v47));
    *(_WORD *)&v85[21] = 0;
    v85[23] = 0;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v79);
    DWORD2(v81) = 12;
    *(_QWORD *)&v81 = "DWM DwmScene";
    v50 = CD3DDevice::CreateRenderTargetBitmap(
            (__int64)v46,
            (const struct CResourceTag *)&v81,
            (const struct D2D_SIZE_U *)&v80,
            (struct PixelFormatInfo *)&v99,
            (struct RenderTargetInfo *)v85,
            3,
            &v79);
    v6 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v50, 0x478u, 0LL);
      goto LABEL_63;
    }
    v51 = v79;
    *(_QWORD *)&v80.x = 0LL;
    v52 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct D2D_VECTOR_3F *))(*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v79 + 144LL))(v79);
    wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::reset(&v80);
    v53 = (**v52)(v52, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, &v80);
    v6 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v53, 0x47Du, 0LL);
LABEL_69:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v80);
LABEL_63:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v79);
LABEL_64:
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v78);
      goto LABEL_65;
    }
    CMILMatrix::Translate((CMILMatrix *)&v87, COERCE_FLOAT(v89 ^ _xmm), COERCE_FLOAT(DWORD1(v89) ^ _xmm));
    v54 = *(_QWORD *)SpectreRenderer;
    v95 = v95 - *(float *)&v89;
    v55 = *(__int64 (__fastcall **)(struct ISpectreRenderer *))(v54 + 40);
    v96 = v96 - *((float *)&v89 + 1);
    v56 = v55(SpectreRenderer);
    v82 = 0LL;
    v81 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 8LL))(v56);
    *(_QWORD *)v85 = v56;
    v59 = 1;
    *(_QWORD *)&v85[8] = &v81;
    v85[16] = 1;
    if ( !v103 || (v108 = v87, v109 = v88, !CMILMatrix::Invert((CMILMatrix *)&v108, v57, v58)) )
    {
LABEL_54:
      (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v56 + 16LL))(v56, &v95);
      v67 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 24LL);
      v68 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&v80.x + 120LL))(*(_QWORD *)&v80.x, 0LL);
      v67(v56, v68);
      (*(void (__fastcall **)(__int64, struct D2D_RECT_F *))(*(_QWORD *)v56 + 32LL))(v56, &v98);
      v69 = CMILMatrix::GetD3DMatrix(&v87, &v108);
      LOBYTE(v70) = 1;
      LOBYTE(v76) = v59;
      v71 = (*(__int64 (__fastcall **)(__int64, struct ISpectreWorld *, struct _D3DMATRIX *, __int64, int))(*(_QWORD *)v56 + 40LL))(
              v56,
              a2,
              v69,
              v70,
              v76);
      v6 = v71;
      if ( v71 >= 0 )
      {
        gsl::final_action__CSpectreCallbackRenderer::Render_::_5_::_lambda_1___::_final_action__CSpectreCallbackRenderer::Render_::_5_::_lambda_1___(v85);
        if ( (_QWORD)v81 )
        {
          std::_Deallocate<16>((void *)v81, (v82 - v81) & 0xFFFFFFFFFFFFFFF8uLL);
          v82 = 0LL;
          v81 = 0LL;
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v80);
        if ( g_LockAndReadSceneOffscreenTexture )
        {
          v72 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v51 + 144LL))(v51);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v72 + 112LL))(
            v72,
            ((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
        }
        v73 = CDrawingContext::PushTransformInternal(
                (const void **)this,
                0LL,
                (const struct CMILMatrix *)&CMILMatrix::Identity,
                0,
                1);
        v6 = v73;
        if ( v73 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v73, 0x4BDu, 0LL);
        }
        else
        {
          *(_QWORD *)&v99.x = this;
          LOBYTE(v99.z) = 1;
          v74 = CDrawingContext::DrawBitmapRealization(
                  (__int64)this,
                  ((unsigned __int64)v51 + 8) & -(__int64)(v51 != 0LL),
                  &v98.left,
                  (float *)&v89,
                  SLODWORD(FLOAT_1_0));
          v6 = v74;
          if ( v74 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v74, 0x4C6u, 0LL);
          gsl::final_action__CShapeTree::RenderIntermediate_::_2_::_lambda_2___::_final_action__CShapeTree::RenderIntermediate_::_2_::_lambda_2___((__int64)&v99);
        }
        goto LABEL_63;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v71, 0x4B2u, 0LL);
      gsl::final_action__CSpectreCallbackRenderer::Render_::_5_::_lambda_1___::_final_action__CSpectreCallbackRenderer::Render_::_5_::_lambda_1___(v85);
      if ( (_QWORD)v81 )
      {
        std::_Deallocate<16>((void *)v81, (v82 - v81) & 0xFFFFFFFFFFFFFFF8uLL);
        v82 = 0LL;
        v81 = 0LL;
      }
      goto LABEL_69;
    }
    v60 = *((_QWORD *)&v81 + 1);
    v61 = v81;
    v62 = (__int64)(*((_QWORD *)&v81 + 1) - v81) >> 3;
    if ( v103 < v62 )
    {
      v60 = v81 + 8LL * v103;
LABEL_48:
      *((_QWORD *)&v81 + 1) = v60;
      goto LABEL_49;
    }
    if ( v103 > v62 )
    {
      if ( v103 <= (unsigned __int64)((v82 - (__int64)v81) >> 3) )
      {
        v63 = 8 * (v103 - v62);
        memset_0(*((void **)&v81 + 1), 0, v63);
        v61 = v81;
        v60 += v63;
        goto LABEL_48;
      }
      std::vector<ISpectreLightNode *>::_Resize_reallocate<std::_Value_init_tag>((const void **)&v81, v103);
      v60 = *((_QWORD *)&v81 + 1);
      v61 = v81;
    }
LABEL_49:
    if ( (v60 - v61) >> 3 )
    {
      do
      {
        if ( (*(int (__fastcall **)(_QWORD, struct _D3DMATRIX *, unsigned __int64))(**(_QWORD **)(v100[0]
                                                                                                + 8LL * (unsigned int)v4)
                                                                                  + 296LL))(
               *(_QWORD *)(v100[0] + 8LL * (unsigned int)v4),
               &v108,
               v61 + 8 * v4) >= 0 )
        {
          v64 = *(_QWORD *)(v81 + 8 * v4);
          v65 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v64 + 24LL);
          v66 = (*(__int64 (__fastcall **)(struct ISpectreWorld *))(*(_QWORD *)a2 + 40LL))(a2);
          v65(v64, v66);
        }
        ++v4;
        v61 = v81;
      }
      while ( v4 < (__int64)(*((_QWORD *)&v81 + 1) - v81) >> 3 );
    }
    v59 = 0;
    goto LABEL_54;
  }
  return v6;
}
