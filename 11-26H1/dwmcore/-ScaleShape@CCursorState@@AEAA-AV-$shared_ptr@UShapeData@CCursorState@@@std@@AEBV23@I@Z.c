/*
 * XREFs of ?ScaleShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z @ 0x180291BD4
 * Callers:
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x1802923D8 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x180017298 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1800E1130 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800E646C (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ?GetImagingFactory@CComposition@@QEAAJPEAPEAUIWICImagingFactory@@@Z @ 0x18022AF38 (-GetImagingFactory@CComposition@@QEAAJPEAPEAUIWICImagingFactory@@@Z.c)
 *     ??$make_shared@UShapeData@CCursorState@@$$V@std@@YA?AV?$shared_ptr@UShapeData@CCursorState@@@0@XZ @ 0x18029070C (--$make_shared@UShapeData@CCursorState@@$$V@std@@YA-AV-$shared_ptr@UShapeData@CCursorState@@@0@X.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x18029436C (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CCursorState::ScaleShape(__int64 a1, _QWORD *a2, __int64 *a3, int a4)
{
  __int64 v8; // r8
  CComposition *v9; // rcx
  int v10; // r15d
  struct IWICImagingFactoryVtbl *lpVtbl; // rax
  CSystemMemoryBitmap *v12; // rax
  CSystemMemoryBitmap *v13; // rax
  struct WICRect *v14; // r8
  bool v15; // r9
  __int64 v16; // rbx
  unsigned int v18; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-2Ch]
  struct IBitmapSource *v20; // [rsp+38h] [rbp-28h] BYREF
  struct IWICBitmapSource *v21; // [rsp+40h] [rbp-20h] BYREF
  CSystemMemoryBitmap *v22; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v24; // [rsp+90h] [rbp+30h] BYREF
  struct IWICImagingFactory *v25; // [rsp+A0h] [rbp+40h] BYREF

  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*a3 + 24) + 120LL) + 32LL))(
    *(_QWORD *)(*a3 + 24) + 120LL,
    &v18);
  v8 = *a3;
  v9 = *(CComposition **)(a1 + 64);
  v10 = *(_DWORD *)(*a3 + 12) >> 1;
  v25 = 0LL;
  v18 = (v10 + a4 * v18) / *(_DWORD *)(v8 + 12);
  v19 = (v10 + a4 * v19) / *(_DWORD *)(v8 + 12);
  if ( (int)CComposition::GetImagingFactory(v9, &v25) >= 0 )
  {
    lpVtbl = v25->lpVtbl;
    v24 = 0LL;
    if ( ((int (__fastcall *)(struct IWICImagingFactory *, __int64 *))lpVtbl->CreateBitmapScaler)(v25, &v24) < 0
      || (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int))(*(_QWORD *)v24 + 64LL))(
           v24,
           (*(_QWORD *)(*a3 + 24) + 32LL) & -(__int64)(*(_QWORD *)(*a3 + 24) != 0LL),
           v18,
           v19,
           *(_BYTE *)(a1 + 81) == 0 ? 3 : 0) < 0 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
    }
    else
    {
      v21 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, struct IWICBitmapSource **))v24)(
             v24,
             &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
             &v21) >= 0 )
      {
        v20 = 0LL;
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v20);
        if ( (int)HrCreateBitmapFromWICBitmapSource(v21, &v20) >= 0 )
        {
          v12 = (CSystemMemoryBitmap *)operator new(0x98uLL);
          if ( v12 )
            v13 = CSystemMemoryBitmap::CSystemMemoryBitmap(v12);
          else
            v13 = 0LL;
          wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
            &v22,
            (__int64)v13);
          if ( (int)CSystemMemoryBitmap::HrInit(v22, v20, v14, v15) >= 0 )
          {
            std::make_shared<CCursorState::ShapeData,>(v23);
            v16 = v23[0];
            *(_DWORD *)v23[0] = (unsigned int)(v10 + *(_DWORD *)*a3 * a4) / *(_DWORD *)(*a3 + 12);
            *(_DWORD *)(v16 + 4) = (unsigned int)(v10 + *(_DWORD *)(*a3 + 4) * a4) / *(_DWORD *)(*a3 + 12);
            *(_DWORD *)(v16 + 8) = *(_DWORD *)(*a3 + 8);
            *(_DWORD *)(v16 + 12) = a4;
            *(_BYTE *)(v16 + 16) = 1;
            *(_BYTE *)(v16 + 17) = *(_BYTE *)(*a3 + 17);
            wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
              (__int64 *)(v16 + 24),
              (__int64 *)&v22);
            a2[1] = v23[1];
            *a2 = v16;
          }
          else
          {
            *a2 = 0LL;
            a2[1] = 0LL;
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
        }
        else
        {
          *a2 = 0LL;
          a2[1] = 0LL;
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
      }
      else
      {
        *a2 = 0LL;
        a2[1] = 0LL;
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v24);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
  return a2;
}
