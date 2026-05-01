/*
 * XREFs of ?ConvertIWICBitmapSourceTo32bppHBITMAP@@YAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAUHBITMAP__@@@Z @ 0x180130A24
 * Callers:
 *     ?_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z @ 0x180130ABC (-_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConvertIWICBitmapSourcePixelFormat@@YAJPEAUIWICBitmapSource@@U_GUID@@PEAUIWICImagingFactory@@PEAPEAU1@@Z @ 0x180131B48 (-ConvertIWICBitmapSourcePixelFormat@@YAJPEAUIWICBitmapSource@@U_GUID@@PEAUIWICImagingFactory@@PE.c)
 *     ?Convert32bppIWICBitmapSourceToHBITMAP@@YAJPEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z @ 0x180131C54 (-Convert32bppIWICBitmapSourceToHBITMAP@@YAJPEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ConvertIWICBitmapSourceTo32bppHBITMAP(
        struct IWICBitmapSource *a1,
        struct IWICImagingFactory *a2,
        HBITMAP *a3)
{
  int v6; // ebx
  struct IWICBitmapSource *v7; // rcx
  struct _GUID v9; // [rsp+20h] [rbp-18h] BYREF
  struct IWICBitmapSource *v10; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v10);
  v9 = GUID_WICPixelFormat32bppBGRA;
  v6 = ConvertIWICBitmapSourcePixelFormat(a1, &v9, a2, &v10);
  if ( v6 >= 0 )
    v6 = Convert32bppIWICBitmapSourceToHBITMAP(v10, a3);
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    ((void (__fastcall *)(struct IWICBitmapSource *))v7->lpVtbl->Release)(v7);
  }
  return (unsigned int)v6;
}
