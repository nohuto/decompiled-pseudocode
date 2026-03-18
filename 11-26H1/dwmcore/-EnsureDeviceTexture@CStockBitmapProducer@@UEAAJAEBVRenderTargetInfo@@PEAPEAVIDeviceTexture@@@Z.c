/*
 * XREFs of ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801C5500
 * Callers:
 *     ?GetDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801C54F0 (-GetDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo@@@Z @ 0x1800579DC (-FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealization@1@@Z @ 0x18009B9B4 (-EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealiza.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800F0E50 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F4650 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x1800F6FA0 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x180110538 (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801BAF04 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     gsl::final_action__CCursorState::AddShadowToShape_::_58_::_lambda_1___::_final_action__CCursorState::AddShadowToShape_::_58_::_lambda_1___ @ 0x180259664 (gsl--final_action__CCursorState--AddShadowToShape_--_58_--_lambda_1___--_final_action__CCursorSt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStockBitmapProducer::EnsureDeviceTexture(
        CStockBitmapProducer *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CCachedImageProducer *v3; // r14
  struct CCachedImageProducer::CCachedRealization *RealizationInternal; // rax
  int Device; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rax
  struct CDrawingContext *v13; // rbx
  int v14; // eax
  int v15; // esi
  int v16; // eax
  struct CD3DDevice *v17; // [rsp+40h] [rbp-30h] BYREF
  struct CCachedImageProducer::CCachedRealization *v18; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v19[12]; // [rsp+50h] [rbp-20h] BYREF
  const char *v20; // [rsp+60h] [rbp-10h] BYREF
  int v21; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct IRenderTargetBitmap *v23; // [rsp+A0h] [rbp+30h] BYREF
  struct CDrawingContext *v24; // [rsp+B8h] [rbp+48h] BYREF

  v3 = (CStockBitmapProducer *)((char *)this - 16);
  RealizationInternal = CCachedImageProducer::FindRealizationInternal((CStockBitmapProducer *)((char *)this - 16), a2);
  v18 = RealizationInternal;
  if ( RealizationInternal )
    return (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)(*(_QWORD *)RealizationInternal + 8LL) + 112LL))(
             *(_QWORD *)RealizationInternal + 8LL,
             a2,
             a3);
  v17 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v17);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)a2, &v17);
  v10 = Device;
  if ( Device >= 0 )
  {
    *(_DWORD *)v19 = 0;
    *(_QWORD *)&v19[4] = 1LL;
    *(_DWORD *)v19 = RenderTargetInfo::IsHDR(a2) ? 10 : 87;
    GetPixelFormatColorSpace(*(int *)v19, (enum DXGI_COLOR_SPACE_TYPE *)&v19[8]);
    v23 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v23);
    v24 = (struct CDrawingContext *)*((_QWORD *)this + 1);
    v21 = 21;
    v20 = "DWM stock bitmap temp";
    v11 = CD3DDevice::CreateRenderTargetBitmap(
            (__int64)v17,
            (const struct CResourceTag *)&v20,
            (const struct D2D_SIZE_U *)&v24,
            (struct PixelFormatInfo *)v19,
            a2,
            1,
            &v23);
    v10 = v11;
    if ( v11 >= 0 )
    {
      v24 = 0LL;
      CDrawingContext::Create(&v24);
      v12 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v23 + 144LL))(v23);
      v13 = v24;
      v14 = CDrawingContext::BeginFrame(
              (__int64)v24,
              (__int64 *)((v12 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64)),
              0LL,
              0LL,
              0,
              0LL);
      v15 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4E,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
          (const char *)(unsigned int)v14);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
        v10 = v15;
        goto LABEL_12;
      }
      *(_QWORD *)v19 = v13;
      v19[8] = 1;
      v16 = CCachedImageProducer::EnsureRealizationInternal(v3, v13, &v18);
      v10 = v16;
      if ( v16 >= 0 )
      {
        gsl::final_action__CCursorState::AddShadowToShape_::_58_::_lambda_1___::_final_action__CCursorState::AddShadowToShape_::_58_::_lambda_1___(v19);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v17);
        RealizationInternal = v18;
        return (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)(*(_QWORD *)RealizationInternal + 8LL) + 112LL))(
                 *(_QWORD *)RealizationInternal + 8LL,
                 a2,
                 a3);
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
        (const char *)(unsigned int)v16);
      gsl::final_action__CCursorState::AddShadowToShape_::_58_::_lambda_1___::_final_action__CCursorState::AddShadowToShape_::_58_::_lambda_1___(v19);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
        (const char *)(unsigned int)v11);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x37,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
    (const char *)(unsigned int)Device);
LABEL_12:
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v17);
  return v10;
}
