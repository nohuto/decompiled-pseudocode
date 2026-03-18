/*
 * XREFs of ?Initialize@CMappedTexture@@QEAAJPEAVIDeviceTexture@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802B8B78
 * Callers:
 *     ?Create@CMappedTexture@@SAJPEAVIDeviceTexture@@PEAPEAV1@@Z @ 0x1802B8904 (-Create@CMappedTexture@@SAJPEAVIDeviceTexture@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x180068EB0 (-Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800E2A7C (-Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IAEB.c)
 *     ?Lock@CWarpLockSubresource@@QEAAJPEAUD3D10_MAPPED_TEXTURE2D@@@Z @ 0x1800E2C84 (-Lock@CWarpLockSubresource@@QEAAJPEAUD3D10_MAPPED_TEXTURE2D@@@Z.c)
 *     ??1?$com_ptr_t@VCMappedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E2D20 (--1-$com_ptr_t@VCMappedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800E62DC (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x180105534 (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?EnsureStagingTexture@CMappedTexture@@IEAAJPEAVCD3DDevice@@@Z @ 0x1802B8A10 (-EnsureStagingTexture@CMappedTexture@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?ReleaseBitmapAndUnmap@CMappedTexture@@IEAAXXZ @ 0x1802B8E78 (-ReleaseBitmapAndUnmap@CMappedTexture@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMappedTexture::Initialize(
        CMappedTexture *this,
        struct IDeviceTexture *a2,
        enum DXGI_ALPHA_MODE a3,
        enum DXGI_COLOR_SPACE_TYPE a4)
{
  __int64 *v4; // r15
  __int64 v8; // rax
  struct ID3D11Texture2D *v9; // r12
  struct CD3DDevice *v10; // rdi
  __int64 v11; // rbx
  char *v12; // r14
  int v13; // eax
  struct IWarpPalLockSubresourceExtension *v14; // rcx
  int v15; // ebx
  __int64 v16; // rdx
  struct ID3D11Resource *v18; // rdx
  int v19; // r8d
  unsigned int v20; // edi
  unsigned __int8 *pData; // rbx
  int BitmapFromMemory; // eax
  __int64 v23; // rdx
  struct IUnknown *v24; // rbx
  int v25; // eax
  int v26; // edi
  unsigned int v27; // edi
  struct CWarpLockSubresource **v28; // [rsp+20h] [rbp-69h]
  unsigned int v29; // [rsp+20h] [rbp-69h]
  unsigned int v30; // [rsp+50h] [rbp-39h] BYREF
  struct IUnknown *v31; // [rsp+58h] [rbp-31h] BYREF
  int v32; // [rsp+60h] [rbp-29h]
  int v33; // [rsp+64h] [rbp-25h]
  D3D11_MAPPED_SUBRESOURCE v34; // [rsp+68h] [rbp-21h] BYREF
  __int128 v35; // [rsp+78h] [rbp-11h] BYREF
  __int128 v36; // [rsp+88h] [rbp-1h]
  __int64 v37; // [rsp+98h] [rbp+Fh]
  int v38; // [rsp+A0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v4 = (__int64 *)((char *)this + 48);
  LODWORD(v31) = a3;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 6);
  v8 = *(_QWORD *)a2;
  v30 = 0;
  v9 = (struct ID3D11Texture2D *)(*(__int64 (__fastcall **)(struct IDeviceTexture *, unsigned int *))(v8 + 120))(
                                   a2,
                                   &v30);
  v37 = 0LL;
  v38 = 0;
  v35 = 0LL;
  v36 = 0LL;
  ((void (__fastcall *)(struct ID3D11Texture2D *, __int128 *))v9->lpVtbl->GetDesc)(v9, &v35);
  v10 = (struct CD3DDevice *)(*(__int64 (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)a2 + 40LL))(a2);
  v11 = *((_QWORD *)v10 + 118);
  if ( *((_QWORD *)this + 2) != (_QWORD)v35
    || (v12 = (char *)this + 24, *((_DWORD *)this + 6) != (_DWORD)v36)
    || *(_QWORD *)((char *)this + 36) != v11 )
  {
    CMappedTexture::ReleaseBitmapAndUnmap(this);
    v12 = (char *)this + 24;
    *((_QWORD *)this + 2) = v35;
    *((_DWORD *)this + 6) = v36;
    *(_QWORD *)((char *)this + 36) = v11;
  }
  v13 = (int)v31;
  *((_DWORD *)this + 8) = a4;
  *((_DWORD *)v12 + 1) = v13;
  v14 = (struct IWarpPalLockSubresourceExtension *)*((_QWORD *)v10 + 74);
  if ( v14 )
  {
    v31 = 0LL;
    BitmapFromMemory = CWarpLockSubresource::Create(
                         v14,
                         v9,
                         v30,
                         (const struct PixelFormatInfo *)v12,
                         (struct CWarpLockSubresource **)&v31);
    v15 = BitmapFromMemory;
    if ( BitmapFromMemory >= 0 )
    {
      v24 = v31;
      v34 = 0LL;
      v25 = CWarpLockSubresource::Lock((CWarpLockSubresource *)v31, (struct D3D10_MAPPED_TEXTURE2D *)&v34);
      v26 = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x72,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\mappedtexture.cpp",
          (const char *)(unsigned int)v25);
        v15 = v26;
LABEL_21:
        wil::com_ptr_t<CMappedTexture,wil::err_returncode_policy>::~com_ptr_t<CMappedTexture,wil::err_returncode_policy>((__int64 *)&v31);
        return (unsigned int)v15;
      }
      v27 = *((_DWORD *)this + 5) * v34.RowPitch;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v4);
      BitmapFromMemory = HrCreateBitmapFromMemoryEx(
                           *((_DWORD *)this + 4),
                           *((_DWORD *)this + 5),
                           (const struct PixelFormatInfo *)v12,
                           v34.RowPitch,
                           v27,
                           (unsigned __int8 *)v34.pData,
                           v24,
                           (struct IBitmapSource **)v4);
      v15 = BitmapFromMemory;
      if ( BitmapFromMemory >= 0 )
      {
        wil::com_ptr_t<CMappedTexture,wil::err_returncode_policy>::~com_ptr_t<CMappedTexture,wil::err_returncode_policy>((__int64 *)&v31);
        return 0LL;
      }
      v23 = 127LL;
    }
    else
    {
      v23 = 111LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\mappedtexture.cpp",
      (const char *)(unsigned int)BitmapFromMemory);
    goto LABEL_21;
  }
  v15 = CMappedTexture::EnsureStagingTexture(this, v10);
  if ( v15 < 0 )
  {
    v16 = 65LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\mappedtexture.cpp",
      (const char *)(unsigned int)v15);
    return (unsigned int)v15;
  }
  v32 = *((_DWORD *)this + 4);
  v33 = *((_DWORD *)this + 5);
  v28 = (struct CWarpLockSubresource **)*((_QWORD *)this + 7);
  v31 = 0LL;
  CD3DDevice::CopySubresourceRegion((__int64)v10, (__int64)v9, v30, (int *)&v31, (__int64)v28, 0, 0, 0, 0);
  v18 = (struct ID3D11Resource *)*((_QWORD *)this + 7);
  v34 = 0LL;
  v15 = CD3DDevice::Map(v10, v18, v19, 1LL, v29, &v34);
  if ( v15 < 0 )
  {
    v16 = 84LL;
    goto LABEL_8;
  }
  v20 = *((_DWORD *)this + 5) * v34.RowPitch;
  pData = (unsigned __int8 *)v34.pData;
  *((_BYTE *)this + 64) = 1;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v4);
  v15 = HrCreateBitmapFromMemoryEx(
          *((_DWORD *)this + 4),
          *((_DWORD *)this + 5),
          (const struct PixelFormatInfo *)v12,
          v34.RowPitch,
          v20,
          pData,
          0LL,
          (struct IBitmapSource **)v4);
  if ( v15 < 0 )
  {
    v16 = 99LL;
    goto LABEL_8;
  }
  return 0LL;
}
