/*
 * XREFs of ?Destroy@CContainerVisual@@IEAAXXZ @ 0x1800140E4
 * Callers:
 *     ??1CContainerVisual@@MEAA@XZ @ 0x1800140AC (--1CContainerVisual@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180014114 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 */

void __fastcall CContainerVisual::Destroy(CContainerVisual *this)
{
  CContainerVisual::RemoveAllChildren(this);
  (*(void (__fastcall **)(CContainerVisual *, _QWORD))(*(_QWORD *)this + 192LL))(this, 0LL);
}
