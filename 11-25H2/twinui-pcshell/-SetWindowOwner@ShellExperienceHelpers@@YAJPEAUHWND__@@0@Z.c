/*
 * XREFs of ?SetWindowOwner@ShellExperienceHelpers@@YAJPEAUHWND__@@0@Z @ 0x1803EA29C
 * Callers:
 *     ?SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1803EA240 (-SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800B71B0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?FixRelativeZOrderingBeforeOwnership@ShellExperienceHelpers@@YAXPEAUHWND__@@0@Z @ 0x1803E9CD0 (-FixRelativeZOrderingBeforeOwnership@ShellExperienceHelpers@@YAXPEAUHWND__@@0@Z.c)
 */

signed int __fastcall ShellExperienceHelpers::SetWindowOwner(HWND hWnd, HWND hWndInsertAfter, HWND a3)
{
  wil::details *v5; // rcx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( hWndInsertAfter )
    ShellExperienceHelpers::FixRelativeZOrderingBeforeOwnership(hWnd, hWndInsertAfter, a3);
  SetLastError(0);
  if ( SetWindowLongPtrW(hWnd, -8, (LONG_PTR)hWndInsertAfter) || !GetLastError() )
  {
    if ( hWndInsertAfter )
      SetWindowPos(hWnd, hWndInsertAfter, 0, 0, 0, 0, 0x13u);
    return 0;
  }
  else if ( GetLastError() == 1400 )
  {
    return wil::details::GetLastErrorFailHr(v5);
  }
  else
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x44,
             (unsigned int)"desktop\\internal\\shell\\inc\\OwnedWindowHelpers.h",
             v6);
  }
}
