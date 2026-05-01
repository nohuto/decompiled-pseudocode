/*
 * XREFs of ?v_WndProc@GhostDivider@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1801EF140
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 */

LRESULT __fastcall GhostDivider::v_WndProc(GhostDivider *this, HWND a2, UINT a3, WPARAM a4, LPARAM lParam)
{
  __int64 v5; // rbx

  v5 = 0LL;
  if ( a3 != 16 )
  {
    if ( a3 == 33 )
    {
      return 3LL;
    }
    else if ( a3 == 810 && a4 == 5 && lParam == 4 )
    {
      DestroyWindow(a2);
      if ( *((_QWORD *)this + 6) )
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 6);
    }
    else
    {
      return DefWindowProcW(a2, a3, a4, lParam);
    }
  }
  return v5;
}
