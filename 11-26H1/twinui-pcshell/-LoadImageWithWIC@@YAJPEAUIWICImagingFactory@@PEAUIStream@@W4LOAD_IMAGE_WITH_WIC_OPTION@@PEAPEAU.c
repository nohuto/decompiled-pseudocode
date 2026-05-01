/*
 * XREFs of ?LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAUIWICBitmapSource@@PEAPEAUIWICBitmapFrameDecode@@PEAU_GUID@@@Z @ 0x18012988C
 * Callers:
 *     ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x1801290B4 (-CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x180266CF0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x18053A1A0 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x180582510 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?WICIsOrientationSupported@@YA_NPEAUIWICBitmapDecoder@@@Z @ 0x180129CBC (-WICIsOrientationSupported@@YA_NPEAUIWICBitmapDecoder@@@Z.c)
 *     ?WICCreateOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadataQueryReader@@PEAPEAU2@@Z @ 0x1802B78B8 (-WICCreateOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  struct IWICMetadataQueryReader *v16; // rcx
  unsigned int v17; // ebx
  int v18; // eax
  void (*AddRef)(void); // rax
  struct IWICBitmapSource *v20; // rcx
  struct IWICBitmapDecoder *v21; // rcx
  struct IWICImagingFactory *v22; // rcx
  struct IWICBitmapSource *v24; // rcx
  struct IWICMetadataQueryReader *v25; // [rsp+30h] [rbp-30h] BYREF
  __int64 v26; // [rsp+38h] [rbp-28h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]
  struct IWICImagingFactory *ppv; // [rsp+90h] [rbp+30h] BYREF
  struct IWICBitmapSource *v30; // [rsp+A8h] [rbp+48h] BYREF

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
    v30 = 0LL;
    v12 = a5;
    GetFrame = a5->lpVtbl->GetFrame;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
    Instance = ((__int64 (__fastcall *)(struct IWICBitmapDecoder *, _QWORD, struct IWICBitmapSource **))GetFrame)(
                 v12,
                 0LL,
                 &v30);
    if ( Instance < 0 )
      goto LABEL_15;
    if ( !a3 )
    {
      Instance = ((__int64 (__fastcall *)(struct IWICBitmapSource *, GUID *, struct IWICBitmapSource **))v30->lpVtbl->QueryInterface)(
                   v30,
                   &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
                   a4);
LABEL_15:
      v20 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        ((void (__fastcall *)(struct IWICBitmapSource *))v20->lpVtbl->Release)(v20);
      }
      goto LABEL_17;
    }
    v14 = v30;
    v15 = ppv;
    *a4 = 0LL;
    Instance = 0;
    if ( !WICIsOrientationSupported(a5)
      || (v25 = 0LL,
          ((int (__fastcall *)(struct IWICBitmapSource *, struct IWICMetadataQueryReader **))v14->lpVtbl[1].QueryInterface)(
            v14,
            &v25) < 0) )
    {
      *a4 = v14;
      AddRef = (void (*)(void))v14->lpVtbl->AddRef;
      goto LABEL_14;
    }
    if ( a3 != 2 )
    {
      Instance = WICCreateOrientedBitmapSource(v15, v14, v25, a4);
      goto LABEL_13;
    }
    v16 = v25;
    *a4 = 0LL;
    v17 = 0;
    *(_OWORD *)pvar = 0LL;
    v28 = 0LL;
    v18 = ((__int64 (__fastcall *)(struct IWICMetadataQueryReader *, const wchar_t *, PROPVARIANT *))v16->lpVtbl->GetMetadataByName)(
            v16,
            L"System.Photo.Orientation",
            pvar);
    Instance = v18;
    if ( v18 == -2003292352 || LOWORD(pvar[0]) != 18 )
    {
      Instance = 0;
    }
    else if ( v18 >= 0 && LOWORD(pvar[1]) != 1 )
    {
      switch ( LOWORD(pvar[1]) )
      {
        case 2u:
          v17 = 8;
          break;
        case 3u:
          v17 = 2;
          break;
        case 4u:
          v17 = 16;
          break;
        case 5u:
          v17 = 17;
          break;
        case 6u:
          v17 = 1;
          break;
        case 7u:
          v17 = 19;
          break;
        case 8u:
          v17 = 3;
          break;
      }
    }
    PropVariantClear(pvar);
    if ( Instance < 0 )
      goto LABEL_13;
    if ( !v17 )
    {
      *a4 = v14;
      ((void (__fastcall *)(struct IWICBitmapSource *))v14->lpVtbl->AddRef)(v14);
LABEL_13:
      AddRef = (void (*)(void))v25->lpVtbl->Release;
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
    if ( (v17 & 0x11) != 0 || v17 == 2 )
    {
      v26 = 0LL;
      Instance = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource *, __int64, __int64 *))v15->lpVtbl->CreateBitmapFromSource)(
                   v15,
                   v14,
                   2LL,
                   &v26);
      if ( Instance < 0 )
      {
LABEL_54:
        ((void (__fastcall *)(struct IWICBitmapSource *))a6->lpVtbl->Release)(a6);
        goto LABEL_13;
      }
      Instance = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, _QWORD))a6->lpVtbl[1].QueryInterface)(
                   a6,
                   v26,
                   v17);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    else
    {
      Instance = ((__int64 (__fastcall *)(struct IWICBitmapSource *, struct IWICBitmapSource *, _QWORD))a6->lpVtbl[1].QueryInterface)(
                   a6,
                   v14,
                   v17);
    }
    if ( Instance >= 0 )
    {
      v24 = a6;
      *a4 = a6;
      ((void (__fastcall *)(struct IWICBitmapSource *))v24->lpVtbl->AddRef)(v24);
    }
    goto LABEL_54;
  }
LABEL_17:
  v21 = a5;
  if ( a5 )
  {
    a5 = 0LL;
    ((void (__fastcall *)(struct IWICBitmapDecoder *))v21->lpVtbl->Release)(v21);
  }
LABEL_19:
  v22 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    ((void (__fastcall *)(struct IWICImagingFactory *))v22->lpVtbl->Release)(v22);
  }
  return (unsigned int)Instance;
}
