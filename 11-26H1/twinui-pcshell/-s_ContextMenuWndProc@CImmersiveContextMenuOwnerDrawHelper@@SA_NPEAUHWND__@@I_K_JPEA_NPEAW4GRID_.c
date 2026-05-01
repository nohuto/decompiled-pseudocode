/*
 * XREFs of ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x180685824
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1804BC260 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     s_HitTestContextMenu @ 0x18068618C (s_HitTestContextMenu.c)
 *     s_OnDrawItem @ 0x180686230 (s_OnDrawItem.c)
 *     s_OnMeasureItem @ 0x180686DB0 (s_OnMeasureItem.c)
 *     ?HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x180687884 (-HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall CImmersiveContextMenuOwnerDrawHelper::s_ContextMenuWndProc(
        HWND hwnd,
        int a2,
        ImmersiveContextMenuHelper *a3,
        __int64 a4,
        bool *a5)
{
  bool v5; // bl
  UINT v8; // ecx
  __int64 result; // rax
  bool v10; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v10 = 0;
  switch ( a2 )
  {
    case 43:
      v5 = (int)s_OnDrawItem(hwnd, a4) >= 0;
      break;
    case 44:
      GetWindowLongW(hwnd, -20);
      v5 = (int)s_OnMeasureItem(hwnd) >= 0;
      break;
    case 279:
      ImmersiveContextMenuHelper::HandleMergedMenus(a3, (HMENU)hwnd, (HWND)a3);
      break;
    case 517:
      LODWORD(a5) = (unsigned __int16)a4;
      HIDWORD(a5) = WORD1(a4);
      s_HitTestContextMenu(hwnd, a5, &v10);
      v5 = v10;
      break;
  }
  v8 = dword_1808DDD64;
  if ( !dword_1808DDD64 )
  {
    v8 = RegisterWindowMessageW(L"TileContextMenuWindowMessage");
    dword_1808DDD64 = v8;
  }
  result = v5;
  if ( a2 == v8 )
    return 1LL;
  return result;
}
