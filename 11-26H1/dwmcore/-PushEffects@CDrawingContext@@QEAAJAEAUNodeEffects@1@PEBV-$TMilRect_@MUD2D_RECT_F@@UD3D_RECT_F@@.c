/*
 * XREFs of ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800C6AD0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001F080 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x18005D0C0 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18005EB50 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800AFD90 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800C70F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUD2D_POINTANDSIZE_L@@@Z @ 0x1800C8498 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUD2D_POINTANDSIZE_L@@@Z.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBUMilColorTransform@@PEAPEAV1@@Z @ 0x1800C84F8 (-Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBUMilColorTransfor.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800C86B0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x1800C88D0 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800F898C (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@MM@Z @ 0x1800F9400 (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_PO.c)
 *     ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x1800FA610 (-PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 *     ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x180122188 (-GetColorSpace@CVisual@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180236B20 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushEffects(
        struct IDeviceTarget **this,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  unsigned int v7; // edi
  __int32 v8; // xmm2_4
  float v11; // xmm1_4
  int v12; // eax
  char v13; // r15
  const struct CVisual *v14; // r13
  CSparseStorage::AllocatedStorage *v15; // rcx
  int v16; // eax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  CColorTransformLayer *v19; // r15
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  struct IDeviceTarget *v25; // rax
  struct CSparseStorage::DataInfo *Slot; // rax
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  CEffectBrush **v31; // rax
  CEffectBrush *v32; // rcx
  int v33; // eax
  int v34; // eax
  float v35; // xmm0_4
  int v36; // eax
  CVisual *v37; // rcx
  CEffectBrush *EffectInternal; // rax
  int v39; // eax
  float v40; // xmm0_4
  int v41; // eax
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  __int64 v43; // [rsp+40h] [rbp-A1h] BYREF
  struct CColorTransformLayer *v44; // [rsp+48h] [rbp-99h] BYREF
  __int64 v45; // [rsp+50h] [rbp-91h] BYREF
  __int128 v46; // [rsp+58h] [rbp-89h] BYREF
  __int64 v47; // [rsp+68h] [rbp-79h]
  __m128i si128; // [rsp+70h] [rbp-71h] BYREF
  __m128i v49; // [rsp+80h] [rbp-61h]
  __m128i v50; // [rsp+90h] [rbp-51h]
  __m128i v51; // [rsp+A0h] [rbp-41h]
  __int128 v52; // [rsp+B0h] [rbp-31h]
  __int128 v53; // [rsp+C0h] [rbp-21h]
  int v54; // [rsp+D0h] [rbp-11h]

  v7 = 0;
  COERCE_FLOAT(v8 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  *a7 = 0;
  v11 = *((float *)a2 + 9);
  v47 = a5;
  v45 = a6;
  if ( COERCE_FLOAT(LODWORD(v11) & v8) < 0.0000011920929 )
  {
    *a7 = 1;
    return v7;
  }
  if ( a2[1]
    || *((_BYTE *)a2 + 185)
    || *((_BYTE *)a2 + 186)
    || *((_BYTE *)a2 + 187)
    || *((_BYTE *)a2 + 188)
    || *((_DWORD *)a2 + 8)
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - 1.0) & v8) >= 0.0000011920929 )
  {
    v12 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal((struct CDrawingContext *)this);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xD56u, 0LL);
      return v7;
    }
    if ( !*a7 )
    {
      v13 = 0;
      if ( *((_BYTE *)a2 + 185) )
      {
        v14 = (const struct CVisual *)*a2;
        v15 = *(CSparseStorage::AllocatedStorage **)(*a2 + 216LL);
        if ( (*((_DWORD *)v15 + 1) & 0x8000) != 0 )
        {
          Slot = CSparseStorage::AllocatedStorage::FindSlot(v15, 0x11u);
          v28 = *(__m128i *)((char *)Slot + 20);
          si128 = *(__m128i *)((char *)Slot + 4);
          v29 = *(__m128i *)((char *)Slot + 36);
          v49 = v28;
          v30 = *(__m128i *)((char *)Slot + 52);
          v50 = v29;
          v17 = *(_OWORD *)((char *)Slot + 68);
          v51 = v30;
          v18 = *(_OWORD *)((char *)Slot + 84);
          v16 = *((_DWORD *)Slot + 25);
        }
        else
        {
          v16 = 1065353216;
          si128 = (__m128i)xmmword_1802F3860;
          v49 = (__m128i)xmmword_1802F3870;
          v50 = (__m128i)xmmword_1802F3880;
          v17 = xmmword_1802F38A0;
          v51 = (__m128i)xmmword_1802F3890;
          v18 = xmmword_1802F38B0;
        }
        v52 = v17;
        v54 = v16;
        v19 = 0LL;
        v53 = v18;
        v44 = 0LL;
        v46 = 0LL;
        v20 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(
                (CDrawingContext *)this,
                (struct D2D_POINTANDSIZE_L *)&v46);
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0xE57u, 0LL);
        }
        else
        {
          v21 = CColorTransformLayer::Create(
                  this[3],
                  (const struct D2D_POINTANDSIZE_L *)&v46,
                  (const struct MilColorTransform *)&si128,
                  &v44);
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0xE5Cu, 0LL);
            v19 = v44;
          }
          else
          {
            v19 = v44;
            v22 = CDrawingContext::PushLayer((CDrawingContext *)this, v14, v44, 1, 1);
            if ( v22 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0xE62u, 0LL);
            else
              v19 = 0LL;
          }
        }
        if ( v19 )
          CColorTransformLayer::`vector deleting destructor'(v19, 1);
        v13 = 1;
      }
      if ( *((_BYTE *)a2 + 186) )
      {
        v37 = (CVisual *)*a2;
        LOBYTE(v43) = 0;
        EffectInternal = CVisual::GetEffectInternal(v37);
        v39 = CDrawingContext::PushEffectLayer(
                (CDrawingContext *)this,
                (struct CVisual *)*a2,
                v45,
                EffectInternal,
                (__int64)&v43);
        v7 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v39, 0xD74u, 0LL);
          return v7;
        }
        v13 = 1;
        *a7 |= v43;
      }
      if ( *((_BYTE *)a2 + 187) )
      {
        v31 = (CEffectBrush **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 232LL))(*a2);
        v32 = 0LL;
        LOBYTE(v43) = 0;
        if ( v31 )
          v32 = *v31;
        v33 = CDrawingContext::PushEffectLayer((CDrawingContext *)this, (struct CVisual *)*a2, v45, v32, (__int64)&v43);
        v7 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0xD8Du, 0LL);
          return v7;
        }
        v13 = 1;
        *a7 |= v43;
      }
      if ( *((_DWORD *)a2 + 8) )
      {
        v46 = 0LL;
        v34 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(
                (CDrawingContext *)this,
                (struct D2D_POINTANDSIZE_L *)&v46);
        v7 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0xD96u, 0LL);
          return v7;
        }
        LODWORD(v52) = 10666;
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        v49 = _mm_load_si128((const __m128i *)&_xmm);
        v50 = _mm_load_si128((const __m128i *)&_xmm);
        v51 = _mm_load_si128((const __m128i *)&_xmm);
        CMatrixStack::Top((CMatrixStack *)(this + 35), (struct CMILMatrix *)&si128);
        LODWORD(v45) = 0;
        LODWORD(v44) = 0;
        CMILMatrix::Get2DScaleDimensionsWithPerspective((__int64)&si128, (float *)&v45, (float *)&v44, 0LL);
        v35 = *(float *)&v45 <= 1.0 ? 1.0 - *(float *)&v45 : *(float *)&v45 - 1.0;
        if ( v35 > 0.0000099999997
          || (*(float *)&v44 <= 1.0 ? (v40 = 1.0 - *(float *)&v44) : (v40 = *(float *)&v44 - 1.0), v40 > 0.0000099999997) )
        {
          v36 = CDrawingContext::PushResampleLayer(this, *a2, *((unsigned int *)a2 + 8), &v46, v45, (_DWORD)v44);
          v7 = v36;
          if ( v36 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0xDA6u, 0LL);
            return v7;
          }
          v13 = 1;
        }
      }
      if ( *((_BYTE *)a2 + 188) )
      {
        ColorSpace = CVisual::GetColorSpace((CVisual *)*a2);
        CDrawingContext::PushColorSpaceLayer((CDrawingContext *)this, (const struct CVisual *)*a2, ColorSpace);
      }
      else if ( !v13 )
      {
        return v7;
      }
      v23 = *((_DWORD *)this + 72);
      if ( v23 )
      {
        v24 = (unsigned int)(v23 - 1);
        v25 = this[35];
        *(_OWORD *)(a2 + 5) = *(_OWORD *)((char *)v25 + 68 * v24);
        *(_OWORD *)(a2 + 7) = *(_OWORD *)((char *)v25 + 68 * v24 + 16);
        *(_OWORD *)(a2 + 9) = *(_OWORD *)((char *)v25 + 68 * v24 + 32);
        *(_OWORD *)(a2 + 11) = *(_OWORD *)((char *)v25 + 68 * v24 + 48);
        *((_DWORD *)a2 + 26) = *((_DWORD *)v25 + 17 * v24 + 16);
      }
      else
      {
        *(_QWORD *)((char *)a2 + 100) = 1065353216LL;
        a2[5] = 1065353216LL;
        a2[6] = 0LL;
        *((_DWORD *)a2 + 14) = 0;
        *(_QWORD *)((char *)a2 + 60) = 1065353216LL;
        *(_QWORD *)((char *)a2 + 68) = 0LL;
        *((_DWORD *)a2 + 19) = 0;
        a2[10] = 1065353216LL;
        a2[11] = 0LL;
        *((_DWORD *)a2 + 24) = 0;
        *((_BYTE *)a2 + 105) &= 0xE9u;
        *((_BYTE *)a2 + 105) |= 0x29u;
        *((_BYTE *)a2 + 104) = -86;
      }
    }
  }
  else
  {
    v41 = CDrawingContext::PushNoOpLayer((CDrawingContext *)this, (const struct CVisual *)*a2);
    v7 = v41;
    if ( v41 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v41, 0xD50u, 0LL);
  }
  return v7;
}
