/*
 * XREFs of ?Transcode@CSwapChainRealization@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCTranscodeBitmap@@@Z @ 0x1802AE37C
 * Callers:
 *     ?GetD2DBitmap@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AD140 (-GetD2DBitmap@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetDeviceTexture@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AD4B0 (-GetDeviceTexture@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A5F4 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?GetDefaultDXGIColorSpaceForFormat@@YA?AW4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@@Z @ 0x1800F7118 (-GetDefaultDXGIColorSpaceForFormat@@YA-AW4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@@Z.c)
 *     ?GetCompatibleTextureFormat@CD3DDevice@@QEBA?AW4DXGI_FORMAT@@W42@@Z @ 0x180131048 (-GetCompatibleTextureFormat@CD3DDevice@@QEBA-AW4DXGI_FORMAT@@W42@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?Create@CTranscodeBitmap@@SAJPEAPEAV1@@Z @ 0x1802B244C (-Create@CTranscodeBitmap@@SAJPEAPEAV1@@Z.c)
 *     ?Transcode@CTranscodeBitmap@@QEAAJPEAVIDeviceTexture@@AEBUPixelFormatInfo@@@Z @ 0x1802B27FC (-Transcode@CTranscodeBitmap@@QEAAJPEAVIDeviceTexture@@AEBUPixelFormatInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSwapChainRealization::Transcode(
        CSwapChainRealization *this,
        struct _LUID *a2,
        struct CTranscodeBitmap **a3)
{
  __int64 v4; // rdi
  unsigned int v7; // ebx
  bool v8; // zf
  int v9; // eax
  _BYTE *v10; // rbx
  int Device; // edi
  __int64 v12; // rdx
  enum DXGI_FORMAT CompatibleTextureFormat; // eax
  CD3DDevice *v15; // [rsp+20h] [rbp-40h] BYREF
  _BYTE *v16; // [rsp+28h] [rbp-38h] BYREF
  _DWORD v17[4]; // [rsp+30h] [rbp-30h] BYREF
  enum DXGI_FORMAT v18[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  *a3 = 0LL;
  v4 = *((_QWORD *)this + 36);
  if ( v4 )
  {
    v8 = *(_QWORD *)(v4 + 144) == 0LL;
    v16 = 0LL;
    if ( v8 )
    {
      *(_QWORD *)(v4 + 144) = 0LL;
      v9 = CTranscodeBitmap::Create((struct CTranscodeBitmap **)(v4 + 144));
      v7 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6C,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\bitmaps/DecodeBitmap.h",
          (const char *)(unsigned int)v9);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x27F,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
          (const char *)v7);
LABEL_14:
        wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(&v16);
        return v7;
      }
    }
    v10 = *(_BYTE **)(v4 + 144);
    v16 = v10;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v10 + 8));
    if ( !v10[32] )
    {
      (*(void (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)(*((_QWORD *)this + 33) + 128LL) + 24LL))(
        *((_QWORD *)this + 33) + 128LL,
        v18);
      v15 = 0LL;
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v15);
      Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *a2, &v15);
      if ( Device < 0 )
      {
        v12 = 648LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
          (const char *)(unsigned int)Device);
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v15);
        v7 = Device;
        goto LABEL_14;
      }
      CompatibleTextureFormat = (unsigned int)CD3DDevice::GetCompatibleTextureFormat(v15, v18[0]);
      v17[1] = v18[1];
      v17[0] = CompatibleTextureFormat;
      v17[2] = GetDefaultDXGIColorSpaceForFormat(CompatibleTextureFormat);
      Device = CTranscodeBitmap::Transcode(
                 (CTranscodeBitmap *)v10,
                 (struct IDeviceTexture *)((*((_QWORD *)this + 33) + 120LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 33) >> 64)),
                 (const struct PixelFormatInfo *)v17);
      if ( Device < 0 )
      {
        v12 = 661LL;
        goto LABEL_9;
      }
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v15);
    }
    *a3 = (struct CTranscodeBitmap *)v10;
    v7 = 0;
    v16 = 0LL;
    goto LABEL_14;
  }
  v7 = -2003292287;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27B,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
    (const char *)0x88982F81LL);
  return v7;
}
