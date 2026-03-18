/*
 * XREFs of ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ @ 0x1800E2940
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800E2A7C (-Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IAEB.c)
 *     ?Lock@CWarpLockSubresource@@QEAAJPEAUD3D10_MAPPED_TEXTURE2D@@@Z @ 0x1800E2C84 (-Lock@CWarpLockSubresource@@QEAAJPEAUD3D10_MAPPED_TEXTURE2D@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapLock@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E2E44 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapLock@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CD2DBitmap::SupportsFastLock(CD2DBitmap *this)
{
  struct CWarpLockSubresource *v2; // rdi
  _BYTE *v3; // rsi
  __int64 v5; // rax
  struct IWarpPalLockSubresourceExtension *v6; // r14
  __int64 v7; // rax
  const struct PixelFormatInfo *v8; // rax
  int v9; // eax
  struct CWarpLockSubresource *v10; // rbx
  struct CWarpLockSubresource *v11; // [rsp+30h] [rbp-48h] BYREF
  D3D10_MAPPED_TEXTURE2D v12; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v13[16]; // [rsp+48h] [rbp-30h] BYREF

  if ( (*((_DWORD *)this + 22) & 0x400000) != 0 )
    return 0;
  if ( !*((_BYTE *)this + 151) )
  {
    v2 = 0LL;
    v3 = (char *)this + 150;
    v5 = *((_QWORD *)this - 11);
    *((_BYTE *)this + 151) = 1;
    *((_BYTE *)this + 150) = 0;
    v6 = *(struct IWarpPalLockSubresourceExtension **)((*(__int64 (__fastcall **)(char *))(v5 + 40))((char *)this - 88)
                                                     + 592);
    if ( v6 )
    {
      v11 = 0LL;
      v7 = *((_QWORD *)this - 1);
      v12 = 0LL;
      v8 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(char *, _BYTE *))(v7 + 24))((char *)this - 8, v13);
      v9 = CWarpLockSubresource::Create(v6, *((struct ID3D11Texture2D **)this + 2), *((_DWORD *)this + 36), v8, &v11);
      v10 = v11;
      if ( v9 >= 0 && (int)CWarpLockSubresource::Lock(v11, &v12) >= 0 )
      {
        v2 = v10;
        *v3 = 1;
        v10 = 0LL;
      }
      if ( v10 )
        CMILRefCountBaseT<IBitmapLock,CMilObjectDeleter>::InternalRelease(v10);
      if ( v2 )
        (*(void (__fastcall **)(struct CWarpLockSubresource *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  return *((_BYTE *)this + 150);
}
