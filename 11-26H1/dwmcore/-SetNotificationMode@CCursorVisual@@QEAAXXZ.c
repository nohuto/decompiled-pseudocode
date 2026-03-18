/*
 * XREFs of ?SetNotificationMode@CCursorVisual@@QEAAXXZ @ 0x18018E35C
 * Callers:
 *     ?EndUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x18018E310 (-EndUpdateCursors@CGlobalComposition@@UEAAXXZ.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CC0E0 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x1800D34F8 (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     ?NeedsCursorPositionUpdates@CDesktopTree@@QEBA_NPEBVCCursorVisual@@@Z @ 0x1801D7F70 (-NeedsCursorPositionUpdates@CDesktopTree@@QEBA_NPEBVCCursorVisual@@@Z.c)
 */

void __fastcall CCursorVisual::SetNotificationMode(CCursorVisual *this)
{
  struct _LIST_ENTRY *TreeDataListHead; // rax
  CDesktopTree *DesktopTree; // rax
  bool v4; // di
  __int64 v5; // rbx

  if ( *((_QWORD *)this + 87) )
  {
    v4 = *((_QWORD *)this + 88) == *(_QWORD *)(*((_QWORD *)this + 3) + 880LL)
      || (TreeDataListHead = CVisual::GetTreeDataListHead(this)) != 0LL && TreeDataListHead->Flink != TreeDataListHead
      || (DesktopTree = CVisual::GetDesktopTree(this)) != 0LL
      && CDesktopTree::NeedsCursorPositionUpdates(DesktopTree, this)
      || *(_QWORD *)(*((_QWORD *)this + 3) + 6152LL) != *(_QWORD *)(*((_QWORD *)this + 3) + 6160LL);
    v5 = *((_QWORD *)this + 87);
    EnterCriticalSection(&g_CursorManager);
    *(_BYTE *)(v5 + 82) = v4;
    LeaveCriticalSection(&g_CursorManager);
  }
}
