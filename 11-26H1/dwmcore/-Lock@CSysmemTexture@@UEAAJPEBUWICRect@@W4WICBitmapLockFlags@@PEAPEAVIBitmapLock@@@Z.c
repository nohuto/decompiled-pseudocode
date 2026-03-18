/*
 * XREFs of ?Lock@CSysmemTexture@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1802B9420
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800E2A7C (-Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IAEB.c)
 *     ??1?$com_ptr_t@VCMappedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E2D20 (--1-$com_ptr_t@VCMappedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?Lock@CWarpLockSubresource@@QEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1802AA3A0 (-Lock@CWarpLockSubresource@@QEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSysmemTexture::Lock(
        CSysmemTexture *this,
        const struct WICRect *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  __int64 v8; // rax
  struct ID3D11Texture2D *v9; // rdi
  const struct PixelFormatInfo *v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  struct CWarpLockSubresource *v16; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v17[16]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a4 = 0LL;
  v16 = 0LL;
  v8 = (*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this - 15) + 24LL))((char *)this - 120, v17);
  v9 = (struct ID3D11Texture2D *)*((_QWORD *)this - 14);
  v10 = (const struct PixelFormatInfo *)v8;
  v11 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 31) + 40LL))((char *)this - 248);
  v12 = CWarpLockSubresource::Create(*(struct IWarpPalLockSubresourceExtension **)(v11 + 592), v9, 0, v10, &v16);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v12 = CWarpLockSubresource::Lock(v16, a2, a3, a4);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v13 = 0;
      goto LABEL_7;
    }
    v14 = 57LL;
  }
  else
  {
    v14 = 52LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\sysmemtexture.cpp",
    (const char *)(unsigned int)v12);
LABEL_7:
  wil::com_ptr_t<CMappedTexture,wil::err_returncode_policy>::~com_ptr_t<CMappedTexture,wil::err_returncode_policy>((__int64 *)&v16);
  return v13;
}
