/*
 * XREFs of ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x18014BD88
 * Callers:
 *     ?Initialize@CBackdropVisualImage@@EEAAJXZ @ 0x18014BD10 (-Initialize@CBackdropVisualImage@@EEAAJXZ.c)
 *     ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180203C2C (-CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?CreateForDCompSnapshot@CCachedVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@AEBUD2D_SIZE_U@@_NPEAPEAV1@@Z @ 0x180262030 (-CreateForDCompSnapshot@CCachedVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@AEBUD2D_SIZE_U@@_N.c)
 *     ?CreateForVisualBitmap@CCachedVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180262178 (-CreateForVisualBitmap@CCachedVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180262ED8 (-Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800E6AF4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18014BE34 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCachedVisualImage::ChoosePixelFormat(CCachedVisualImage *this)
{
  unsigned int v2; // ecx
  __int64 v3; // r8
  enum DXGI_FORMAT v4; // r8d
  BOOL v5; // eax
  __int64 v6; // rcx
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 32);
  v3 = v2;
  if ( !v2 )
  {
    v6 = **(_QWORD **)(*((_QWORD *)this + 3) + 616LL);
    if ( v6 )
      v2 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)v6 + 24LL))(v6, v7, v3);
    else
      v2 = 87;
    *((_DWORD *)this + 32) = v2;
  }
  v5 = (unsigned int)HasAlphaChannel(v2) && !*((_BYTE *)this + 1602);
  *((_DWORD *)this + 33) = v5;
  if ( !*((_DWORD *)this + 34) )
    GetPixelFormatColorSpace(v4, (CCachedVisualImage *)((char *)this + 136));
}
