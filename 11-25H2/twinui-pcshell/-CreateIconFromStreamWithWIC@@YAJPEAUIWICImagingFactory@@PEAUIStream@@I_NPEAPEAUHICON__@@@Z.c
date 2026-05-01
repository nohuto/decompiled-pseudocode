/*
 * XREFs of ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x180130E64
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$1 @ 0x18026E2C0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x180130C80 (-ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z.c)
 *     ?LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAUIWICBitmapSource@@PEAPEAUIWICBitmapFrameDecode@@PEAU_GUID@@@Z @ 0x180131168 (-LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAU.c)
 *     ?ConvertHBITMAPToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@W4WICBitmapAlphaChannelOption@@PEAPEAUIWICBitmapSource@@@Z @ 0x180131550 (-ConvertHBITMAPToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@W4WICBitmapAlphaChannelOpt.c)
 *     ?ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z @ 0x1801317A0 (-ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@.c)
 *     CoCreateInstance_0 @ 0x1802D3650 (CoCreateInstance_0.c)
 *     _GetProcFromComCtl32 @ 0x1802DF578 (_GetProcFromComCtl32.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateIconFromStreamWithWIC(HICON *a1, struct IStream *a2, unsigned int a3, char a4, HICON *ppv)
{
  HICON *v7; // r15
  HICON *v8; // rcx
  int Instance_0; // esi
  struct IWICImagingFactory *v10; // r14
  HBITMAP v11; // rbx
  enum WICBitmapAlphaChannelOption v12; // r8d
  __int64 (__fastcall *v13)(GUID *, _QWORD, GUID *, struct IWICBitmapSource **); // rax
  char v15; // r9
  struct IWICBitmapSource *v16; // [rsp+40h] [rbp-21h] BYREF
  HGDIOBJ ho; // [rsp+48h] [rbp-19h] BYREF
  struct IWICBitmapSource *v18; // [rsp+50h] [rbp-11h] BYREF
  struct tagSIZE v19; // [rsp+58h] [rbp-9h]
  HBITMAP v20; // [rsp+60h] [rbp-1h] BYREF
  _OWORD pv[4]; // [rsp+68h] [rbp+7h] BYREF
  struct IWICBitmapSource *v22; // [rsp+C0h] [rbp+5Fh] BYREF
  unsigned int v23; // [rsp+D8h] [rbp+77h] BYREF

  LOBYTE(v23) = a4;
  v7 = ppv;
  *ppv = 0LL;
  ppv = a1;
  if ( !a1 || ((*((void (__fastcall **)(HICON *))*a1 + 1))(a1), (v8 = ppv) == 0LL) )
  {
    Instance_0 = CoCreateInstance_0(
                   &CLSID_WICImagingFactory2,
                   0LL,
                   1u,
                   &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
                   (LPVOID *)&ppv);
    if ( Instance_0 < 0 )
      goto LABEL_23;
    v8 = ppv;
  }
  v18 = 0LL;
  Instance_0 = LoadImageWithWIC(v8, a2, 2LL, &v18);
  if ( Instance_0 >= 0 )
  {
    ho = 0LL;
    Instance_0 = ConvertWICBitmapToHBITMAP((struct IWICImagingFactory *)ppv, v18, (HBITMAP *)&ho);
    if ( Instance_0 >= 0 )
    {
      v19.cx = a3;
      v19.cy = a3;
      v10 = (struct IWICImagingFactory *)ppv;
      v11 = 0LL;
      v20 = 0LL;
      v16 = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v16);
      Instance_0 = ConvertHBITMAPToWICBitmap(v10, (HBITMAP)ho, v12, &v16);
      if ( Instance_0 >= 0 )
      {
        v22 = 0LL;
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v22);
        Instance_0 = ScaleImageWithWIC(v10, v16, v19, v15, &v22);
        if ( Instance_0 >= 0 )
        {
          Instance_0 = ConvertWICBitmapToHBITMAP(v10, v22, &v20);
          v11 = v20;
        }
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v22);
      }
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v16);
      if ( Instance_0 >= 0 )
      {
        *v7 = 0LL;
        v22 = 0LL;
        v13 = (__int64 (__fastcall *)(GUID *, _QWORD, GUID *, struct IWICBitmapSource **))qword_180897E10;
        if ( qword_180897E10 == -1 )
        {
          GetProcFromComCtl32(&qword_180897E10, "ImageList_CoCreateInstance");
          v13 = (__int64 (__fastcall *)(GUID *, _QWORD, GUID *, struct IWICBitmapSource **))qword_180897E10;
        }
        if ( v13 )
          Instance_0 = v13(&CLSID_ImageList, 0LL, &GUID_192b9d83_50fc_457b_90a0_2b82a8b5dae1, &v22);
        else
          Instance_0 = -2147467259;
        if ( Instance_0 >= 0 )
        {
          memset(pv, 0, 32);
          if ( GetObjectW(v11, 32, pv) )
          {
            Instance_0 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, _QWORD, _QWORD, __int64, int, int))v22->lpVtbl[5].AddRef)(
                           v22,
                           a3,
                           a3,
                           196640LL,
                           1,
                           1);
            if ( Instance_0 >= 0 )
            {
              v23 = 0;
              Instance_0 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, HBITMAP, _QWORD, unsigned int *))v22->lpVtbl->GetSize)(
                             v22,
                             v11,
                             0LL,
                             &v23);
              if ( Instance_0 >= 0 )
                Instance_0 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, _QWORD, _QWORD, HICON *))v22->lpVtbl[1].Release)(
                               v22,
                               v23,
                               0LL,
                               v7);
            }
          }
          else
          {
            Instance_0 = -2147467259;
          }
          ((void (__fastcall *)(struct IWICBitmapSource *))v22->lpVtbl->Release)(v22);
        }
      }
      if ( v11 )
        DeleteObject(v11);
    }
    if ( ho )
      DeleteObject(ho);
  }
  if ( v18 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v18->lpVtbl->Release)(v18);
LABEL_23:
  if ( ppv )
    (*((void (__fastcall **)(HICON *))*ppv + 2))(ppv);
  return (unsigned int)Instance_0;
}
