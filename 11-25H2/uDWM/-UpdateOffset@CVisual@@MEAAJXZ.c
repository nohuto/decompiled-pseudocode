/*
 * XREFs of ?UpdateOffset@CVisual@@MEAAJXZ @ 0x180003D90
 * Callers:
 *     ?UpdateOffset@CButton@@MEAAJXZ @ 0x180003D30 (-UpdateOffset@CButton@@MEAAJXZ.c)
 * Callees:
 *     ?SetOffset@CVisualProxy@@QEAAJNNN@Z @ 0x180003DEC (-SetOffset@CVisualProxy@@QEAAJNNN@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisual::UpdateOffset(CVisualProxy **this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CVisualProxy::SetOffset(this[2], (double)*((int *)this + 16), (double)*((int *)this + 17), 0.0);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x228u, 0LL);
  return v2;
}
