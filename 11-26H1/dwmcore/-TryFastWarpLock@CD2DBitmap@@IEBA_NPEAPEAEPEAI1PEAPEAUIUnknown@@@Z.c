/*
 * XREFs of ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x1800E4134
 * Callers:
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800E2F10 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1800E34C0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 * Callees:
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800E2A7C (-Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IAEB.c)
 *     ?Lock@CWarpLockSubresource@@QEAAJPEAUD3D10_MAPPED_TEXTURE2D@@@Z @ 0x1800E2C84 (-Lock@CWarpLockSubresource@@QEAAJPEAUD3D10_MAPPED_TEXTURE2D@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapLock@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E2E44 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapLock@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CD2DBitmap::TryFastWarpLock(
        CD2DBitmap *this,
        unsigned __int8 **a2,
        unsigned int *a3,
        unsigned int *a4,
        struct IUnknown **a5)
{
  char *v5; // rdi
  __int64 v11; // rax
  struct IWarpPalLockSubresourceExtension *v12; // rbx
  __int64 v13; // rax
  const struct PixelFormatInfo *v14; // rax
  int v15; // eax
  struct IUnknown *v16; // rbx
  UINT RowPitch; // eax
  struct CWarpLockSubresource *v18; // [rsp+30h] [rbp-78h] BYREF
  struct D3D10_MAPPED_TEXTURE2D v19; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v20[16]; // [rsp+48h] [rbp-60h] BYREF

  v5 = (char *)this + 238;
  *a2 = 0LL;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0LL;
  if ( !*((_BYTE *)this + 239) || *v5 )
  {
    *v5 = 0;
    v11 = *(_QWORD *)this;
    *((_BYTE *)this + 239) = 1;
    v12 = *(struct IWarpPalLockSubresourceExtension **)((*(__int64 (**)(void))(v11 + 40))() + 592);
    if ( v12 )
    {
      v18 = 0LL;
      v13 = *((_QWORD *)this + 10);
      v19 = 0LL;
      v14 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(char *, _BYTE *))(v13 + 24))(
                                              (char *)this + 80,
                                              v20);
      v15 = CWarpLockSubresource::Create(
              v12,
              *((struct ID3D11Texture2D **)this + 13),
              *((_DWORD *)this + 58),
              v14,
              &v18);
      v16 = (struct IUnknown *)v18;
      if ( v15 >= 0 && (int)CWarpLockSubresource::Lock(v18, &v19) >= 0 )
      {
        *a2 = (unsigned __int8 *)v19.pData;
        RowPitch = v19.RowPitch;
        *a3 = v19.RowPitch;
        *a4 = *((_DWORD *)this + 37) * RowPitch;
        *a5 = v16;
        v16 = 0LL;
        *v5 = 1;
      }
      if ( v16 )
        CMILRefCountBaseT<IBitmapLock,CMilObjectDeleter>::InternalRelease((__int64)v16);
    }
  }
  return *v5;
}
