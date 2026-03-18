/*
 * XREFs of ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1801B61B0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F4650 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801DC480 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COffScreenRenderTarget::EnsureRenderTargets(COffScreenRenderTarget *this)
{
  unsigned int v1; // ebx
  enum DXGI_FORMAT v4; // r8d
  __int64 v5; // rcx
  int updated; // eax
  int Device; // eax
  int v8; // eax
  struct IRenderTargetBitmap *v9; // r8
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // esi
  unsigned int v13; // eax
  struct IRenderTargetBitmap *v14; // [rsp+40h] [rbp-40h] BYREF
  struct CD3DDevice *v15; // [rsp+48h] [rbp-38h] BYREF
  struct _LUID v16; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v17[2]; // [rsp+68h] [rbp-18h] BYREF

  v1 = 0;
  if ( !*((_DWORD *)this + 578) )
  {
    v4 = DXGI_FORMAT_B8G8R8A8_UNORM;
    v5 = **(_QWORD **)(*((_QWORD *)this + 3) + 616LL);
    if ( v5 )
      v4 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v5 + 24LL))(v5, v17, 87LL);
    updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, v4);
    v1 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x38u, 0LL);
      return v1;
    }
    (*(void (__fastcall **)(char *, struct _LUID *))(*((_QWORD *)this + 12) + 24LL))((char *)this + 96, &v16);
    v15 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v15);
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v16, &v15);
    v1 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x3Eu, 0LL);
      goto LABEL_19;
    }
    v14 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v14);
    v8 = CD3DDevice::CreateRenderTargetBitmap(
           (__int64)v15,
           (COffScreenRenderTarget *)((char *)this + 160),
           (const struct D2D_SIZE_U *)this + 15,
           (COffScreenRenderTarget *)((char *)this + 128),
           (struct RenderTargetInfo *)&v16,
           0,
           &v14);
    v1 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x46u, 0LL);
      goto LABEL_17;
    }
    v9 = v14;
    v10 = *((_DWORD *)this + 578);
    v14 = 0LL;
    v17[0] = v9;
    v11 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
      v1 = -2147024362;
      v13 = 183;
      v12 = -2147024362;
    }
    else
    {
      v12 = 0;
      if ( v11 <= *((_DWORD *)this + 577) )
      {
        *(_QWORD *)(*((_QWORD *)this + 286) + 8LL * v10) = v9;
        *((_DWORD *)this + 578) = v11;
LABEL_11:
        v1 = v12;
        CTargetDirtyBase<8>::SetFullDirty((__int64)this + 408);
LABEL_17:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
LABEL_19:
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v15);
        return v1;
      }
      v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 2288, 8, 1, v17);
      v1 = v12;
      if ( v12 >= 0 )
        goto LABEL_11;
      v13 = 194;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v1, v13, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x48u, 0LL);
    goto LABEL_17;
  }
  return v1;
}
