/*
 * XREFs of ?v_WndProc@VirtualDesktopGestureWindow@@UEAA_JPEAUHWND__@@I_K_J@Z @ 0x1801FDA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LRESULT __fastcall VirtualDesktopGestureWindow::v_WndProc(
        VirtualDesktopGestureWindow *this,
        HWND a2,
        UINT a3,
        WPARAM a4,
        LPARAM a5)
{
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 == 1 )
  {
    v9 = *((_QWORD *)this + 1);
    v10[1] = &v11;
    v11 = 1;
    v10[0] = 13LL;
    v10[2] = 4LL;
    SetWindowCompositionAttribute(v9, v10);
  }
  return DefWindowProcW(a2, a3, a4, a5);
}
