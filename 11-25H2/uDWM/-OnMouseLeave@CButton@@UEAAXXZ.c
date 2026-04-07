/*
 * XREFs of ?OnMouseLeave@CButton@@UEAAXXZ @ 0x18008A410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CButton::OnMouseLeave(CButton *this)
{
  *((_BYTE *)this + 240) &= 0xF1u;
  CVisual::SetDirtyFlags(this, 0x8000);
}
