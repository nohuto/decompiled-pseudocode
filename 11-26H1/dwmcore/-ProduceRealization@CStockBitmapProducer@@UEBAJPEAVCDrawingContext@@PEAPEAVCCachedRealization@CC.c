/*
 * XREFs of ?ProduceRealization@CStockBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1802597C0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18006AAF0 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x18009C208 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F4650 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?Clear@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1801D76FC (-Clear@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     gsl::final_action__CStockBitmapProducer::ProduceRealization_::_10_::_lambda_1___::_final_action__CStockBitmapProducer::ProduceRealization_::_10_::_lambda_1___ @ 0x180259684 (gsl--final_action__CStockBitmapProducer--ProduceRealization_--_10_--_lambda_1___--_final_action_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStockBitmapProducer::ProduceRealization(
        CStockBitmapProducer *this,
        struct CDrawingContext *a2,
        struct CCachedImageProducer::CCachedRealization **a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  struct RenderTargetInfo *v8; // rbx
  struct D2D_SIZE_U v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  struct IRenderTargetBitmap *v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  int v15; // edi
  int v16; // eax
  struct CCachedImageProducer::CCachedRealization *v17; // rax
  struct IRenderTargetBitmap *v19; // [rsp+40h] [rbp-40h] BYREF
  struct CDrawingContext *v20; // [rsp+48h] [rbp-38h] BYREF
  char v21; // [rsp+50h] [rbp-30h]
  const char *v22; // [rsp+58h] [rbp-28h] BYREF
  int v23; // [rsp+60h] [rbp-20h]
  _BYTE v24[4]; // [rsp+68h] [rbp-18h] BYREF
  int v25; // [rsp+6Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*((_QWORD *)a2 + 3) + 8LL) + 24LL))(
    *((_QWORD *)a2 + 3) + 8LL,
    v24);
  v25 = 1;
  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 2) + 16LL))((char *)a2 + 16);
  v7 = *((_QWORD *)a2 + 4);
  v8 = (struct RenderTargetInfo *)v6;
  v19 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v19);
  v9 = (struct D2D_SIZE_U)*((_QWORD *)this + 3);
  v22 = "DWM stock bitmap";
  v20 = (struct CDrawingContext *)v9;
  v23 = 16;
  v10 = CD3DDevice::CreateRenderTargetBitmap(
          v7,
          (const struct CResourceTag *)&v22,
          (const struct D2D_SIZE_U *)&v20,
          (struct PixelFormatInfo *)v24,
          v8,
          0,
          &v19);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_11;
  }
  v12 = v19;
  v13 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v19 + 144LL))(v19);
  v14 = CDrawingContext::PushRenderTarget(
          a2,
          (struct IDeviceTarget *)((v13 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64)));
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
      (const char *)(unsigned int)v14);
LABEL_5:
    v11 = v15;
    goto LABEL_11;
  }
  v20 = a2;
  v21 = 1;
  v16 = CDrawingContext::Clear(a2, (const struct _D3DCOLORVALUE *)((char *)this + 72));
  v15 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
      (const char *)(unsigned int)v16);
    gsl::final_action__CStockBitmapProducer::ProduceRealization_::_10_::_lambda_1___::_final_action__CStockBitmapProducer::ProduceRealization_::_10_::_lambda_1___((__int64)&v20);
    goto LABEL_5;
  }
  gsl::final_action__CStockBitmapProducer::ProduceRealization_::_10_::_lambda_1___::_final_action__CStockBitmapProducer::ProduceRealization_::_10_::_lambda_1___((__int64)&v20);
  v17 = (struct CCachedImageProducer::CCachedRealization *)operator new(8uLL);
  if ( v17 )
  {
    v19 = 0LL;
    *(_QWORD *)v17 = v12;
  }
  v20 = 0LL;
  *a3 = v17;
  std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>((__int64 **)&v20);
  v11 = 0;
LABEL_11:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  return v11;
}
