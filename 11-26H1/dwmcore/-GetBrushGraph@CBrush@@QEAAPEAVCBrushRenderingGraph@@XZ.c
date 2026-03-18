/*
 * XREFs of ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x1800D7828
 * Callers:
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1800D76A8 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800D77DC (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CBrushRenderingGraph *__fastcall CBrush::GetBrushGraph(CBrush *this, __int64 a2)
{
  if ( *((_BYTE *)this + 96) && !*((_QWORD *)this + 10) )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(CBrush *, __int64))(*(_QWORD *)this + 352LL))(this, a2);
  }
  return (struct CBrushRenderingGraph *)*((_QWORD *)this + 10);
}
