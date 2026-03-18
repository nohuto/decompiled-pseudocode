/*
 * XREFs of ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x1800F6E10
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18009A68C (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800F2550 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F4650 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x1800F6FA0 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?GetDefaultDXGIColorSpaceForFormat@@YA?AW4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@@Z @ 0x1800F7118 (-GetDefaultDXGIColorSpaceForFormat@@YA-AW4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@@Z.c)
 *     ??0CCachedTarget@CCachedVisualImage@@QEAA@PEAV1@PEAVIRenderTargetBitmap@@@Z @ 0x1800F8040 (--0CCachedTarget@CCachedVisualImage@@QEAA@PEAV1@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?GetResourceTag@CCachedVisualImage@@IEBA?AVCResourceTag@@XZ @ 0x18021B9F8 (-GetResourceTag@CCachedVisualImage@@IEBA-AVCResourceTag@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::CreateCachedTarget(
        CCachedVisualImage *this,
        struct D2D_SIZE_U a2,
        const struct RenderTargetInfo *a3,
        struct CCachedVisualImage::CCachedTarget **a4)
{
  struct IRenderTargetBitmap *v5; // rbx
  int Device; // eax
  unsigned int v9; // esi
  const struct CResourceTag *ResourceTag; // rax
  int v11; // eax
  CCachedVisualImage::CCachedTarget *v12; // rax
  CD3DDevice *v14; // [rsp+40h] [rbp-19h] BYREF
  struct IRenderTargetBitmap *v15; // [rsp+48h] [rbp-11h] BYREF
  struct D2D_SIZE_U v16; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v17[16]; // [rsp+58h] [rbp-1h] BYREF
  enum DXGI_FORMAT v18[4]; // [rsp+68h] [rbp+Fh] BYREF

  v16 = a2;
  v14 = 0LL;
  v5 = 0LL;
  v15 = 0LL;
  (*(void (__fastcall **)(char *, enum DXGI_FORMAT *))(*((_QWORD *)this + 9) + 24LL))((char *)this + 72, v18);
  *a4 = 0LL;
  v18[0] = RenderTargetInfo::IsHDR(a3) ? DXGI_FORMAT_R16G16B16A16_FLOAT : DXGI_FORMAT_B8G8R8A8_UNORM;
  v18[2] = GetDefaultDXGIColorSpaceForFormat(v18[0]);
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v14);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)a3, &v14);
  v9 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x2DEu, 0LL);
  }
  else
  {
    ResourceTag = (const struct CResourceTag *)CCachedVisualImage::GetResourceTag(this, v17);
    v11 = CD3DDevice::CreateRenderTargetBitmap(
            (__int64)v14,
            ResourceTag,
            &v16,
            (struct PixelFormatInfo *)v18,
            a3,
            0,
            &v15);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x2E5u, 0LL);
      v5 = v15;
    }
    else
    {
      v12 = (CCachedVisualImage::CCachedTarget *)MIDL_user_allocate(0x40uLL);
      v5 = v15;
      if ( v12 )
        v12 = (CCachedVisualImage::CCachedTarget *)CCachedVisualImage::CCachedTarget::CCachedTarget(v12, this, v15);
      *a4 = v12;
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v14 )
    CD3DDevice::Release(v14);
  return v9;
}
