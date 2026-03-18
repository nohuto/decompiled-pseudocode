/*
 * XREFs of ?EnsureD2DBitmap@?$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJ_N@Z @ 0x1802B7A30
 * Callers:
 *     ?GetD2DBitmap@?$CDeviceTextureT@VICrossAdapterTexture@@@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B7D10 (-GetD2DBitmap@-$CDeviceTextureT@VICrossAdapterTexture@@@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x180017298 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180102AC0 (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x1801D4C5C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceTextureT<ICrossAdapterTexture>::EnsureD2DBitmap(__int64 a1, char a2)
{
  __int64 *v2; // r14
  struct IBitmapResource *StockBlackBitmap; // rdi
  __int64 (__fastcall *v6)(struct IBitmapResource *, struct IDXGISurface **); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  struct IDXGISurface *v10; // rbx
  HRESULT (__stdcall *SetPrivateDataInterface)(IDXGISurface *, const GUID *const, const IUnknown *); // rdi
  __int64 v12; // r9
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbx
  struct D2D1_BITMAP_PROPERTIES1 v23; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IDXGISurface *v25; // [rsp+80h] [rbp+30h] BYREF
  D2D1_PIXEL_FORMAT v26; // [rsp+90h] [rbp+40h]

  v2 = (__int64 *)(a1 + 224);
  if ( !*(_QWORD *)(a1 + 224) )
  {
    if ( (*(_DWORD *)(a1 + 176) & 0x400000) != 0 )
    {
      v25 = 0LL;
      StockBlackBitmap = CComposition::GetStockBlackBitmap((CComposition *)a1);
      v6 = *(__int64 (__fastcall **)(struct IBitmapResource *, struct IDXGISurface **))(*(_QWORD *)StockBlackBitmap
                                                                                      + 64LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v25);
      v7 = v6(StockBlackBitmap, &v25);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 250LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\DeviceTexture.h",
          (const char *)(unsigned int)v7);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
        return v8;
      }
      v10 = v25;
      v23.pixelFormat = *(D2D1_PIXEL_FORMAT *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 80LL) + 944LL);
      *(_WORD *)((char *)&v23.bitmapOptions + 5) = 0;
      *((_BYTE *)&v23.bitmapOptions + 7) = 0;
      v23.dpiX = NAN;
      *(_QWORD *)&v23.dpiY = 0LL;
      *((_BYTE *)&v23.bitmapOptions + 4) = 0;
      SetPrivateDataInterface = v25->lpVtbl[1].SetPrivateDataInterface;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v2);
      LOBYTE(v12) = 1;
      v7 = ((__int64 (__fastcall *)(struct IDXGISurface *, struct D2D1_BITMAP_PROPERTIES1 *, __int64 *, __int64))SetPrivateDataInterface)(
             v10,
             &v23,
             v2,
             v12);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 262LL;
        goto LABEL_12;
      }
      wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
        (__int64 *)(a1 + 232),
        v2);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
    }
    else
    {
      v13 = *(__int64 **)(a1 + 208);
      v14 = *(unsigned int *)(a1 + 188);
      v15 = *v13;
      v25 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct IDXGISurface **))(v15 + 96))(v13, v14, &v25);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 227LL;
        goto LABEL_12;
      }
      v26.format = *(_DWORD *)(a1 + 160);
      v26.alphaMode = *(_DWORD *)(a1 + 192);
      v23.pixelFormat = v26;
      *((_DWORD *)&v23.bitmapOptions + 1) = 0;
      v23.colorContext = 0LL;
      v16 = *(_QWORD *)(a1 + 40);
      v23.dpiX = 96.0;
      *(_QWORD *)&v23.dpiY = 1119879168LL;
      v17 = *(_QWORD *)(v16 + 80);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v2);
      v7 = CD2DContext::CreateD2DBitmapFromDxgiSurface((CD2DContext *)(v17 + 16), v25, &v23, (struct ID2D1Bitmap1 **)v2);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 240LL;
        goto LABEL_12;
      }
      if ( *(_DWORD *)(a1 + 192) == 3 )
        wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
          (__int64 *)(a1 + 232),
          v2);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
    }
  }
  if ( a2 && !*(_QWORD *)(a1 + 232) )
  {
    v19 = *(__int64 **)(a1 + 208);
    v20 = *(unsigned int *)(a1 + 188);
    v21 = *v19;
    v25 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct IDXGISurface **))(v21 + 96))(v19, v20, &v25);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 273LL;
      goto LABEL_12;
    }
    v26.format = *(_DWORD *)(a1 + 160);
    v23.dpiX = 96.0;
    *(_QWORD *)&v23.dpiY = 1119879168LL;
    v26.alphaMode = D2D1_ALPHA_MODE_IGNORE;
    v23.pixelFormat = v26;
    *((_DWORD *)&v23.bitmapOptions + 1) = 0;
    v23.colorContext = 0LL;
    v22 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 80LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(a1 + 232));
    v7 = CD2DContext::CreateD2DBitmapFromDxgiSurface(
           (CD2DContext *)(v22 + 16),
           v25,
           &v23,
           (struct ID2D1Bitmap1 **)(a1 + 232));
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 284LL;
      goto LABEL_12;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
  }
  return 0LL;
}
