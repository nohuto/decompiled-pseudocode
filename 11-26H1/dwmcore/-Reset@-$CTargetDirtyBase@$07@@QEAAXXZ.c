/*
 * XREFs of ?Reset@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1801D9128
 * Callers:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?ProcessSetDirtyRegionMode@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETDIRTYREGIONMODE@@@Z @ 0x180216AE4 (-ProcessSetDirtyRegionMode@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURER.c)
 * Callees:
 *     ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x180057518 (-Reset@-$CMergedRectBase@$07@@QEAAXXZ.c)
 */

_QWORD *__fastcall CTargetDirtyBase<8>::Reset(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *result; // rax

  CMergedRectBase<8>::Reset(a1 + 16);
  result = *(_QWORD **)(v1 + 464);
  *(_WORD *)(v1 + 1872) = 0;
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_DWORD *)result = 0;
  }
  return result;
}
