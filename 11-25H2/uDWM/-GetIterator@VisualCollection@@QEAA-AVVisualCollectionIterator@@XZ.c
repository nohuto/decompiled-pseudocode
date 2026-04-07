/*
 * XREFs of ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ @ 0x180016330
 * Callers:
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180015B04 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180015BB8 (-InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateLayout@CContainerVisual@@UEAAJ_N@Z @ 0x180015EE0 (-UpdateLayout@CContainerVisual@@UEAAJ_N@Z.c)
 *     ?DoHitTest@CContainerVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180016040 (-DoHitTest@CContainerVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x1800161B0 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z @ 0x180028CA4 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800A0700 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VisualCollection::GetIterator(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 40);
  result = a2;
  *(_QWORD *)a2 = a1;
  *(_DWORD *)(a2 + 12) = -1;
  *(_WORD *)(a2 + 16) = 0;
  return result;
}
