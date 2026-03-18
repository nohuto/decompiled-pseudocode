/*
 * XREFs of ?UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ @ 0x1801D3930
 * Callers:
 *     ?ProcessSetSDRBoost@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETSDRBOOST@@@Z @ 0x18021E5F0 (-ProcessSetSDRBoost@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTA.c)
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18026A25C (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?OnDefaultSDRBoostChanged@CCaptureController@@IEAAXXZ @ 0x18026A408 (-OnDefaultSDRBoostChanged@CCaptureController@@IEAAXXZ.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18026A45C (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180128A30 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetEffectiveSDRBoost@CCaptureRenderTarget@@QEBAMXZ @ 0x18021F4E8 (-GetEffectiveSDRBoost@CCaptureRenderTarget@@QEBAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCaptureRenderTarget::UpdateRenderTargetBitmapSDRBoosts(enum DXGI_COLOR_SPACE_TYPE *this)
{
  __int64 v2; // rsi
  __int64 i; // rbx

  if ( IsDXGIColorSpaceHDR(this[34]) )
    CCaptureRenderTarget::GetEffectiveSDRBoost((CCaptureRenderTarget *)this);
  v2 = *((_QWORD *)this + 330);
  for ( i = *((_QWORD *)this + 329); i != v2; i += 24LL )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(i + 8) + 120LL))(*(_QWORD *)(i + 8));
    if ( *((_BYTE *)this + 2591) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(i + 16) + 120LL))(*(_QWORD *)(i + 16));
  }
}
