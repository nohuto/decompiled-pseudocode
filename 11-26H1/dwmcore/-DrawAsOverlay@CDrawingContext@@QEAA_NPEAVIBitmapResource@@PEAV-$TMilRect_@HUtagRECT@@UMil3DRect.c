/*
 * XREFs of ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180182C78
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801FDB90 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180268C7C (-RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180283220 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800197F0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180074F30 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ @ 0x180182FA0 (-IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBUtagRECT@@@Z @ 0x18018CEC4 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBUtag.c)
 *     ?GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x180194B38 (-GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A4168 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@U_LUID@@PEAUtagRECT@@22@Z @ 0x1801A6610 (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@U_LUID@@PEAUtagRECT@@22@Z.c)
 *     ?GetSwapChainOverlayColor@CDrawingContext@@AEBA?AU_D3DCOLORVALUE@@PEAVISwapChainRealization@@PEBVIBitmapResource@@@Z @ 0x1801B09FC (-GetSwapChainOverlayColor@CDrawingContext@@AEBA-AU_D3DCOLORVALUE@@PEAVISwapChainRealization@@PEB.c)
 *     ??1CSetOverlayColorRenderStateScope@CDrawingContext@@QEAA@XZ @ 0x1801BE62C (--1CSetOverlayColorRenderStateScope@CDrawingContext@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDrawingContext::DrawAsOverlay(CDrawingContext *this, struct IBitmapResource *a2, struct tagRECT *a3)
{
  char IsOverlayAssigned; // r14
  bool v5; // zf
  __int64 v8; // rax
  bool IsNormalDesktopRender; // r12
  COverlayContext *v10; // rbx
  __int64 v11; // rax
  const struct CVisual *CurrentVisual; // rax
  struct _LUID v13; // r8
  void (__fastcall *v14)(struct IBitmapResource *, __int64, __int64, const struct CMILMatrix *, int, unsigned __int64); // rdi
  unsigned __int64 v15; // rbx
  const struct CMILMatrix *TopByReference; // rax
  __int64 v17; // rdx
  int v18; // r8d
  COverlayContext *v19; // rcx
  int v20; // eax
  __int64 i; // rcx
  int v22; // eax
  struct ISwapChainRealization *v24; // [rsp+40h] [rbp-79h] BYREF
  __int64 v25; // [rsp+48h] [rbp-71h] BYREF
  struct tagRECT v26; // [rsp+50h] [rbp-69h] BYREF
  struct tagRECT v27; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v28[64]; // [rsp+70h] [rbp-49h] BYREF
  int v29; // [rsp+B0h] [rbp-9h]
  _QWORD v30[2]; // [rsp+C0h] [rbp+7h] BYREF

  IsOverlayAssigned = 0;
  *(_QWORD *)&a3->right = 0LL;
  *(_QWORD *)&a3->left = 0LL;
  v5 = *((_QWORD *)this + 5) == 0LL;
  v24 = 0LL;
  if ( !v5 )
  {
    v8 = *(_QWORD *)a2;
    v25 = 0LL;
    if ( (*(int (__fastcall **)(struct IBitmapResource *, __int64 *))(v8 + 64))(a2, &v25) >= 0
      && (**(int (__fastcall ***)(__int64, GUID *, struct ISwapChainRealization **))v25)(
           v25,
           &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c,
           &v24) >= 0 )
    {
      IsNormalDesktopRender = CDrawingContext::IsNormalDesktopRender(this);
      if ( IsNormalDesktopRender
        && (*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v24 + 144LL))(v24)
        && ((*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 128LL))(*((_QWORD *)this + 3))
         || (*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v24 + 152LL))(v24))
        && (v10 = (COverlayContext *)*((_QWORD *)this + 5),
            v27 = 0LL,
            v11 = *((_QWORD *)v24 + 2),
            v26 = 0LL,
            (*(void (__fastcall **)(char *, _QWORD *))(v11 + 24))((char *)v24 + 16, v30),
            CurrentVisual = CDrawingContext::GetCurrentVisual(this),
            (IsOverlayAssigned = COverlayContext::IsOverlayAssigned(v10, CurrentVisual, v13, &v27, &v26, a3)) != 0) )
      {
        v14 = *(void (__fastcall **)(struct IBitmapResource *, __int64, __int64, const struct CMILMatrix *, int, unsigned __int64))(*(_QWORD *)a2 + 48LL);
        v15 = ((unsigned __int64)this + 156) & -(__int64)(*((_BYTE *)this + 184) != 0);
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 24LL))(
          *((_QWORD *)this + 3) + 8LL,
          v30);
        TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 280));
        LOBYTE(v17) = IsNormalDesktopRender;
        v14(a2, v17, 1LL, TopByReference, v18, v15);
        ++*((_DWORD *)this + 161);
        v19 = (COverlayContext *)*((_QWORD *)this + 5);
        v30[0] = this;
        v29 = 0;
        COverlayContext::GetInverseDesktopMPOTransform(v19, (struct CMILMatrix *)v28);
        v20 = CDrawingContext::PushTransformInternal((const void **)this, 0LL, (const struct CMILMatrix *)v28, 0, 1);
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x80u, 0LL);
        }
        else
        {
          TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v26, &v27);
          for ( i = 0LL; i < 16; i += 4LL )
            *(float *)((char *)&v27.left + i) = (float)*(int *)((char *)&v26.left + i);
          CDrawingContext::GetSwapChainOverlayColor(this, (struct _D3DCOLORVALUE *)&v26, v24, a2);
          v22 = CDrawingContext::RenderOverlayColor(this);
          if ( v22 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x89u, 0LL);
          CDrawingContext::PopTransformInternal(this, 1);
        }
        CDrawingContext::CSetOverlayColorRenderStateScope::~CSetOverlayColorRenderStateScope((CDrawingContext::CSetOverlayColorRenderStateScope *)v30);
      }
      else
      {
        IsOverlayAssigned = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v24 + 152LL))(v24);
      }
    }
    if ( v24 )
      (*(void (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v24 + 16LL))(v24);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return IsOverlayAssigned;
}
