/*
 * XREFs of ?LoadBitmapByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18065522C
 * Callers:
 *     ?LoadImageByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUIDCompositionVisual@@@Z @ 0x1806554F4 (-LoadImageByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUIDCompositio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LoadBitmapHelper@CDCompVisualImageLoader@ImageLoaders@@AEAAJPEAUIWICBitmapDecoder@@PEAUtagSIZE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18065530C (-LoadBitmapHelper@CDCompVisualImageLoader@ImageLoaders@@AEAAJPEAUIWICBitmapDecoder@@PEAUtagSIZE@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ImageLoaders::CDCompVisualImageLoader::LoadBitmapByPath(
        ImageLoaders::CDCompVisualImageLoader *this,
        const unsigned __int16 *a2,
        struct tagSIZE *a3,
        struct ID2D1Bitmap1 **a4)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v9)(__int64, const unsigned __int16 *, GUID *, __int64, _DWORD, struct IWICBitmapDecoder **); // rbx
  int BitmapHelper; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IWICBitmapDecoder *v15; // [rsp+60h] [rbp+8h] BYREF

  *a4 = 0LL;
  *a3 = 0LL;
  v6 = *(_QWORD *)this;
  v15 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, const unsigned __int16 *, GUID *, __int64, _DWORD, struct IWICBitmapDecoder **))(*(_QWORD *)v6 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  BitmapHelper = v9(v6, a2, &GUID_VendorMicrosoftBuiltIn, 0x80000000LL, 0, &v15);
  v11 = BitmapHelper;
  if ( BitmapHelper >= 0 )
  {
    BitmapHelper = ImageLoaders::CDCompVisualImageLoader::LoadBitmapHelper(this, v15, a3, a4);
    v11 = BitmapHelper;
    if ( BitmapHelper >= 0 )
    {
      v11 = 0;
      goto LABEL_7;
    }
    v12 = 54LL;
  }
  else
  {
    v12 = 52LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
    (const char *)(unsigned int)BitmapHelper);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  return v11;
}
