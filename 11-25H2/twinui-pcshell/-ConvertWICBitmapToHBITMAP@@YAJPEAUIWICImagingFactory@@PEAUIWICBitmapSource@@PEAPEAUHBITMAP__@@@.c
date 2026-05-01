/*
 * XREFs of ?ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z @ 0x1801317A0
 * Callers:
 *     ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x180130E64 (-CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18026EF70 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x18055E3A0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ConvertWICBitmapToHBITMAP(struct IWICImagingFactory *a1, struct IWICBitmapSource *a2, HBITMAP *a3)
{
  struct IWICImagingFactory *v5; // rdi
  HRESULT (__stdcall *CreateFormatConverter)(IWICImagingFactory *, IWICFormatConverter **); // rbx
  HRESULT v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r14
  HBITMAP v10; // rdi
  __int64 v11; // rcx
  LPVOID v12; // rcx
  __int64 v14; // [rsp+40h] [rbp-49h] BYREF
  LONG v15; // [rsp+48h] [rbp-41h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-39h] BYREF
  __int64 v17; // [rsp+58h] [rbp-31h] BYREF
  void *ppvBits; // [rsp+60h] [rbp-29h] BYREF
  GUID v19; // [rsp+70h] [rbp-19h] BYREF
  BITMAPINFO pbmi; // [rsp+80h] [rbp-9h] BYREF

  v5 = a1;
  *a3 = 0LL;
  ppv = a1;
  if ( a1 )
  {
    ((void (__fastcall *)(struct IWICImagingFactory *))a1->lpVtbl->AddRef)(a1);
    v5 = (struct IWICImagingFactory *)ppv;
  }
  if ( !v5 )
  {
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
    v7 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv);
    if ( v7 < 0 )
      goto LABEL_16;
    v5 = (struct IWICImagingFactory *)ppv;
  }
  v19 = GUID_WICPixelFormat32bppBGRA;
  v17 = 0LL;
  v14 = 0LL;
  CreateFormatConverter = v5->lpVtbl->CreateFormatConverter;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v14);
  v7 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, __int64 *))CreateFormatConverter)(v5, &v14);
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, GUID *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v14 + 64LL))(
           v14,
           a2,
           &v19,
           0LL,
           0LL,
           0LL,
           0);
    if ( v7 >= 0 )
      v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v14)(
             v14,
             &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
             &v17);
  }
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v7 >= 0 )
  {
    v9 = v17;
    *a3 = 0LL;
    v15 = 0;
    LODWORD(v14) = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, LONG *, __int64 *))(*(_QWORD *)v9 + 24LL))(v9, &v15, &v14);
    if ( v7 >= 0 )
    {
      memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
      pbmi.bmiHeader.biSize = 40;
      pbmi.bmiHeader.biWidth = v15;
      pbmi.bmiHeader.biHeight = -(int)v14;
      *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
      ppvBits = 0LL;
      v10 = CreateDIBSection(0LL, &pbmi, 0, &ppvBits, 0LL, 0);
      if ( v10 )
      {
        *(_QWORD *)&v19.Data1 = 0LL;
        *(_QWORD *)v19.Data4 = __PAIR64__(v14, v15);
        v7 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD, _QWORD, void *))(*(_QWORD *)v9 + 56LL))(
               v9,
               &v19,
               (unsigned int)(4 * v15),
               (unsigned int)(4 * v15 * v14),
               ppvBits);
        if ( v7 < 0 )
          DeleteObject(v10);
        else
          *a3 = v10;
      }
      else
      {
        v7 = -2147024882;
      }
    }
  }
  v11 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_16:
  v12 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v7;
}
