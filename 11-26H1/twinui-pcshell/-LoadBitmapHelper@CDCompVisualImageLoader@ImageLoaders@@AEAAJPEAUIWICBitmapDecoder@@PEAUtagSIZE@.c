/*
 * XREFs of ?LoadBitmapHelper@CDCompVisualImageLoader@ImageLoaders@@AEAAJPEAUIWICBitmapDecoder@@PEAUtagSIZE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18067B310
 * Callers:
 *     ?LoadBitmapByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18067B224 (-LoadBitmapByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUID2D1Bitmap.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ImageLoaders::CDCompVisualImageLoader::LoadBitmapHelper(
        ImageLoaders::CDCompVisualImageLoader *this,
        struct IWICBitmapDecoder *a2,
        struct tagSIZE *a3,
        struct ID2D1Bitmap1 **a4)
{
  struct IWICBitmapDecoderVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetFrame)(IWICBitmapDecoder *, UINT, IWICBitmapFrameDecode **); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  struct ID2D1Bitmap1 *v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v23; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+48h] BYREF

  *a3 = 0LL;
  *a4 = 0LL;
  lpVtbl = a2->lpVtbl;
  v21[0] = 0LL;
  GetFrame = lpVtbl->GetFrame;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v21);
  v10 = ((__int64 (__fastcall *)(struct IWICBitmapDecoder *, _QWORD, __int64 *))GetFrame)(a2, 0LL, v21);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = *(_QWORD *)this;
    v25 = 0LL;
    v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 80LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v25);
    v14 = v13(v12, &v25);
    v11 = v14;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v25 + 64LL))(
              v25,
              v21[0],
              &GUID_WICPixelFormat32bppPBGRA,
              0LL,
              0LL,
              0LL,
              1);
      v11 = v14;
      if ( v14 >= 0 )
      {
        v16 = *((_QWORD *)this + 1);
        v20 = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v20);
        v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct ID2D1Bitmap1 **))(*(_QWORD *)v16 + 464LL))(
                v16,
                v25,
                0LL,
                &v20);
        v11 = v17;
        if ( v17 >= 0 )
        {
          v23 = 0;
          v24 = 0;
          v17 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v25 + 24LL))(
                  v25,
                  &v23,
                  &v24);
          v11 = v17;
          if ( v17 >= 0 )
          {
            v21[1] = __PAIR64__(v24, v23);
            *a3 = (struct tagSIZE)__PAIR64__(v24, v23);
            *a4 = v20;
            v20 = 0LL;
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v20);
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v25);
            v11 = 0;
            goto LABEL_15;
          }
          v18 = 110LL;
        }
        else
        {
          v18 = 105LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
          (const char *)(unsigned int)v17);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v20);
        goto LABEL_6;
      }
      v15 = 101LL;
    }
    else
    {
      v15 = 100LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
      (const char *)(unsigned int)v14);
LABEL_6:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v25);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x60,
    (int)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
    (const char *)(unsigned int)v10);
LABEL_15:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v21);
  return v11;
}
