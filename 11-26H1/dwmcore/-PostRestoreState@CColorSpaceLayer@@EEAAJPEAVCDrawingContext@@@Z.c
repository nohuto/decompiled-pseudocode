/*
 * XREFs of ?PostRestoreState@CColorSpaceLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18024FE80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x180102580 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CColorSpaceLayer::PostRestoreState(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  *((_BYTE *)a2 + 8067) = *((_BYTE *)this + 120);
  v2 = CDrawingContext::FlushD2D(a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x3Cu, 0LL);
  return v3;
}
