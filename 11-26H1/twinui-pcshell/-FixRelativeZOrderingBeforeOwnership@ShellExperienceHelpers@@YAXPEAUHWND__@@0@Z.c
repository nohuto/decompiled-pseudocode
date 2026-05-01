/*
 * XREFs of ?FixRelativeZOrderingBeforeOwnership@ShellExperienceHelpers@@YAXPEAUHWND__@@0@Z @ 0x1803F36D0
 * Callers:
 *     ?SetWindowOwner@ShellExperienceHelpers@@YAJPEAUHWND__@@0@Z @ 0x1803F42BC (-SetWindowOwner@ShellExperienceHelpers@@YAJPEAUHWND__@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ShellExperienceHelpers::FixRelativeZOrderingBeforeOwnership(HWND hWndInsertAfter, HWND hWnd, HWND a3)
{
  if ( (GetWindowLongPtrW(hWnd, -20) & 8) != 0 )
    SetWindowPos(hWndInsertAfter, HWND_MESSAGE|0x2LL, 0, 0, 0, 0, 0x13u);
  SetWindowPos(hWndInsertAfter, hWnd, 0, 0, 0, 0, 0x13u);
  SetWindowPos(hWnd, hWndInsertAfter, 0, 0, 0, 0, 0x13u);
}
