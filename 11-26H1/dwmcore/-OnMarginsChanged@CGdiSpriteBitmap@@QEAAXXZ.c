/*
 * XREFs of ?OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ @ 0x18004A8F0
 * Callers:
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18004A700 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x1801AF63C (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?SetMargins@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJU_MARGINS@@@Z @ 0x1801B40DC (-SetMargins@-$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJU_MARGINS@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGdiSpriteBitmap::OnMarginsChanged(CGdiSpriteBitmap *this)
{
  __int64 v2; // rcx
  char *v3; // r14
  __int64 *v4; // rbp
  __int64 *i; // rsi
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 56);
  if ( v2 )
  {
    v3 = (char *)this + 88;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 128LL))(v2, (char *)this + 88);
    v4 = (__int64 *)*((_QWORD *)this + 58);
    for ( i = (__int64 *)*((_QWORD *)this + 57); i != v4; ++i )
    {
      v6 = *i;
      v9 = 0LL;
      v8 = 0LL;
      v7 = *(int (__fastcall **)(__int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)(v6 + 72) + 64LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v9);
      if ( v7(v6 + 72, &v9) >= 0 )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v8);
        if ( (**v9)(v9, &GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309, &v8) >= 0 )
          (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 128LL))(v8, v3);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v8);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v9);
    }
  }
}
