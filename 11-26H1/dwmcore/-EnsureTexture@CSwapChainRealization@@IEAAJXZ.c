/*
 * XREFs of ?EnsureTexture@CSwapChainRealization@@IEAAJXZ @ 0x1802ACF30
 * Callers:
 *     ?Create@CSwapChainRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802ACC7C (-Create@CSwapChainRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AE.c)
 *     ?EnsureDisplaySurface@CSwapChainRealization@@IEAAJXZ @ 0x1802ACDC4 (-EnsureDisplaySurface@CSwapChainRealization@@IEAAJXZ.c)
 *     ?GetD2DBitmap@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AD140 (-GetD2DBitmap@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetDeviceTexture@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AD4B0 (-GetDeviceTexture@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetAlphaMode@?$CDeviceTextureT@VIDeviceTexture@@@@QEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802AE344 (-SetAlphaMode@-$CDeviceTextureT@VIDeviceTexture@@@@QEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?OpenShared@CDeviceTexture@@SAJPEAVCD3DDevice@@PEAX_NI2PEAPEAV1@@Z @ 0x1802B8594 (-OpenShared@CDeviceTexture@@SAJPEAVCD3DDevice@@PEAX_NI2PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSwapChainRealization::EnsureTexture(CSwapChainRealization *this)
{
  __int64 *v1; // rsi
  int Device; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  bool v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // rdx
  bool v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CD3DDevice *v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 264);
  if ( *((_QWORD *)this + 33) )
    return 0LL;
  v13 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v13);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)((char *)this + 240), &v13);
  v5 = Device;
  if ( Device >= 0 )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
    Device = CDeviceTexture::OpenShared(v13, *((void **)this + 29), v7, v8, v11, (struct CDeviceTexture **)v1);
    v5 = Device;
    if ( Device >= 0 )
    {
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)*v1 + 72LL))(
        *v1,
        ((unsigned __int64)this + 56) & -(__int64)(this != 0LL));
      v9 = *((_QWORD *)this + 11);
      if ( (*((_BYTE *)this + 216) & 1) == 0 || !v9 )
        LODWORD(v9) = -1;
      v10 = 3LL;
      *(_DWORD *)(*v1 + 200) = v9;
      if ( *((_DWORD *)this + 20) )
        v10 = *((unsigned int *)this + 20);
      CDeviceTextureT<IDeviceTexture>::SetAlphaMode(*v1, v10);
      v5 = 0;
      *(_DWORD *)(*v1 + 196) = *((_DWORD *)this + 32);
      goto LABEL_14;
    }
    v6 = 543LL;
  }
  else
  {
    v6 = 535LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
    (const char *)(unsigned int)Device);
LABEL_14:
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v13);
  return v5;
}
