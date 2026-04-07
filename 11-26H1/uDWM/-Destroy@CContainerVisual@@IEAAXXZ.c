/*
 * XREFs of ?Destroy@CContainerVisual@@IEAAXXZ @ 0x18008E020
 * Callers:
 *     ??1CContainerVisual@@MEAA@XZ @ 0x18001BAC0 (--1CContainerVisual@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CContainerVisual::Destroy(CContainerVisual *this)
{
  CContainerVisual::RemoveAllChildren(this);
}
