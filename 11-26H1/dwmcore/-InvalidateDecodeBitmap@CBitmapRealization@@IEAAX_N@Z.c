/*
 * XREFs of ?InvalidateDecodeBitmap@CBitmapRealization@@IEAAX_N@Z @ 0x18018E8C4
 * Callers:
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1800E4530 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1800E5AB0 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x1802AC620 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     ?AddDirtyRegion@CSwapChainRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802AC9D0 (-AddDirtyRegion@CSwapChainRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?ReleaseTexture@CSwapChainRealization@@IEAAXXZ @ 0x1802AE240 (-ReleaseTexture@CSwapChainRealization@@IEAAXXZ.c)
 *     ?UpdateAttributes@CSwapChainRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802AE560 (-UpdateAttributes@CSwapChainRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x1800F54BC (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 */

void __fastcall CBitmapRealization::InvalidateDecodeBitmap(CBitmapRealization *this, char a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbx

  v2 = *((_QWORD *)this + 36);
  if ( v2 )
  {
    if ( a2 )
      CRenderTargetBitmap::ReleaseDeviceTarget(*((CRenderTargetBitmap **)this + 36));
    *(_BYTE *)(v2 + 136) = 0;
    v4 = *(_QWORD *)(v2 + 144);
    if ( v4 )
    {
      if ( a2 )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(v4 + 16));
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(v4 + 24));
      }
      *(_BYTE *)(v4 + 32) = 0;
    }
  }
}
