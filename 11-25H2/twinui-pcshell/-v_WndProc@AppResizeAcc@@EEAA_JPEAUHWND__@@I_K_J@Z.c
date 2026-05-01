/*
 * XREFs of ?v_WndProc@AppResizeAcc@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180511C60
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z @ 0x1805115F8 (-ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z.c)
 */

LONG_PTR __fastcall AppResizeAcc::v_WndProc(HWND *this, HWND a2, UINT a3, WPARAM a4, LPARAM lParam)
{
  __int64 v5; // rbx

  v5 = 0LL;
  if ( a3 == 61 )
  {
    if ( lParam == -25 )
      return UiaReturnRawElementProvider(this[1], a4, -25LL, (IRawElementProviderSimple *)this - 4);
    return DefWindowProcW(this[1], a3, a4, lParam);
  }
  if ( a3 != 32769 )
    return DefWindowProcW(this[1], a3, a4, lParam);
  AppResizeAcc::ProcessPendingNotifications((IRawElementProviderSimple *)this - 4, 1);
  return v5;
}
