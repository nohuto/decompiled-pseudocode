/*
 * XREFs of ?RemoveAllChildren@CContainerVisualProxy@@QEAAJXZ @ 0x18001BD60
 * Callers:
 *     ?RemoveAll@VisualCollection@@QEAAXXZ @ 0x18001BB00 (-RemoveAll@VisualCollection@@QEAAXXZ.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x1800BF8D8 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContainerVisualProxy::RemoveAllChildren(CContainerVisualProxy *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 144LL))(*((_QWORD *)this + 4));
}
