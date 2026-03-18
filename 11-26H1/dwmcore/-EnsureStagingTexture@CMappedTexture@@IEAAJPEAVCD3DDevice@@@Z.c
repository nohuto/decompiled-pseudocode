/*
 * XREFs of ?EnsureStagingTexture@CMappedTexture@@IEAAJPEAVCD3DDevice@@@Z @ 0x1802B8A10
 * Callers:
 *     ?Initialize@CMappedTexture@@QEAAJPEAVIDeviceTexture@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802B8B78 (-Initialize@CMappedTexture@@QEAAJPEAVIDeviceTexture@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800F5AE8 (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?Unmap@CMappedTexture@@IEAAXXZ @ 0x1802B8EB8 (-Unmap@CMappedTexture@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMappedTexture::EnsureStagingTexture(CMappedTexture *this, struct CD3DDevice *a2)
{
  _QWORD *v4; // rdi
  bool v5; // zf
  int v6; // eax
  struct ID3D11Texture2D *v7; // r8
  int Texture; // eax
  unsigned int v9; // ebx
  __int128 v11; // [rsp+30h] [rbp-19h]
  _DWORD v12[5]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v13; // [rsp+54h] [rbp+Bh]
  __int64 v14; // [rsp+5Ch] [rbp+13h]
  __int64 v15; // [rsp+64h] [rbp+1Bh]
  __int128 v16; // [rsp+70h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  CMappedTexture::Unmap(this);
  DWORD2(v11) = 18;
  v12[2] = 1;
  *(_QWORD *)&v11 = "DWM Mapped Texture";
  v4 = (_QWORD *)((char *)this + 56);
  v5 = *((_QWORD *)this + 7) == 0LL;
  v12[0] = *((_DWORD *)this + 4);
  v12[1] = *((_DWORD *)this + 5);
  v6 = *((_DWORD *)this + 6);
  v16 = v11;
  v12[4] = v6;
  v12[3] = 1;
  v13 = 1LL;
  v14 = 3LL;
  v15 = 0x20000LL;
  if ( v5 )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 7);
    Texture = CD3DDevice::CreateTexture(
                a2,
                (const struct DWM_TEXTURE2D_DESC *)v12,
                v7,
                (struct ID3D11Texture2D **)this + 7);
    v9 = Texture;
    if ( Texture < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9F,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\mappedtexture.cpp",
        (const char *)(unsigned int)Texture);
      return v9;
    }
    (*(void (__fastcall **)(_QWORD, const GUID *, _QWORD, _QWORD))(*(_QWORD *)*v4 + 40LL))(
      *v4,
      &WKPDID_D3DDebugObjectName,
      DWORD2(v16),
      v16);
  }
  return 0LL;
}
