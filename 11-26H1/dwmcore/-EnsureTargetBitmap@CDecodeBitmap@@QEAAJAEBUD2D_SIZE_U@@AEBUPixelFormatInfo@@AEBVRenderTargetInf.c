/*
 * XREFs of ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180013714
 * Callers:
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1800133E8 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802ABF94 (-SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z @ 0x180013950 (-SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800F2550 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800F5310 (-SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x1800F53A0 (-SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z.c)
 *     ?SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800F5410 (-SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x1800F54BC (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z @ 0x1800F652C (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x1800F680C (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInf.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDecodeBitmap::EnsureTargetBitmap(
        CDecodeBitmap *this,
        const struct D2D_SIZE_U *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4)
{
  unsigned int v5; // r14d
  __int64 v6; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  char v13; // al
  int Device; // eax
  CD3DDevice *v16; // rdi
  int DeviceTextureTarget; // eax
  struct IDeviceTextureTarget *v18; // rbx
  struct RenderTargetInfo *v19; // [rsp+20h] [rbp-40h]
  CD3DDevice *v20; // [rsp+30h] [rbp-30h] BYREF
  const char *v21; // [rsp+38h] [rbp-28h] BYREF
  int v22; // [rsp+40h] [rbp-20h]
  struct IDeviceTextureTarget *v23[2]; // [rsp+48h] [rbp-18h] BYREF

  v5 = 0;
  v6 = *((_QWORD *)this + 15);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, struct IDeviceTextureTarget **))(*(_QWORD *)v6 + 88LL))(v6, v23);
    if ( (struct IDeviceTextureTarget *)*a2 == v23[0]
      && ((v10 = *((_QWORD *)this + 15)) == 0
        ? (v11 = 0)
        : ((*(void (__fastcall **)(__int64, struct IDeviceTextureTarget **))(*(_QWORD *)(v10 + 8) + 24LL))(v10 + 8, v23),
           v11 = (int)v23[0]),
          *(_DWORD *)a3 == v11)
      && ((v12 = *((_QWORD *)this + 15)) == 0
       || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL))(v12)
        ? (v13 = 0)
        : (v13 = 1),
          *((_BYTE *)a4 + 20) == v13) )
    {
      CRenderTargetBitmap::SetAlphaMode((CDecodeBitmap *)((char *)this + 80), *((enum DXGI_ALPHA_MODE *)a3 + 1));
      CRenderTargetBitmap::SetColorSpace((CDecodeBitmap *)((char *)this + 80), *((enum DXGI_COLOR_SPACE_TYPE *)a3 + 2));
      CRenderTargetBitmap::SetDisplayId((char *)this + 80, *((unsigned int *)a4 + 2));
      CRenderTargetBitmap::SetSDRBoost((CDecodeBitmap *)((char *)this + 80), *((float *)a4 + 4));
    }
    else
    {
      CRenderTargetBitmap::ReleaseDeviceTarget(this);
    }
  }
  if ( !*((_QWORD *)this + 15) )
  {
    v20 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v20);
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)a4, &v20);
    v5 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Device, 0x5Du, 0LL);
    }
    else
    {
      v23[0] = 0LL;
      v21 = "DWM Rendertarget (DecodeBitmap)";
      v22 = 31;
      v19 = a4;
      v16 = v20;
      DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(
                              v20,
                              (const struct CResourceTag *)&v21,
                              a2,
                              a3,
                              v19,
                              v23);
      v5 = DeviceTextureTarget;
      if ( DeviceTextureTarget >= 0 )
      {
        v18 = v23[0];
        CRenderTargetBitmap::Initialize(this, v23[0]);
        *((_BYTE *)this + 136) = 0;
        if ( v18 )
          (*(void (__fastcall **)(struct IDeviceTextureTarget *))(*(_QWORD *)v18 + 16LL))(v18);
        if ( v16 )
          CD3DDevice::Release(v16);
        return v5;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceTextureTarget, 0x64u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v23);
    }
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v20);
  }
  return v5;
}
