/*
 * XREFs of ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18001661C
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18005D650 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x180015760 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180016450 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?GetID2DEffect@CD2DEffect@@QEAAJPEAPEAUID2D1Effect@@@Z @ 0x180016FBC (-GetID2DEffect@CD2DEffect@@QEAAJPEAPEAUID2D1Effect@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeShadowEffect@CTreeEffectLayer@@AEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180017024 (-InitializeShadowEffect@CTreeEffectLayer@@AEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x1800176A4 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180017A10 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?Pop@CBaseClipStack@@QEAAXXZ @ 0x18005CB40 (-Pop@CBaseClipStack@@QEAAXXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005FB60 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180063BB0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x1800AF4BC (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800C9860 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x180190198 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x1801BA51C (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@PEAVCDrawListEntryBuilder@@@Z @ 0x1802084C4 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUD2D_RECT_F@@$0-0@gsl@@AEBU_D.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderShadow(
        CTreeEffectLayer *this,
        const struct D2D_POINT_2F *a2,
        const struct D2D_SIZE_F *a3,
        float a4,
        float a5,
        struct CDrawingContext *a6,
        struct CDropShadow *a7,
        struct IRenderTargetBitmap *a8)
{
  float v9; // xmm2_4
  ID2D1Effect *v10; // rbx
  float v11; // xmm3_4
  __m128i si128; // xmm7
  struct ID2D1Effect *v13; // rdi
  __m128 v14; // xmm6
  ID2D1Effect *v15; // rsi
  float v16; // xmm1_4
  float v17; // xmm0_4
  FLOAT v18; // xmm3_4
  float v19; // xmm0_4
  FLOAT v20; // xmm1_4
  float v21; // xmm0_4
  FLOAT v22; // xmm0_4
  float v23; // xmm1_4
  int v24; // eax
  unsigned int v25; // r14d
  int v26; // eax
  __int64 v27; // r15
  float Radius; // xmm9_4
  struct Windows::Foundation::Numerics::float4x4 *v29; // r8
  bool v30; // al
  int ID2DEffect; // eax
  CTreeEffectLayer *v32; // rcx
  float v33; // xmm6_4
  __m128 v34; // xmm1
  __m128 v35; // xmm2
  float v36; // xmm11_4
  float v37; // xmm11_4
  __int64 (__fastcall *v38)(__int64, GUID *, CD2DEffect **); // r14
  int v39; // eax
  __int128 v40; // xmm0
  int v41; // eax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // xmm0_8
  __int64 v47; // rax
  struct D2D_VECTOR_3F *v48; // rax
  __int64 v49; // xmm0_8
  float x; // xmm10_4
  float y; // xmm9_4
  float v52; // xmm13_4
  float v53; // xmm14_4
  float v54; // xmm1_4
  struct ID2D1Effect *v55; // r8
  __m128 v56; // xmm1
  __m128 v57; // xmm2
  __int64 (__fastcall *v58)(__int64, GUID *, CD2DEffect **); // r14
  int v59; // eax
  CTreeEffectLayer *v60; // rcx
  __int64 v61; // rcx
  CD2DEffect *v62; // rcx
  __int64 v64; // rax
  __int64 (__fastcall *v65)(__int64, __int64, ID2D1Effect **); // rax
  CTreeEffectLayer *v66; // rcx
  __int64 v67; // rax
  unsigned int v68; // [rsp+28h] [rbp-E0h]
  ID2D1Effect *v69; // [rsp+38h] [rbp-D0h] BYREF
  CD2DEffect *v70; // [rsp+40h] [rbp-C8h] BYREF
  CD2DEffect *v71[2]; // [rsp+48h] [rbp-C0h]
  float v72[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v73; // [rsp+68h] [rbp-A0h] BYREF
  CDropShadow *v74; // [rsp+70h] [rbp-98h]
  ID2D1Effect *v75; // [rsp+78h] [rbp-90h] BYREF
  __m128i v76; // [rsp+88h] [rbp-80h] BYREF
  __m128 v77; // [rsp+98h] [rbp-70h]
  __m128i v78; // [rsp+A8h] [rbp-60h]
  __m128i v79; // [rsp+B8h] [rbp-50h]
  int v80; // [rsp+C8h] [rbp-40h]
  _OWORD v81[4]; // [rsp+D8h] [rbp-30h] BYREF
  int v82; // [rsp+118h] [rbp+10h]
  struct D2D_VECTOR_3F v83; // [rsp+128h] [rbp+20h] BYREF
  float v84; // [rsp+134h] [rbp+2Ch]
  struct D2D_RECT_F v85; // [rsp+138h] [rbp+30h] BYREF
  struct D2D_MATRIX_3X2_F v86; // [rsp+148h] [rbp+40h] BYREF
  struct D2D_MATRIX_3X2_F v87; // [rsp+160h] [rbp+58h] BYREF
  __int128 v88; // [rsp+178h] [rbp+70h] BYREF

  v74 = a7;
  if ( !a8 )
    return 0LL;
  if ( g_LockAndReadLayer )
  {
    v67 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, const struct D2D_POINT_2F *, const struct D2D_SIZE_F *))(*(_QWORD *)a8 + 144LL))(
            a8,
            a2,
            a3);
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v67 + 112LL))(
      v67,
      ((unsigned __int64)a6 + 16) & -(__int64)(a6 != 0LL));
  }
  v9 = *((float *)this + 70);
  v10 = 0LL;
  v11 = *((float *)this + 58);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v13 = 0LL;
  v14 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
  *(__m128i *)&v87.m11 = _mm_load_si128((const __m128i *)&_xmm);
  v15 = 0LL;
  v80 = 0;
  v78 = _mm_load_si128((const __m128i *)&_xmm);
  v79 = _mm_load_si128((const __m128i *)&_xmm);
  v16 = *((float *)this + 57);
  v88 = 0LL;
  v70 = 0LL;
  v17 = (float)*((int *)this + 5);
  *(_QWORD *)&v86.m11 = 0LL;
  *(_QWORD *)&v83.x = 0LL;
  v75 = 0LL;
  *(_QWORD *)&v87.m[2][0] = 0LL;
  v76 = si128;
  v18 = v11 - v17;
  v77 = v14;
  v19 = (float)*((int *)this + 4);
  LOBYTE(v80) = -86;
  *(_WORD *)((char *)&v80 + 1) = 41;
  v73 = 0LL;
  v85.top = v18;
  v20 = v16 - v19;
  v21 = (float)*((int *)this + 6);
  v85.left = v20;
  v22 = (float)(v21 / v9) + v20;
  v23 = (float)*((int *)this + 7);
  v85.right = v22;
  v85.bottom = (float)(v23 / v9) + v18;
  v24 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a6, 0, (int)this + 264, 1, 0);
  v25 = v24;
  if ( v24 >= 0 )
  {
    v26 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, __int64 *, _QWORD))(*(_QWORD *)a8 + 152LL))(
            a8,
            &v73,
            0LL);
    v25 = v26;
    if ( v26 < 0 )
    {
      v68 = 900;
    }
    else
    {
      v27 = (*((_QWORD *)a6 + 4) + 16LL) & -(__int64)(*((_QWORD *)a6 + 4) != 0LL);
      Radius = CDropShadow::GetRadius(v74);
      if ( !*(_BYTE *)(*((_QWORD *)this + 32) + 697LL) )
      {
        LODWORD(v69) = 0;
        v72[0] = 0.0;
        CMILMatrix::Get2DScaleDimensions((CTreeEffectLayer *)((char *)this + 128), (float *)&v69, v72);
        CMILMatrix::Scale((CMILMatrix *)&v76, *(float *)&v69, v72[0], 1.0);
        si128.m128i_i32[0] = v76.m128i_i32[0];
        v14 = v77;
        v81[2] = v78;
        v81[3] = v79;
        v81[0] = v76;
        v81[1] = v77;
        v82 = v80;
        v30 = Windows::Foundation::Numerics::invert(
                (Windows::Foundation::Numerics *)v81,
                (const struct Windows::Foundation::Numerics::float4x4 *)v81,
                v29);
        LOWORD(v82) = v82 & 0xC003;
        if ( v30 )
          CMILMatrix::Multiply((CMILMatrix *)v81, (CTreeEffectLayer *)((char *)this + 128));
      }
      v26 = (*(__int64 (__fastcall **)(__int64, GUID *, CD2DEffect **))(*(_QWORD *)v27 + 176LL))(
              v27,
              &CLSID_D2D12DAffineTransform,
              &v70);
      v25 = v26;
      if ( v26 < 0 )
      {
        v68 = 926;
      }
      else
      {
        ID2DEffect = CD2DEffect::GetID2DEffect(v70, (struct ID2D1Effect **)&v83);
        v25 = ID2DEffect;
        if ( ID2DEffect < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ID2DEffect, 0x39Fu, 0LL);
          v13 = *(struct ID2D1Effect **)&v83.x;
          goto LABEL_34;
        }
        v33 = _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
        v34 = 0LL;
        if ( *(float *)si128.m128i_i32 > v33 )
        {
          *(CD2DEffect **)((char *)v71 + 4) = 0LL;
          HIDWORD(v71[1]) = 1065353216;
          v36 = v33;
          *(float *)v71 = v33 / *(float *)si128.m128i_i32;
          v34.m128_f32[0] = 0.0 - (float)((float)(v33 / *(float *)si128.m128i_i32) * 0.0);
          v34.m128_u64[0] = _mm_unpacklo_ps(v34, (__m128)0LL).m128_u64[0];
        }
        else
        {
          v71[0] = (CD2DEffect *)1065353216;
          LODWORD(v71[1]) = 0;
          v35 = 0LL;
          v36 = *(float *)si128.m128i_i32;
          *((float *)&v71[1] + 1) = *(float *)si128.m128i_i32 / v33;
          v35.m128_f32[0] = 0.0 - (float)((float)(*(float *)si128.m128i_i32 / v33) * 0.0);
          v34.m128_u64[0] = _mm_unpacklo_ps((__m128)0LL, v35).m128_u64[0];
        }
        v13 = *(struct ID2D1Effect **)&v83.x;
        *(_QWORD *)&v87.m[2][0] = v34.m128_u64[0];
        *(_OWORD *)&v87.m11 = *(_OWORD *)v71;
        v37 = v36 * Radius;
        v26 = CTreeEffectLayer::InitializeShadowEffect(v32, *(struct ID2D1Effect **)&v83.x, &v87);
        v25 = v26;
        if ( v26 < 0 )
        {
          v68 = 941;
          goto LABEL_33;
        }
        (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v13 + 112LL))(
          v13,
          0LL,
          v73,
          1LL);
        v38 = *(__int64 (__fastcall **)(__int64, GUID *, CD2DEffect **))(*(_QWORD *)v27 + 176LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v70);
        v26 = v38(v27, &CLSID_D2D1Shadow, &v70);
        v25 = v26;
        if ( v26 < 0 )
        {
          v68 = 945;
        }
        else
        {
          v39 = CD2DEffect::GetID2DEffect(v70, (struct ID2D1Effect **)&v86);
          v25 = v39;
          if ( v39 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x3B2u, 0LL);
            v10 = *(ID2D1Effect **)&v86.m11;
            goto LABEL_34;
          }
          v10 = *(ID2D1Effect **)&v86.m11;
          v40 = *(_OWORD *)((char *)v74 + 72);
          *(float *)&v69 = v37 / 3.0;
          v88 = v40;
          v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, ID2D1Effect **, int))(**(_QWORD **)&v86.m11 + 72LL))(
                  *(_QWORD *)&v86.m11,
                  0LL,
                  0LL,
                  &v69,
                  4);
          v25 = v41;
          if ( v41 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x3B7u, 0LL);
            goto LABEL_34;
          }
          v42 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v10 + 72LL))(
                  v10,
                  1LL,
                  0LL,
                  &v88,
                  16);
          v25 = v42;
          if ( v42 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x3BAu, 0LL);
            goto LABEL_34;
          }
          LODWORD(v69) = 0;
          v26 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, ID2D1Effect **, int))(*(_QWORD *)v10 + 72LL))(
                  v10,
                  2LL,
                  0LL,
                  &v69,
                  4);
          v25 = v26;
          if ( v26 < 0 )
          {
            v68 = 957;
            goto LABEL_33;
          }
          v46 = *((_QWORD *)v74 + 12);
          v83.z = *((FLOAT *)v74 + 26);
          v47 = *((_QWORD *)this + 32);
          *(_QWORD *)&v83.x = v46;
          if ( !*(_BYTE *)(v47 + 697) )
          {
            v48 = CMILMatrix::Transform3DVector(
                    (CTreeEffectLayer *)((char *)this + 128),
                    (struct D2D_VECTOR_3F *)&v86,
                    &v83);
            v49 = *(_QWORD *)&v48->x;
            *(FLOAT *)&v48 = v48->z;
            *(_QWORD *)&v83.x = v49;
            LODWORD(v83.z) = (_DWORD)v48;
          }
          x = v83.x;
          y = v83.y;
          v52 = (float)*((int *)this + 4);
          v53 = (float)*((int *)this + 5);
          v83.x = (float)((float)(v83.x + v85.left) - v37) + v52;
          v83.y = (float)((float)(v83.y + v85.top) - v37) + v53;
          TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v85, v43, v44, v45);
          if ( *((_DWORD *)g_pComposition + 1568) )
          {
            if ( *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference() != 1 )
              goto LABEL_34;
            if ( (*(_BYTE *)(CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference() + 20) & 9) == 0 )
              goto LABEL_34;
            *(_QWORD *)&v86.m11 = 1LL;
            *(_QWORD *)&v86.m[1][0] = &v83;
            v83.y = (float)(y + v85.top) + v53;
            v83.x = (float)(x + v85.left) + v52;
            v84 = (float)(v85.bottom - v85.top) + v83.y;
            v83.z = (float)(v85.right - v85.left) + v83.x;
            CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference();
            v26 = CDrawingContext::FillRectanglesWithSolidColor(a6);
            v25 = v26;
            if ( v26 >= 0 )
              goto LABEL_34;
            v68 = 994;
            goto LABEL_33;
          }
          v54 = *((float *)this + 70);
          if ( v54 < 0.99999881 )
          {
            v64 = *(_QWORD *)v27;
            v69 = 0LL;
            *(_QWORD *)&v86.m[0][1] = 0LL;
            v65 = *(__int64 (__fastcall **)(__int64, __int64, ID2D1Effect **))(v64 + 160);
            *(_QWORD *)&v86.m[2][0] = 0LL;
            v86.m11 = 1.0 / v54;
            v86.m22 = 1.0 / v54;
            v26 = v65(v27, 6LL, &v69);
            v25 = v26;
            if ( v26 < 0 )
            {
              v68 = 1011;
              goto LABEL_33;
            }
            v26 = CTreeEffectLayer::InitializeShadowEffect(v66, v69, &v86);
            v25 = v26;
            if ( v26 < 0 )
            {
              v68 = 1013;
              goto LABEL_33;
            }
            ID2D1Effect::SetInputEffect(v69, 0, v13);
            v55 = v69;
          }
          else
          {
            v55 = v13;
          }
          ID2D1Effect::SetInputEffect(v10, 0, v55);
          v56 = 0LL;
          if ( *(float *)si128.m128i_i32 > v33 )
          {
            *(CD2DEffect **)((char *)v71 + 4) = 0LL;
            HIDWORD(v71[1]) = 1065353216;
            *(float *)v71 = *(float *)si128.m128i_i32 / v33;
            v56.m128_f32[0] = 0.0 - (float)((float)(*(float *)si128.m128i_i32 / v33) * 0.0);
            v56.m128_u64[0] = _mm_unpacklo_ps(v56, (__m128)0LL).m128_u64[0];
          }
          else
          {
            v71[0] = (CD2DEffect *)1065353216;
            LODWORD(v71[1]) = 0;
            v57 = 0LL;
            *((float *)&v71[1] + 1) = v33 / *(float *)si128.m128i_i32;
            v57.m128_f32[0] = 0.0 - (float)((float)(v33 / *(float *)si128.m128i_i32) * 0.0);
            v56.m128_u64[0] = _mm_unpacklo_ps((__m128)0LL, v57).m128_u64[0];
          }
          *(_QWORD *)&v87.m[2][0] = v56.m128_u64[0];
          *(_OWORD *)&v87.m11 = *(_OWORD *)v71;
          v58 = *(__int64 (__fastcall **)(__int64, GUID *, CD2DEffect **))(*(_QWORD *)v27 + 176LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v70);
          v26 = v58(v27, &CLSID_D2D12DAffineTransform, &v70);
          v25 = v26;
          if ( v26 < 0 )
          {
            v68 = 1035;
          }
          else
          {
            v59 = CD2DEffect::GetID2DEffect(v70, &v75);
            v25 = v59;
            if ( v59 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0x40Cu, 0LL);
              v15 = v75;
              goto LABEL_34;
            }
            v15 = v75;
            v26 = CTreeEffectLayer::InitializeShadowEffect(v60, v75, &v87);
            v25 = v26;
            if ( v26 < 0 )
            {
              v68 = 1038;
            }
            else
            {
              ID2D1Effect::SetInputEffect(v15, 0, v10);
              v26 = CDrawingContext::FillEffect(a6, v10, &v85, (struct D2D_POINT_2F *)&v83, 0);
              v25 = v26;
              if ( v26 >= 0 )
              {
LABEL_34:
                CBaseClipStack::Pop((struct CDrawingContext *)((char *)a6 + 3104));
                --*(_QWORD *)(*((_QWORD *)a6 + 93) - 184LL);
                *((_BYTE *)a6 + 8065) = 1;
                goto LABEL_35;
              }
              v68 = 1047;
            }
          }
        }
      }
    }
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, v68, 0LL);
    goto LABEL_34;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x381u, 0LL);
LABEL_35:
  v61 = v73;
  if ( v73 )
  {
    v73 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  }
  if ( v15 )
    (*(void (__fastcall **)(ID2D1Effect *))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v13 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v10 )
    (*(void (__fastcall **)(ID2D1Effect *))(*(_QWORD *)v10 + 16LL))(v10);
  v62 = v70;
  if ( v70 )
  {
    v70 = 0LL;
    (*(void (__fastcall **)(CD2DEffect *))(*(_QWORD *)v62 + 16LL))(v62);
  }
  return v25;
}
