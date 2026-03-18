/*
 * XREFs of ?Create@CCrossAdapterTexture@@SAJPEAVCD3DDevice@@AEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z @ 0x1802B7740
 * Callers:
 *     ?UpdateCrossAdapterSource@CTextureCollection@@IEAAJXZ @ 0x1802B21B0 (-UpdateCrossAdapterSource@CTextureCollection@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800F7A8C (--0CD3DResource@@IEAA@_N@Z.c)
 *     ?CreateCrossAdapterTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAUID3D11Texture2D@@@Z @ 0x180296940 (-CreateCrossAdapterTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAUID3D11Texture2D@@@Z.c)
 *     ?Initialize@?$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1802B7F64 (-Initialize@-$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11T.c)
 */

__int64 __fastcall CCrossAdapterTexture::Create(
        struct CD3DDevice *this,
        const struct DWM_TEXTURE2D_DESC *a2,
        struct CCrossAdapterTexture **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  CD3DResource *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  CD3DResourceManager *v11; // rdx
  struct CD3DResource *v12; // rdi
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CD3DResource *v16; // [rsp+40h] [rbp+18h] BYREF
  struct ID3D11Texture2D *v17; // [rsp+48h] [rbp+20h] BYREF

  *a3 = 0LL;
  v17 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v17);
  v6 = CD3DDevice::CreateCrossAdapterTexture(this, a2, &v17);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v16 = 0LL;
    v8 = (CD3DResource *)operator new(0xF0uLL);
    if ( v8 )
    {
      CD3DResource::CD3DResource(v8, 0LL);
      *(_QWORD *)(v9 + 136) = v10;
      *(_DWORD *)(v9 + 188) = v10;
      *(_DWORD *)(v9 + 192) = 3;
      *(_DWORD *)(v9 + 200) = -1;
      *(_QWORD *)(v9 + 208) = v10;
      *(_QWORD *)(v9 + 216) = v10;
      *(_QWORD *)(v9 + 224) = v10;
      *(_QWORD *)(v9 + 232) = v10;
      *(_QWORD *)v9 = &CCrossAdapterTexture::`vftable';
      *(_QWORD *)(v9 + 120) = &CCrossAdapterTexture::`vftable'{for `IDeviceResource'};
      *(_QWORD *)(v9 + 128) = &CSysmemTexture::`vftable'{for `IPixelFormat'};
    }
    else
    {
      v9 = 0LL;
    }
    wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)&v16, v9);
    v11 = (struct CD3DDevice *)((char *)this + 1136);
    v12 = v16;
    v13 = CDeviceTextureT<ICrossAdapterTexture>::Initialize(v16, v11, (struct ID3D11Resource *)v17);
    v7 = v13;
    if ( v13 >= 0 )
    {
      v16 = 0LL;
      *a3 = v12;
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\devicetexture.cpp",
        (const char *)(unsigned int)v13);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\devicetexture.cpp",
      (const char *)(unsigned int)v6);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  return v7;
}
