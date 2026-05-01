/*
 * XREFs of ?LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAUIWICBitmapSource@@PEAPEAUIWICBitmapFrameDecode@@PEAU_GUID@@@Z @ 0x180131168
 * Callers:
 *     ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x180130E64 (-CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18026EF70 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x1805176A0 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x18055E3A0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?WICIsOrientationSupported@@YA_NPEAUIWICBitmapDecoder@@@Z @ 0x180131680 (-WICIsOrientationSupported@@YA_NPEAUIWICBitmapDecoder@@@Z.c)
 *     ?WICCreateOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadataQueryReader@@PEAPEAU2@@Z @ 0x1802C0C24 (-WICCreateOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall LoadImageWithWIC(
        struct IWICImagingFactory *a1,
        __int64 a2,
        int a3,
        struct IWICBitmapSource **a4,
        struct IWICBitmapDecoder *a5,
        struct IWICBitmapSource *a6)
{
  struct IWICImagingFactory *v9; // rbx
  HRESULT (__stdcall *CreateDecoderFromStream)(IWICImagingFactory *, IStream *, const GUID *, WICDecodeOptions, IWICBitmapDecoder **); // rdi
  HRESULT Instance; // edi
  struct IWICBitmapDecoder *v12; // rbx
  HRESULT (__stdcall *GetFrame)(IWICBitmapDecoder *, UINT, IWICBitmapFrameDecode **); // rdi
  struct IWICBitmapSource *v14; // rsi
  struct IWICImagingFactory *v15; // r12
  unsigned int v16; // ebx
  int v17; // eax
  void (*AddRef)(void); // rax
  struct IWICBitmapSource *v19; // rcx
  struct IWICBitmapDecoder *v20; // rcx
  struct IWICImagingFactory *v21; // rcx
  struct IWICBitmapSource *v23; // rcx
  struct IWICMetadataQueryReader *v24; // [rsp+30h] [rbp-30h] BYREF
  __int64 v25; // [rsp+38h] [rbp-28h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]
  struct IWICImagingFactory *ppv; // [rsp+90h] [rbp+30h] BYREF
  struct IWICBitmapSource *v29; // [rsp+A8h] [rbp+48h] BYREF

  v9 = a1;
  *a4 = 0LL;
  ppv = a1;
  if ( a1 )
  {
    ((void (__fastcall *)(struct IWICImagingFactory *))a1->lpVtbl->AddRef)(a1);
    v9 = ppv;
  }
  if ( !v9 )
  {
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
    Instance = CoCreateInstance(
                 &CLSID_WICImagingFactory2,
                 0LL,
                 1u,
                 &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
                 (LPVOID *)&ppv);
    if ( Instance < 0 )
      goto LABEL_19;
    v9 = ppv;
  }
  a5 = 0LL;
  CreateDecoderFromStream = v9->lpVtbl->CreateDecoderFromStream;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  Instance = ((__int64 (__fastcall *)(struct IWICImagingFactory *, __int64, GUID *, _QWORD, struct IWICBitmapDecoder **))CreateDecoderFromStream)(
               v9,
               a2,
               &GUID_VendorMicrosoftBuiltIn,
               0LL,
               &a5);
  if ( Instance >= 0 )
  {
    v29 = 0LL;
    v12 = a5;
    GetFrame = a5->lpVtbl->GetFrame;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
    Instance = ((__int64 (__fastcall *)(struct IWICBitmapDecoder *, _QWORD, struct IWICBitmapSource **))GetFrame)(
                 v12,
                 0LL,
                 &v29);
    if ( Instance < 0 )
      goto LABEL_15;
    if ( !a3 )
    {
      Instance = ((__int64 (__fastcall *)(struct IWICBitmapSource *, GUID *, struct IWICBitmapSource **))v29->lpVtbl->QueryInterface)(
                   v29,
                   &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
                   a4);
LABEL_15:
      v19 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        ((void (__fastcall *)(struct IWICBitmapSource *))v19->lpVtbl->Release)(v19);
      }
      goto LABEL_17;
    }
    v14 = v29;
    v15 = ppv;
    *a4 = 0LL;
    Instance = 0;
    if ( !WICIsOrientationSupported(a5)
      || (v24 = 0LL,
          ((int (__fastcall *)(struct IWICBitmapSource *, struct IWICMetadataQueryReader **))v14->lpVtbl[1].QueryInterface)(
            v14,
            &v24) < 0) )
    {
      *a4 = v14;
      AddRef = (void (*)(void))v14->lpVtbl->AddRef;
      goto LABEL_14;
    }
    if ( a3 != 2 )
    {
      Instance = WICCreateOrientedBitmapSource(v15, v14, v24, a4);
      goto LABEL_13;
    }
    *a4 = 0LL;
    v16 = 0;
    *(_OWORD *)pvar = 0LL;
    v27 = 0LL;
    v17 = ((__int64 (__fastcall *)(struct IWICMetadataQueryReader *, const wchar_t *, PROPVARIANT *))v24->lpVtbl->GetMetadataByName)(
            v24,
            L"System.Photo.Orientation",
            pvar);
    Instance = v17;
    if ( v17 == -2003292352 || LOWORD(pvar[0]) != 18 )
    {
      Instance = 0;
    }
    else if ( v17 >= 0 && LOWORD(pvar[1]) != 1 )
    {
      switch ( LOWORD(pvar[1]) )
      {
        case 2u:
          v16 = 8;
          break;
        case 3u:
          v16 = 2;
          break;
        case 4u:
          v16 = 16;
          break;
        case 5u:
          v16 = 17;
          break;
        case 6u:
          v16 = 1;
          break;
        case 7u:
          v16 = 19;
          break;
        case 8u:
          v16 = 3;
          break;
      }
    }
    PropVariantClear(pvar);
    if ( Instance < 0 )
      goto LABEL_13;
    if ( !v16 )
    {
      *a4 = v14;
      ((void (__fastcall *)(struct IWICBitmapSource *))v14->lpVtbl->AddRef)(v14);
LABEL_13:
      AddRef = (void (*)(void))v24->lpVtbl->Release;
LABEL_14:
      AddRef();
      goto LABEL_15;
    }
    a6 = 0LL;
    Instance = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource **))v15->lpVtbl->CreateBitmapFlipRotator)(
                 v15,
                 &a6);
    if ( Instance < 0 )
      goto LABEL_13;
    if ( (v16 & 0x11) != 0 || v16 == 2 )
    {
      v25 = 0LL;
      Instance = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource *, __int64, __int64 *))v15->lpVtbl->CreateBitmapFromSource)(
                   v15,
                   v14,
                   2LL,
                   &v25);
      if ( Instance < 0 )
      {
LABEL_54:
        ((void (__fastcall *)(struct IWICBitmapSource *))a6->lpVtbl->Release)(a6);
        goto LABEL_13;
      }
      Instance = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, _QWORD))a6->lpVtbl[1].QueryInterface)(
                   a6,
                   v25,
                   v16);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    else
    {
      Instance = ((__int64 (__fastcall *)(struct IWICBitmapSource *, struct IWICBitmapSource *, _QWORD))a6->lpVtbl[1].QueryInterface)(
                   a6,
                   v14,
                   v16);
    }
    if ( Instance >= 0 )
    {
      v23 = a6;
      *a4 = a6;
      ((void (__fastcall *)(struct IWICBitmapSource *))v23->lpVtbl->AddRef)(v23);
    }
    goto LABEL_54;
  }
LABEL_17:
  v20 = a5;
  if ( a5 )
  {
    a5 = 0LL;
    ((void (__fastcall *)(struct IWICBitmapDecoder *))v20->lpVtbl->Release)(v20);
  }
LABEL_19:
  v21 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    ((void (__fastcall *)(struct IWICImagingFactory *))v21->lpVtbl->Release)(v21);
  }
  return (unsigned int)Instance;
}
