/*
 * XREFs of s_OnDrawItem @ 0x180660154
 * Callers:
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x18065F754 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 * Callees:
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x180661738 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 */

__int64 __fastcall s_OnDrawItem(HWND a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct ContextMenuRenderingData *ContextMenuDataForItem; // rax

  ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(
                             a1,
                             *(HWND *)(a2 + 56),
                             *(unsigned int *)(a2 + 8),
                             a4);
  return s_OnDrawItemHelper(a1, a2, ContextMenuDataForItem);
}
