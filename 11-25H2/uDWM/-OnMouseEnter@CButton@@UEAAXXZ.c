/*
 * XREFs of ?OnMouseEnter@CButton@@UEAAXXZ @ 0x180087FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CButton::OnMouseEnter(CButton *this)
{
  *((_BYTE *)this + 240) |= 2u;
  CVisual::SetDirtyFlags(this, 0x8000);
}
