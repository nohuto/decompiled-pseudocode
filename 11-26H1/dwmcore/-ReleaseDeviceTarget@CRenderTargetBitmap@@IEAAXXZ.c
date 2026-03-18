/*
 * XREFs of ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x1800F54BC
 * Callers:
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180013714 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x1800F5514 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1800FB1AC (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@IEAAX_N@Z @ 0x18018E8C4 (-InvalidateDecodeBitmap@CBitmapRealization@@IEAAX_N@Z.c)
 *     ?Invalidate@CDecodeBitmap@@QEAAX_N@Z @ 0x1801A834C (-Invalidate@CDecodeBitmap@@QEAAX_N@Z.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801D80C0 (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetBitmap::ReleaseDeviceTarget(CRenderTargetBitmap *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 15);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v2 + 80LL))(
      v2,
      ((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 15);
  }
  CD2DBitmapCache::InitializeCache(this, 0LL);
}
