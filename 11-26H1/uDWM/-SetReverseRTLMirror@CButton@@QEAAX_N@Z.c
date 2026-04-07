/*
 * XREFs of ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x18009BDC0
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800208B0 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CButton::SetReverseRTLMirror(CVisual *this, __int64 a2, __int64 a3)
{
  CVisual::SetRTLMirror(this, a2, a3);
}
