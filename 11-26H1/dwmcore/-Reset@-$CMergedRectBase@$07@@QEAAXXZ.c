/*
 * XREFs of ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x180057518
 * Callers:
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180056BA0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005714C (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?Reset@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1801D9128 (-Reset@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180255400 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802560AC (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMergedRectBase<8>::Reset(__int64 a1)
{
  __int64 result; // rax
  bool v2; // zf

  result = 0LL;
  v2 = *(_BYTE *)(a1 + 440) == 0xFF;
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 436) = 0;
  if ( !v2 )
    *(_BYTE *)(a1 + 440) = 0;
  return result;
}
