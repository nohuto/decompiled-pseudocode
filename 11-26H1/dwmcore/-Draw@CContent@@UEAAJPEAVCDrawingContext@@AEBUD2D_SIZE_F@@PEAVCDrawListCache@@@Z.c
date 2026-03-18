/*
 * XREFs of ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006C720
 * Callers:
 *     ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180013130 (-Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180018E80 (-Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006C600 (-Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800AC0E0 (-Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D72A0 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18017F940 (-Draw@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801DF110 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801FDB90 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 * Callees:
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800197F0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18001E070 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18001E240 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001F080 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x18005E63C (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18005EB50 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x18006CCA0 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006CFD0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180166FF0 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsTextureMemoryHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x180176130 (-IsTextureMemoryHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x1801ACD00 (-IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x1801BA51C (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@PEAVCDrawListEntryBuilder@@@Z @ 0x1802084C4 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUD2D_RECT_F@@$0-0@gsl@@AEBU_D.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x180210F9C (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x18021ED24 (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?GetActiveLightCount@CDrawingContext@@QEBAIXZ @ 0x180236754 (-GetActiveLightCount@CDrawingContext@@QEBAIXZ.c)
 *     ?IsIncludedInOverdrawContentKinds@CContent@@AEAA_NW4FlagsEnum@MilHeatMapOverdrawContentKinds@@PEAVCDrawingContext@@@Z @ 0x180261E64 (-IsIncludedInOverdrawContentKinds@CContent@@AEAA_NW4FlagsEnum@MilHeatMapOverdrawContentKinds@@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CContent::Draw(
        CContent *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx
  int v7; // r12d
  int v11; // eax
  int v12; // r15d
  float v13; // xmm6_4
  int v14; // eax
  bool v15; // r14
  _OWORD *v16; // rax
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // r14d
  int v23; // eax
  int v24; // esi
  int v25; // esi
  int v27; // eax
  __int64 v28; // r8
  int v29; // eax
  int v30; // eax
  int updated; // eax
  int v32; // eax
  CComposition *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  unsigned int i; // eax
  int v37; // eax
  __int64 v38; // r14
  float v39; // xmm1_4
  float v40; // xmm0_4
  int v41; // eax
  __int64 v42; // r9
  __int64 TopByReference; // rax
  FLOAT v44; // xmm1_4
  int v45; // eax
  FLOAT height; // xmm1_4
  int v47; // eax
  int v48; // [rsp+28h] [rbp-E0h]
  struct CDrawListCache *v49; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v51; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+58h] [rbp-B0h]
  __int64 v53; // [rsp+60h] [rbp-A8h]
  __int64 *v54; // [rsp+68h] [rbp-A0h]
  __int128 v55; // [rsp+70h] [rbp-98h] BYREF
  __int64 v56; // [rsp+80h] [rbp-88h]
  __int128 v57; // [rsp+88h] [rbp-80h] BYREF
  __int128 v58; // [rsp+98h] [rbp-70h]
  __int128 v59; // [rsp+A8h] [rbp-60h]
  __int128 v60; // [rsp+B8h] [rbp-50h]
  int v61; // [rsp+C8h] [rbp-40h]
  _OWORD v62[4]; // [rsp+D8h] [rbp-30h] BYREF
  int v63; // [rsp+118h] [rbp+10h]
  _BYTE v64[64]; // [rsp+128h] [rbp+20h] BYREF
  int v65; // [rsp+168h] [rbp+60h]
  __int64 v66; // [rsp+178h] [rbp+70h] BYREF
  float width; // [rsp+180h] [rbp+78h]
  float v68; // [rsp+184h] [rbp+7Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v4 = *((_QWORD *)this + 3);
  v5 = 0LL;
  v7 = 0;
  v49 = 0LL;
  if ( !*(_DWORD *)(v4 + 6272)
    || (*(unsigned __int8 (__fastcall **)(CContent *, __int64))(*(_QWORD *)this + 64LL))(this, 94LL) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CContent *, __int64))(*(_QWORD *)this + 64LL))(this, 94LL) )
    {
      v28 = *((_QWORD *)this + 3);
      v29 = *(_DWORD *)(v28 + 6272);
      if ( v29 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v28 + 6264) + 24LL * (unsigned int)(v29 - 1)) == 2 )
        {
LABEL_27:
          if ( !g_ShowLightingHeatmap )
            goto LABEL_28;
          if ( !CDrawingContext::GetActiveLightCount(a2) )
            goto LABEL_28;
          height = a3->height;
          width = a3->width;
          v68 = height;
          v66 = 0LL;
          v54 = &v66;
          v53 = 1LL;
          v47 = CDrawingContext::FillRectanglesWithSolidColor(a2);
          v22 = v47;
          if ( v47 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2C10, 3u, v47, 0x9Du, 0LL);
          else
LABEL_28:
            v22 = 0;
          goto LABEL_29;
        }
      }
    }
    if ( a4 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CContent *, struct CDrawListCache *, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)this + 248LL))(
             this,
             a4,
             a2,
             a3)
        && *((_QWORD *)a4 + 3) )
      {
        if ( (*((_DWORD *)a4 + 18) & 0x400) != 0 )
          ++dword_1803DE46C;
        else
          ++dword_1803DE460;
        *((_QWORD *)a4 + 3) = 0LL;
        CDrawListCache::ReleaseDrawListEntries(a4);
        *((_WORD *)a4 + 42) = 0;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)&v49);
      v32 = CDrawListCache::InternalCreate(1, &v49);
      v22 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2C10, 3u, v32, 0x7Du, 0LL);
        v5 = (volatile signed __int32 *)v49;
        goto LABEL_32;
      }
      v5 = (volatile signed __int32 *)v49;
      a4 = v49;
    }
    if ( !*((_QWORD *)a4 + 3) )
    {
      v27 = (*(__int64 (__fastcall **)(CContent *, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))(*(_QWORD *)this + 256LL))(
              this,
              a2,
              a3,
              a4);
      v22 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2C10, 3u, v27, 0x84u, 0LL);
        goto LABEL_29;
      }
    }
    v11 = *((_DWORD *)a2 + 790);
    v12 = 0;
    if ( v11 )
      v13 = *(float *)(*((_QWORD *)a2 + 394) + 4LL * (unsigned int)(v11 - 1));
    else
      v13 = FLOAT_1_0;
    if ( COERCE_FLOAT(LODWORD(v13) & _xmm) < 0.0000011920929 )
    {
LABEL_24:
      v22 = 0;
      if ( v12 != -2003304441 )
        v22 = v12;
      if ( v22 >= 0 )
        goto LABEL_27;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2C10, 3u, v22, 0x87u, 0LL);
      goto LABEL_29;
    }
    v14 = *((_DWORD *)a2 + 72);
    v15 = 0;
    if ( v14 )
      v16 = (_OWORD *)(*((_QWORD *)a2 + 35) + 68LL * (unsigned int)(v14 - 1));
    else
      v16 = &CMILMatrix::Identity;
    v57 = *v16;
    v58 = v16[1];
    v59 = v16[2];
    v60 = v16[3];
    v61 = *((_DWORD *)v16 + 16);
    if ( *((_QWORD *)a2 + 412) )
    {
      updated = CDrawingContext::UpdateBspCurrentPolygonClippingPlanes(a2);
      v12 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x37Fu, 0LL);
        goto LABEL_24;
      }
      v15 = *((_BYTE *)a2 + 3304) == 0;
    }
    if ( v15 )
      goto LABEL_62;
    while ( 1 )
    {
      v17 = *((_DWORD *)a2 + 60);
      if ( !v17 )
        break;
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          if ( v19 != 2 )
            break;
          v20 = 22;
        }
        else
        {
          v20 = 21;
        }
      }
      else
      {
        v20 = 5;
      }
LABEL_22:
      v48 = v20;
      v21 = CDrawListCache::Render(a4, a2, &v57);
      v12 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x391u, 0LL);
        goto LABEL_24;
      }
      if ( !v15 || !ClipPlaneIterator::HasMoreClipPlanes((struct CDrawingContext *)((char *)a2 + 3304)) )
        goto LABEL_24;
LABEL_62:
      v30 = ClipPlaneIterator::UpdateClippingPlanes((struct CDrawingContext *)((char *)a2 + 3304));
      v12 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x38Bu, 0LL);
        goto LABEL_24;
      }
    }
    v20 = 0;
    goto LABEL_22;
  }
  if ( CComposition::IsTextureMemoryHeatMapEnabled(*((CComposition **)this + 3)) )
  {
    v34 = *(_QWORD *)this;
    v52 = 0LL;
    v51 = 0LL;
    v35 = (*(__int64 (__fastcall **)(CContent *, const struct D2D_SIZE_F *, __int128 *))(v34 + 296))(this, a3, &v51);
    v22 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2C10, 3u, v35, 0x42u, 0LL);
      if ( (_QWORD)v51 )
        std::_Deallocate<16>(v51, 8 * ((v52 - (__int64)v51) >> 3));
      goto LABEL_29;
    }
    for ( i = 0; ; i = (_DWORD)v49 + 1 )
    {
      LODWORD(v49) = i;
      if ( i >= (unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)&v51 + 1) - v51) >> 3)) )
        break;
      v65 = 0;
      v50 = 0LL;
      v56 = 56LL * i;
      CMILMatrix::CMILMatrix((CMILMatrix *)v62, (const struct D2D_MATRIX_3X2_F *)(v51 + v56));
      v57 = v62[0];
      v61 = v63;
      v58 = v62[1];
      v59 = v62[2];
      v60 = v62[3];
      v37 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v57, 1, 1);
      v22 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2C10, 3u, v37, 0x4Cu, 0LL);
        if ( (_QWORD)v51 )
          std::_Deallocate<16>(v51, 8 * ((v52 - (__int64)v51) >> 3));
        v7 = 0;
        goto LABEL_29;
      }
      v38 = v56;
      v7 = 1;
      v55 = *(_OWORD *)(v51 + v56 + 24);
      CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 280), (struct CMILMatrix *)v64);
      CMILMatrix::Get2DScaleDimensionsWithPerspective((__int64)v64, (float *)&v50 + 1, (float *)&v50, (float *)&v55);
      v53 = 1LL;
      v39 = *(float *)(v51 + v38 + 36) - *(float *)(v51 + v38 + 28);
      v40 = *(float *)(v51 + v38 + 32) - *(float *)(v51 + v38 + 24);
      v66 = 0LL;
      v54 = &v66;
      v68 = v39 / *(float *)&v50;
      width = v40 / *((float *)&v50 + 1);
      CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference((char *)g_pComposition + 6264);
      v41 = CDrawingContext::FillRectanglesWithSolidColor(a2);
      v22 = v41;
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2C10, 3u, v41, 0x5Au, 0LL);
        if ( (_QWORD)v51 )
          std::_Deallocate<16>(v51, 8 * ((v52 - (__int64)v51) >> 3));
        goto LABEL_29;
      }
      CDrawingContext::PopTransformInternal(a2, 1);
    }
    if ( (_QWORD)v51 )
      std::_Deallocate<16>(v51, 8 * ((v52 - (__int64)v51) >> 3));
    goto LABEL_89;
  }
  if ( !CComposition::IsOverdrawHeatMapEnabled(v33) )
    goto LABEL_89;
  TopByReference = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v42 + 6264);
  if ( !(unsigned __int8)CContent::IsIncludedInOverdrawContentKinds(this, *(unsigned int *)(TopByReference + 20), a2) )
    goto LABEL_89;
  v44 = a3->height;
  width = a3->width;
  v68 = v44;
  v66 = 0LL;
  v53 = 1LL;
  v54 = &v66;
  CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference((char *)g_pComposition + 6264);
  v45 = CDrawingContext::FillRectanglesWithSolidColor(a2);
  v22 = v45;
  if ( v45 >= 0 )
  {
LABEL_89:
    v7 = 0;
    goto LABEL_27;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2C10, 3u, v45, 0x69u, 0LL);
LABEL_29:
  if ( a4 )
  {
    v23 = *((_DWORD *)a4 + 18);
    if ( (v23 & 0x40) != 0 )
    {
      if ( *((_QWORD *)a4 + 3) )
      {
        if ( (v23 & 0x400) != 0 )
          ++dword_1803DE46C;
        else
          ++dword_1803DE460;
        *((_QWORD *)a4 + 3) = 0LL;
        CDrawListCache::ReleaseDrawListEntries(a4);
        *((_WORD *)a4 + 42) = 0;
      }
    }
  }
  for ( ; v7; --v7 )
    CDrawingContext::PopTransformInternal(a2, 1);
LABEL_32:
  if ( v5 )
  {
    v24 = _InterlockedDecrement(v5 + 2);
    if ( v24 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v48);
    if ( !v24 )
    {
      if ( _InterlockedAdd(v5 + 2, 1u) <= 0 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v48);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 24LL))(v5);
      v25 = _InterlockedDecrement(v5 + 2);
      if ( v25 < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v48);
      if ( !v25 )
      {
        if ( _InterlockedDecrement(v5 + 2) < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v48);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 16LL))(v5, 1LL);
      }
    }
  }
  return (unsigned int)v22;
}
