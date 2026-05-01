/*
 * XREFs of ?FallbackWndProc@GamingFallbackWindow@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1804E25D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FallbackWindowActivated@GamingPosturePositioner@@QEAAXXZ @ 0x1804E2594 (-FallbackWindowActivated@GamingPosturePositioner@@QEAAXXZ.c)
 */

__int64 __fastcall GamingFallbackWindow::FallbackWndProc(HWND hWnd, UINT Msg, WPARAM wParam, LONG_PTR *lParam)
{
  LONG_PTR WindowLongPtrW; // rax
  LONG_PTR v9; // r8
  __int64 result; // rax

  WindowLongPtrW = GetWindowLongPtrW(hWnd, 0);
  switch ( Msg )
  {
    case 2u:
      v9 = 0LL;
      goto LABEL_12;
    case 6u:
      if ( wParam == 1 )
        GamingPosturePositioner::FallbackWindowActivated(*(GamingPosturePositioner **)(WindowLongPtrW + 32));
      return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
    case 0x10u:
      return 0LL;
    case 0x46u:
      result = 0LL;
      lParam[3] = 0LL;
      return result;
    case 0x81u:
      v9 = *lParam;
LABEL_12:
      SetWindowLongPtrW(hWnd, 0, v9);
      break;
  }
  return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
}
