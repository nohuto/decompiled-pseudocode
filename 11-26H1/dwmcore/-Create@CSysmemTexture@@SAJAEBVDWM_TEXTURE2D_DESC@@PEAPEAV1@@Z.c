/*
 * XREFs of ?Create@CSysmemTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z @ 0x1802B920C
 * Callers:
 *     ?EnsureSysmemTexture@CTranscodeBitmap@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z @ 0x1802B24D0 (-EnsureSysmemTexture@CTranscodeBitmap@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180295580 (-GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?CreateCrossAdapterTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAUID3D11Texture2D@@@Z @ 0x180296940 (-CreateCrossAdapterTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAUID3D11Texture2D@@@Z.c)
 *     ?Initialize@?$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1802B7F64 (-Initialize@-$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11T.c)
 *     ??0CSysmemTexture@@IEAA@XZ @ 0x1802B8F2C (--0CSysmemTexture@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSysmemTexture::Create(const struct DWM_TEXTURE2D_DESC *a1, struct CSysmemTexture **a2)
{
  CDeviceManager *v4; // rcx
  int WarpDevice; // eax
  unsigned int v6; // ebx
  struct CD3DDevice *v7; // rbx
  int v8; // eax
  int v9; // edi
  CSysmemTexture *v10; // rax
  CSysmemTexture *v11; // rax
  struct CD3DResource *v12; // rdi
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct ID3D11Texture2D *v16; // [rsp+48h] [rbp+28h] BYREF
  CSysmemTexture *v17; // [rsp+50h] [rbp+30h] BYREF
  struct CD3DDevice *v18; // [rsp+58h] [rbp+38h] BYREF

  *a2 = 0LL;
  v18 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v18);
  WarpDevice = CDeviceManager::GetWarpDevice(v4, &v18);
  v6 = WarpDevice;
  if ( WarpDevice >= 0 )
  {
    v16 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v16);
    v7 = v18;
    v8 = CD3DDevice::CreateCrossAdapterTexture(v18, a1, &v16);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = (CSysmemTexture *)operator new(0x100uLL);
      if ( v10 )
      {
        v11 = CSysmemTexture::CSysmemTexture(v10);
        v17 = v11;
        v12 = v11;
        if ( v11 )
          (*(void (__fastcall **)(CSysmemTexture *))(*(_QWORD *)v11 + 8LL))(v11);
      }
      else
      {
        v12 = 0LL;
        v17 = 0LL;
      }
      v13 = CDeviceTextureT<ICrossAdapterTexture>::Initialize(
              v12,
              (struct CD3DDevice *)((char *)v7 + 1136),
              (struct ID3D11Resource *)v16);
      v6 = v13;
      if ( v13 >= 0 )
      {
        v17 = 0LL;
        *a2 = v12;
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x20,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\sysmemtexture.cpp",
          (const char *)(unsigned int)v13);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\sysmemtexture.cpp",
        (const char *)(unsigned int)v8);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
      v6 = v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\sysmemtexture.cpp",
      (const char *)(unsigned int)WarpDevice);
  }
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v18);
  return v6;
}
