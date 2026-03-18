/*
 * XREFs of ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x1801E62F8
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180171000 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18002A150 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180075B50 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ?GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800CDBA0 (-GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1800E9F54 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180177280 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?HasRevokablePlanes@COverlayContext@@QEBA_NXZ @ 0x180188360 (-HasRevokablePlanes@COverlayContext@@QEBA_NXZ.c)
 *     McTemplateU0dd_EventWriteTransfer @ 0x1801AB43C (McTemplateU0dd_EventWriteTransfer.c)
 *     ?GetCursorShapeBounds@CCursorVisual@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCDesktopTree@@@Z @ 0x1801D9264 (-GetCursorShapeBounds@CCursorVisual@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::BeginOverlayCandidateCollection(
        COverlayContext *this,
        const struct FastRegion::Internal::CRgnData **a2,
        struct CRegion *a3)
{
  double v3; // xmm2_8
  COverlayContext *v4; // rsi
  char v5; // r13
  char v6; // r12
  struct CRegion *v7; // rdi
  __int64 v9; // rcx
  __int64 v10; // r14
  int v11; // ebx
  __int64 v12; // rcx
  char v13; // cl
  char v14; // r12
  char v15; // al
  char v16; // bl
  const struct tagRECT *v17; // rax
  bool v18; // zf
  __int64 v19; // rbx
  __int64 v20; // rdi
  const struct tagRECT *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdi
  const struct tagRECT *v24; // rax
  _QWORD *v25; // r15
  const struct tagRECT *v26; // rax
  const struct tagRECT *v27; // rax
  const struct CVisualTree *v29; // rax
  const struct tagRECT *v30; // rax
  char v31; // [rsp+21h] [rbp-88h]
  struct D2D_RECT_F v32; // [rsp+28h] [rbp-81h] BYREF
  CRegion *v33; // [rsp+38h] [rbp-71h]
  __int64 v34; // [rsp+40h] [rbp-69h]
  COverlayContext *v35; // [rsp+48h] [rbp-61h]
  unsigned int v36[4]; // [rsp+50h] [rbp-59h] BYREF
  int v37[4]; // [rsp+60h] [rbp-49h] BYREF
  struct FastRegion::Internal::CRgnData *v38[10]; // [rsp+70h] [rbp-39h] BYREF

  v4 = this;
  v35 = this;
  v5 = 0;
  v33 = a3;
  v6 = 0;
  v7 = a3;
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 12);
  *(_WORD *)((char *)v4 + 19357) = 1;
  *((_QWORD *)v4 + 2417) = 0LL;
  *((_QWORD *)v4 + 2416) = 0LL;
  *((_QWORD *)v4 + 2396) = 0LL;
  *((_QWORD *)v4 + 2395) = 0LL;
  v9 = *((_QWORD *)v4 + 7);
  *((_BYTE *)v4 + 19359) = 0;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 256LL))(v9);
  *(_QWORD *)&v32.left = v10;
  v11 = 0;
  if ( !CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)(v10 + 68))
    || !(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v4 + 7) + 280LL))(*((_QWORD *)v4 + 7)) )
  {
    goto LABEL_40;
  }
  v13 = 1;
  v14 = 0;
  if ( *(_DWORD *)(v10 + 272) == 2 || *((CComposition **)v4 + 2413) == GetCurrentFrameId() )
    v5 = v13;
  v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v4 + 7) + 48LL))(*((_QWORD *)v4 + 7));
  v16 = v15;
  if ( v15 || v5 )
  {
    *((_BYTE *)v4 + 19357) = 1;
    if ( v15 )
      goto LABEL_12;
  }
  else
  {
    *((_BYTE *)v4 + 19357) = 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct CRegion *))(**((_QWORD **)v4 + 7) + 296LL))(
          *((_QWORD *)v4 + 7),
          v7) )
  {
LABEL_12:
    if ( a2 )
    {
      v17 = (const struct tagRECT *)PixelAlign((int *)v36, (unsigned int *)(v10 + 8), v3);
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v38, v17);
      if ( *(_DWORD *)*a2 && *(_DWORD *)v38[0] && FastRegion::Internal::CRgnData::Intersects(*a2, v38[0]) )
        v14 = 1;
      FastRegion::CRegion::FreeMemory(v38);
    }
    if ( v16 )
      goto LABEL_35;
    goto LABEL_19;
  }
  v14 = 1;
LABEL_19:
  if ( IsEmpty((const struct D2D_RECT_F *)((char *)v4 + 19144)) )
  {
    v31 = 0;
    if ( !v14 && !v5 && !COverlayContext::HasRevokablePlanes(v4) )
    {
LABEL_36:
      v11 = 0;
      if ( !v5 )
      {
LABEL_39:
        v6 = 1;
        goto LABEL_40;
      }
      goto LABEL_37;
    }
  }
  else
  {
    v31 = 1;
  }
  v18 = *((_QWORD *)v4 + 2411) == 0LL;
  *((_BYTE *)v4 + 19358) = 1;
  if ( v18 )
  {
    v19 = *((_QWORD *)v4 + 1586);
    v20 = *((_QWORD *)v4 + 1587);
    v34 = v10 + 136;
    while ( v19 != v20 )
    {
      COverlayContext::OverlayPlaneInfo::GetLocalClipRect(v19, (__int64)v36, v10 + 136);
      v21 = (const struct tagRECT *)PixelAlign(v37, v36, v3);
      CRegion::AddRectangle(v33, v21);
      v19 += 392LL;
    }
    v10 = *(_QWORD *)&v32.left;
    v22 = *((_QWORD *)v35 + 799);
    v23 = *((_QWORD *)v35 + 800);
    while ( v22 != v23 )
    {
      COverlayContext::OverlayPlaneInfo::GetLocalClipRect(v22, (__int64)v36, v34);
      v24 = (const struct tagRECT *)PixelAlign(v37, v36, v3);
      CRegion::AddRectangle(v33, v24);
      v22 += 392LL;
    }
    v4 = v35;
    v25 = (_QWORD *)((char *)v35 + 19144);
    if ( v31 )
    {
      v26 = (const struct tagRECT *)PixelAlign(v37, (unsigned int *)v35 + 4786, v3);
      v7 = v33;
      CRegion::AddRectangle(v33, v26);
      *((_QWORD *)v35 + 2394) = 0LL;
      *v25 = 0LL;
    }
    else
    {
      v7 = v33;
    }
  }
  else
  {
    v27 = (const struct tagRECT *)PixelAlign(v37, (unsigned int *)(v10 + 8), v3);
    CRegion::AddRectangle(v7, v27);
  }
LABEL_35:
  if ( !v14 )
    goto LABEL_36;
LABEL_37:
  if ( !*((_QWORD *)v4 + 2392) )
  {
    v11 = 0;
    goto LABEL_39;
  }
  v29 = (const struct CVisualTree *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v4 + 7) + 56LL))(*((_QWORD *)v4 + 7));
  CCursorVisual::GetCursorShapeBounds(*((CVisual **)v4 + 2392), (__m128 *)&v32, v29);
  v11 = 0;
  if ( IsEmpty(&v32) )
    goto LABEL_39;
  if ( *(float *)(v10 + 8) > v32.left )
    v32.left = *(FLOAT *)(v10 + 8);
  if ( *(float *)(v10 + 12) > v32.top )
    v32.top = *(FLOAT *)(v10 + 12);
  if ( v32.right > *(float *)(v10 + 16) )
    v32.right = *(FLOAT *)(v10 + 16);
  if ( v32.bottom > *(float *)(v10 + 20) )
    v32.bottom = *(FLOAT *)(v10 + 20);
  if ( IsEmpty(&v32) )
    goto LABEL_39;
  v30 = (const struct tagRECT *)PixelAlign(v37, (unsigned int *)&v32, v3);
  CRegion::AddRectangle(v7, v30);
  v11 = 1;
  v6 = 1;
LABEL_40:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    McTemplateU0dd_EventWriteTransfer(
      v12,
      &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Start,
      *((unsigned __int8 *)v4 + 19358),
      v11);
  return v6;
}
