/*
 * XREFs of ?Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800E2A7C
 * Callers:
 *     ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ @ 0x1800E2940 (-SupportsFastLock@CD2DBitmap@@UEBA_NXZ.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x1800E4134 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800E4690 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?Initialize@CMappedTexture@@QEAAJPEAVIDeviceTexture@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802B8B78 (-Initialize@CMappedTexture@@QEAAJPEAVIDeviceTexture@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@.c)
 *     ?Lock@CSysmemTexture@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1802B9420 (-Lock@CSysmemTexture@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CWarpLockSubresource@@IEAA@PEAVIWarpPalLockSubresourceExtension@@AEBUPixelFormatInfo@@@Z @ 0x1800E2B44 (--0CWarpLockSubresource@@IEAA@PEAVIWarpPalLockSubresourceExtension@@AEBUPixelFormatInfo@@@Z.c)
 *     ?Initialize@CWarpLockSubresource@@IEAAJPEAUID3D11Texture2D@@I@Z @ 0x1800E2BD4 (-Initialize@CWarpLockSubresource@@IEAAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapLock@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E2E44 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapLock@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CWarpLockSubresource::Create(
        struct IWarpPalLockSubresourceExtension *a1,
        struct ID3D11Texture2D *a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        struct CWarpLockSubresource **a5)
{
  CWarpLockSubresource *v9; // rax
  CWarpLockSubresource *v10; // rax
  CWarpLockSubresource *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a5 = 0LL;
  v9 = (CWarpLockSubresource *)operator new(0x78uLL);
  if ( v9 )
  {
    v10 = CWarpLockSubresource::CWarpLockSubresource(v9, a1, a4);
    v11 = v10;
    if ( v10 )
      CMILRefCountImpl::AddReference((CWarpLockSubresource *)((char *)v10 + 8));
  }
  else
  {
    v11 = 0LL;
  }
  v12 = CWarpLockSubresource::Initialize(v11, a2, a3);
  v13 = v12;
  if ( v12 >= 0 )
  {
    *a5 = v11;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\warplocksubresource.cpp",
      (const char *)(unsigned int)v12);
    if ( v11 )
      CMILRefCountBaseT<IBitmapLock,CMilObjectDeleter>::InternalRelease(v11);
    return v13;
  }
}
