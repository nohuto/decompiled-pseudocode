/*
 * XREFs of ?Allocate@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@CAPEAV12@I@Z @ 0x1800AE028
 * Callers:
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800211E0 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x1800ADD80 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1800ADF18 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

_DWORD *__fastcall CSparseAlignedStorage<8,8>::AllocatedStorage::Allocate(int a1)
{
  unsigned int v2; // ebx
  HANDLE ProcessHeap; // rax
  _DWORD *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1 + 15 + 8 * a1 - (((_BYTE)a1 + 15) & 7);
  ProcessHeap = GetProcessHeap();
  result = HeapAlloc(ProcessHeap, 8u, v2);
  if ( !result )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *result = 0;
  result[1] = a1;
  return result;
}
