/*
 * XREFs of ?s_AltTabProxyWndProc@CInsightsExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x18039FFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LRESULT __fastcall CInsightsExperienceManager::s_AltTabProxyWndProc(HWND hWnd, UINT a2, WPARAM a3, LONG_PTR *a4)
{
  HWND WindowLongPtrW; // rax
  HWND LastActivePopup; // rax

  if ( a2 == 129 )
  {
    SetWindowLongPtrW(hWnd, 0, *a4);
  }
  else if ( a2 == 6 )
  {
    if ( a3 )
      PostMessageW(hWnd, 0x401u, 0LL, 0LL);
  }
  else if ( a2 == 1025 && GetForegroundWindow() == hWnd )
  {
    WindowLongPtrW = (HWND)GetWindowLongPtrW(hWnd, 0);
    LastActivePopup = GetLastActivePopup(WindowLongPtrW);
    SetForegroundWindow(LastActivePopup);
  }
  return DefWindowProcW(hWnd, a2, a3, (LPARAM)a4);
}
