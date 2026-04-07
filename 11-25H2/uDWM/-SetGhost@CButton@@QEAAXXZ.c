/*
 * XREFs of ?SetGhost@CButton@@QEAAXXZ @ 0x1800A8B94
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800126A8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CButton::SetGhost(CButton *this)
{
  *((_BYTE *)this + 240) |= 0x10u;
  CVisual::SetDirtyFlags(this, 0x8000);
}
