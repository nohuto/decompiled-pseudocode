/*
 * XREFs of ?Reset@?$DynArray@PEAVCWindowData@@$0A@@@QEAAXH@Z @ 0x18004AB50
 * Callers:
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x1800561D8 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180081770 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

__int64 __fastcall DynArray<CWindowData *,0>::Reset(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 24) = 0;
  v2 = *(void **)a1;
  if ( v2 != *(void **)(a1 + 8) )
  {
    DefaultHeap::Free(v2);
    *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
    result = *(unsigned int *)(a1 + 16);
    *(_DWORD *)(a1 + 20) = result;
  }
  return result;
}
