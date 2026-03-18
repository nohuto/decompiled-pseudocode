/*
 * XREFs of ?PostRestoreState@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801024E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x180102580 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CTreeEffectLayer::PostRestoreState(CTreeEffectLayer *this, struct CDrawingContext *a2)
{
  int v2; // r9d
  int v3; // eax
  unsigned int v4; // ebx

  v2 = 0;
  *((_BYTE *)a2 + 8067) = *((_BYTE *)this + 120);
  switch ( *((_DWORD *)this + 31) )
  {
    case 1:
      v2 = 1;
      break;
    case 2:
      v2 = 2;
      break;
    case 3:
      v2 = 6;
      break;
    case 4:
      v2 = 5;
      break;
    case 5:
      v2 = 7;
      break;
  }
  *((_DWORD *)a2 + 58) = v2;
  v3 = CDrawingContext::FlushD2D(a2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0xE0u, 0LL);
  return v4;
}
