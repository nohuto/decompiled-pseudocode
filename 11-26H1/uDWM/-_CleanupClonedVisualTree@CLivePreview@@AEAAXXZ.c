/*
 * XREFs of ?_CleanupClonedVisualTree@CLivePreview@@AEAAXXZ @ 0x1800B973C
 * Callers:
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800B9460 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180008110 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x18001B49C (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 */

void __fastcall CLivePreview::_CleanupClonedVisualTree(CContainerVisual **this)
{
  CContainerVisual::RemoveAllChildren(this[43]);
  CContainerVisual::RemoveAllChildren(this[44]);
  *((_DWORD *)this + 80) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)(this + 37), 0x10u);
  CContainerVisual::RemoveAllChildren(this[45]);
}
