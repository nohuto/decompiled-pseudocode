/*
 * XREFs of ?EnsureBitmap@CD2DBitmap@@IEAAJXZ @ 0x1801027F8
 * Callers:
 *     ?GetD2DBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801026C0 (-GetD2DBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x180102760 (-GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ @ 0x1802A977C (-EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x180017298 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180102AC0 (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x1801D4C5C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmap::EnsureBitmap(CD2DBitmap *this)
{
  __int64 *v1; // r14
  unsigned int v3; // ebx
  CComposition *v5; // rcx
  bool v6; // zf
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, struct IDXGISurface **); // rdi
  int v10; // eax
  CD2DContext *v11; // rbx
  int D2DBitmapFromDxgiSurface; // eax
  struct IBitmapResource *StockBlackBitmap; // rdi
  __int64 (__fastcall *v14)(struct IBitmapResource *, struct IDXGISurface **); // rbx
  int v15; // eax
  struct IDXGISurface *v16; // rbx
  HRESULT (__stdcall *SetPrivateDataInterface)(IDXGISurface *, const GUID *const, const IUnknown *); // rdi
  int v18; // eax
  _BYTE v19[8]; // [rsp+30h] [rbp-20h] BYREF
  int v20; // [rsp+38h] [rbp-18h]
  __int64 v21; // [rsp+3Ch] [rbp-14h]
  char v22; // [rsp+44h] [rbp-Ch]
  __int16 v23; // [rsp+45h] [rbp-Bh]
  char v24; // [rsp+47h] [rbp-9h]
  struct IDXGISurface *v25; // [rsp+80h] [rbp+30h] BYREF
  __int64 v26; // [rsp+88h] [rbp+38h] BYREF

  v1 = (__int64 *)((char *)this + 128);
  if ( *((_QWORD *)this + 16) )
  {
    return 0;
  }
  else
  {
    v5 = (CComposition *)*((_QWORD *)this + 13);
    if ( v5 )
    {
      v6 = (*((_DWORD *)this + 44) & 0x400000) == 0;
      v25 = 0LL;
      if ( v6 )
      {
        v26 = 0LL;
        v7 = (**(__int64 (__fastcall ***)(CComposition *, GUID *, __int64 *))v5)(
               v5,
               &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
               &v26);
        v3 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x1BEu, 0LL);
        }
        else
        {
          v8 = v26;
          v9 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IDXGISurface **))(*(_QWORD *)v26 + 96LL);
          if ( v25 )
            ((void (__fastcall *)(struct IDXGISurface *))v25->lpVtbl->Release)(v25);
          v10 = v9(v8, *((unsigned int *)this + 58), &v25);
          v3 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1C1u, 0LL);
          }
          else
          {
            v11 = (CD2DContext *)((*(__int64 (__fastcall **)(CD2DBitmap *))(*(_QWORD *)this + 40LL))(this) + 16);
            wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
            D2DBitmapFromDxgiSurface = CD2DContext::CreateD2DBitmapFromDxgiSurface(
                                         v11,
                                         v25,
                                         (const struct D2D1_BITMAP_PROPERTIES1 *)this + 6,
                                         (struct ID2D1Bitmap1 **)v1);
            v3 = D2DBitmapFromDxgiSurface;
            if ( D2DBitmapFromDxgiSurface < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DBitmapFromDxgiSurface, 0x1C5u, 0LL);
            }
            else if ( *((_DWORD *)this + 49) == 3 )
            {
              wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
                (__int64 *)this + 17,
                v1);
            }
          }
        }
        if ( v25 )
          ((void (__fastcall *)(struct IDXGISurface *))v25->lpVtbl->Release)(v25);
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      else
      {
        StockBlackBitmap = CComposition::GetStockBlackBitmap(v5);
        v14 = *(__int64 (__fastcall **)(struct IBitmapResource *, struct IDXGISurface **))(*(_QWORD *)StockBlackBitmap
                                                                                         + 64LL);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v25);
        v15 = v14(StockBlackBitmap, &v25);
        v3 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x1D3u, 0LL);
        }
        else
        {
          (*(void (__fastcall **)(CD2DBitmap *, _BYTE *))(*(_QWORD *)this + 64LL))(this, v19);
          v16 = v25;
          v20 = -1;
          v21 = 0LL;
          v22 = 0;
          v23 = 0;
          v24 = 0;
          SetPrivateDataInterface = v25->lpVtbl[1].SetPrivateDataInterface;
          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
          v18 = ((__int64 (__fastcall *)(struct IDXGISurface *, _BYTE *, __int64 *, _QWORD))SetPrivateDataInterface)(
                  v16,
                  v19,
                  v1,
                  0LL);
          v3 = v18;
          if ( v18 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x1DAu, 0LL);
          else
            wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
              (__int64 *)this + 17,
              v1);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
      }
    }
    else
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x1E0u, 0LL);
    }
  }
  return v3;
}
