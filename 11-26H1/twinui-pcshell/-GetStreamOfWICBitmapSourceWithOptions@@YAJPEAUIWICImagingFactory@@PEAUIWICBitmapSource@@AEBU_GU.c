/*
 * XREFs of ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x1803E99D4
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1803E9770 (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ @ 0x180129DB4 (-InternalAddRef@-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_GUID@@W4EncodingOptions@@@Z @ 0x1803E93EC (-AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GetStreamOfWICBitmapSourceWithOptions(
        void *a1,
        struct IWICBitmapSource *a2,
        IStream *a3,
        struct _GUID *a4,
        __int64 a5,
        LPVOID ppv)
{
  _QWORD *v8; // rsi
  int v9; // ebx
  LPVOID v10; // rbx
  __int64 (__fastcall *v11)(LPVOID, GUID *, GUID *, __int64 *); // rdi
  IStream *v12; // rcx
  struct _GUID v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  IStream *v16; // [rsp+80h] [rbp+40h] BYREF

  v16 = a3;
  v8 = ppv;
  *(_QWORD *)ppv = 0LL;
  ppv = a1;
  Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>::InternalAddRef((__int64 *)&ppv);
  if ( ppv
    || (Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv),
        v9 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv),
        v9 >= 0) )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
    v16 = SHCreateMemStream(0LL, 0);
    if ( v16 )
    {
      v15 = 0LL;
      v10 = ppv;
      v11 = *(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)ppv + 64LL);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v15);
      v9 = v11(v10, &GUID_ContainerFormatBmp, &GUID_VendorMicrosoft, &v15);
      if ( v9 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, IStream *, __int64))(*(_QWORD *)v15 + 24LL))(v15, v16, 2LL);
        if ( v9 >= 0 )
        {
          v14 = *a4;
          v9 = AddFrameToWICBitmap((struct IWICImagingFactory *)ppv, v15, a2, &v14);
          if ( v9 >= 0 )
          {
            v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 88LL))(v15);
            if ( v9 >= 0 )
            {
              v9 = (*(__int64 (__fastcall **)(IStream *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v16 + 40LL))(
                     v16,
                     *(_QWORD *)&`GetStreamOfWICBitmapSourceWithOptions'::`23'::lnBeginning,
                     0LL,
                     0LL);
              if ( v9 >= 0 )
              {
                v12 = v16;
                if ( v16 )
                {
                  (*(void (__fastcall **)(IStream *))(*(_QWORD *)v16 + 8LL))(v16);
                  v12 = v16;
                }
                *v8 = v12;
                v9 = 0;
              }
            }
          }
        }
      }
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v15);
    }
    else
    {
      v9 = -2147024882;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v9;
}
