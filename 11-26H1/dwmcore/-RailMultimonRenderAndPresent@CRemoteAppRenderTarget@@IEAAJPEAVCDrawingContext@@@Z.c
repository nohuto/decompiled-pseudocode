/*
 * XREFs of ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180255E28
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802560AC (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800AFF90 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x1800D34F8 (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMatrix@@PEAW4ProtectionMode@1@@Z @ 0x1802563F0 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMat.c)
 *     ?GetIntersectingMonitorTargets@CDesktopTree@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV?$vector@PEAVIMonitorTarget@@V?$allocator@PEAVIMonitorTarget@@@std@@@std@@@Z @ 0x18025FF38 (-GetIntersectingMonitorTargets@CDesktopTree@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::RailMultimonRenderAndPresent(
        CRemoteAppRenderTarget *this,
        struct CDrawingContext *a2,
        double a3)
{
  unsigned int v5; // ebx
  struct CDesktopTree *DesktopTree; // rdi
  __int64 v7; // rcx
  _QWORD *i; // rsi
  _QWORD *v9; // r15
  int (__fastcall ***v10)(_QWORD, GUID *, struct ISwapChain **); // rdi
  const struct CMILMatrix *v11; // r12
  int v12; // eax
  struct ISwapChain *v13; // rbx
  __int64 (__fastcall *v14)(struct ISwapChain *, _QWORD, int *); // rdi
  int v15; // eax
  struct ISwapChain *v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h]
  struct D2D_RECT_F v21; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v22[6]; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v23[4]; // [rsp+80h] [rbp-80h] BYREF
  int v24; // [rsp+C0h] [rbp-40h]
  _OWORD v25[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v26; // [rsp+110h] [rbp+10h]
  int v27[4]; // [rsp+120h] [rbp+20h] BYREF

  v5 = 0;
  DesktopTree = CVisual::GetDesktopTree(*(CVisual **)(*((_QWORD *)this + 14) + 72LL));
  if ( DesktopTree )
  {
    v7 = *((_QWORD *)this + 14);
    v24 = 0;
    CVisual::GetRootTransform(*(CVisual **)(v7 + 72), (struct CMILMatrix *)v23, 0, 0);
    v21 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v23, (const struct D2D_RECT_F *)((char *)this + 260), &v21.left);
    v20 = 0LL;
    v19 = 0LL;
    CDesktopTree::GetIntersectingMonitorTargets(DesktopTree, &v21, &v19);
    v9 = (_QWORD *)*((_QWORD *)&v19 + 1);
    for ( i = (_QWORD *)v19; i != v9; ++i )
    {
      v10 = (int (__fastcall ***)(_QWORD, GUID *, struct ISwapChain **))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 224LL))(*i);
      if ( v10 )
      {
        v17 = 0LL;
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v17);
        if ( (**v10)(v10, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v17) >= 0 )
        {
          v11 = (const struct CMILMatrix *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 64LL))(*i);
          v25[0] = v23[0];
          v25[1] = v23[1];
          v25[2] = v23[2];
          v25[3] = v23[3];
          v26 = v24;
          CMILMatrix::Multiply((CMILMatrix *)v25, v11);
          (*(void (__fastcall **)(struct ISwapChain *, _QWORD))(*(_QWORD *)v17 + 192LL))(
            v17,
            *((unsigned int *)this + 33));
          v18 = 0;
          v12 = CRemoteAppRenderTarget::RenderDirtyRegion(
                  this,
                  a2,
                  v17,
                  (const struct CMILMatrix *)v25,
                  (enum CRemoteAppRenderTarget::ProtectionMode *)&v18);
          v5 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x275u, 0LL);
            goto LABEL_12;
          }
          v13 = v17;
          *(_OWORD *)v22 = 0LL;
          v14 = *(__int64 (__fastcall **)(struct ISwapChain *, _QWORD, int *))(*(_QWORD *)v17 + 240LL);
          CMILMatrix::Transform2DBoundsHelper<0>((__int64)v11, &v21, (float *)v22);
          PixelAlign(v27, v22, a3);
          v15 = v14(v13, *((_QWORD *)this + 271), v27);
          v5 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x27Au, 0LL);
LABEL_12:
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
            break;
          }
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
      }
    }
    if ( (_QWORD)v19 )
      std::_Deallocate<16>((void *)v19, (v20 - v19) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return v5;
}
