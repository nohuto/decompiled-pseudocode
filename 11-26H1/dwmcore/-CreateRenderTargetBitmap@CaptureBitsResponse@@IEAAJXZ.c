/*
 * XREFs of ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180127FC4
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180127CB4 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800F2550 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F4650 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180128A30 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180128D84 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180295580 (-GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::CreateRenderTargetBitmap(CaptureBitsResponse *this)
{
  UINT32 v1; // eax
  enum DXGI_COLOR_SPACE_TYPE v3; // ebx
  int Device; // eax
  CD3DDevice *v5; // rbx
  unsigned int v6; // edi
  __int64 *v7; // r14
  int v8; // eax
  CDeviceManager *v10; // rcx
  int WarpDevice; // eax
  int v12; // eax
  __int64 v13; // [rsp+40h] [rbp-40h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v14; // [rsp+48h] [rbp-38h]
  const char *v15; // [rsp+50h] [rbp-30h] BYREF
  int v16; // [rsp+58h] [rbp-28h]
  struct _LUID v17; // [rsp+60h] [rbp-20h] BYREF
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]
  int v20; // [rsp+70h] [rbp-10h]
  char v21; // [rsp+74h] [rbp-Ch]
  __int16 v22; // [rsp+75h] [rbp-Bh]
  char v23; // [rsp+77h] [rbp-9h]
  CD3DDevice *v24; // [rsp+B0h] [rbp+30h] BYREF
  struct D2D_SIZE_U v25; // [rsp+B8h] [rbp+38h] BYREF

  v1 = *((_DWORD *)this + 371);
  v3 = *((_DWORD *)this + 375);
  v13 = *(_QWORD *)((char *)this + 1492);
  v25.width = v1;
  v25.height = *((_DWORD *)this + 372);
  v14 = v3;
  if ( (_DWORD)v13 == 88 )
    v13 = 0x300000057LL;
  CDisplayManager::GetPrimaryAdapterLuid(this);
  v18 = -3;
  v19 = 0;
  v20 = 1065353216;
  if ( !IsDXGIColorSpaceHDR(v3) )
    v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v24);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v17, &v24);
  v5 = v24;
  v6 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x13Au, 0LL);
  }
  else
  {
    v7 = (__int64 *)((char *)this + 64);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 8);
    v15 = "DWM Scratch Rendertarget (capturebits)";
    v16 = 38;
    v8 = CD3DDevice::CreateRenderTargetBitmap(
           (__int64)v5,
           (const struct CResourceTag *)&v15,
           &v25,
           (struct PixelFormatInfo *)&v13,
           (struct RenderTargetInfo *)&v17,
           1,
           (struct IRenderTargetBitmap **)this + 8);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x142u, 0LL);
      v24 = 0LL;
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v24);
      WarpDevice = CDeviceManager::GetWarpDevice(v10, &v24);
      v6 = WarpDevice;
      if ( WarpDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, WarpDevice, 0x148u, 0LL);
      }
      else
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v7);
        v15 = "DWM Scratch Rendertarget (capturebits)";
        v16 = 38;
        v12 = CD3DDevice::CreateRenderTargetBitmap(
                (__int64)v24,
                (const struct CResourceTag *)&v15,
                &v25,
                (struct PixelFormatInfo *)&v13,
                (struct RenderTargetInfo *)&v17,
                1,
                (struct IRenderTargetBitmap **)v7);
        v6 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x14Fu, 0LL);
      }
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v24);
    }
  }
  if ( v5 )
    CD3DDevice::Release(v5);
  return v6;
}
