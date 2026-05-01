/*
 * XREFs of ?WICIsOrientationSupported@@YA_NPEAUIWICBitmapDecoder@@@Z @ 0x180129CBC
 * Callers:
 *     ?LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAUIWICBitmapSource@@PEAPEAUIWICBitmapFrameDecode@@PEAU_GUID@@@Z @ 0x18012988C (-LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall WICIsOrientationSupported(struct IWICBitmapDecoder *a1)
{
  struct IWICBitmapDecoderVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetContainerFormat)(IWICBitmapDecoder *, GUID *); // rax
  char v3; // bl
  _DWORD Buf2[4]; // [rsp+20h] [rbp-30h] BYREF
  __int128 Buf1; // [rsp+30h] [rbp-20h] BYREF

  lpVtbl = a1->lpVtbl;
  Buf2[0] = -20885953;
  Buf2[1] = 1194738298;
  Buf2[2] = -316152150;
  GetContainerFormat = lpVtbl->GetContainerFormat;
  Buf2[3] = 580122244;
  Buf1 = 0LL;
  v3 = 0;
  if ( ((int (__fastcall *)(struct IWICBitmapDecoder *, __int128 *))GetContainerFormat)(a1, &Buf1) >= 0
    && (!memcmp_0(&Buf1, &GUID_ContainerFormatJpeg, 0x10uLL)
     || !memcmp_0(&Buf1, &GUID_ContainerFormatAdng, 0x10uLL)
     || !memcmp_0(&Buf1, &GUID_ContainerFormatHeif, 0x10uLL)
     || !memcmp_0(&Buf1, &GUID_ContainerFormatRaw, 0x10uLL)
     || !memcmp_0(&Buf1, Buf2, 0x10uLL)) )
  {
    return 1;
  }
  return v3;
}
