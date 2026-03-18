/*
 * XREFs of NtUserInternalGetWindowIcon @ 0x14012FE80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     _GetWindowIcon @ 0x140130B5C (_GetWindowIcon.c)
 */

__int64 __fastcall NtUserInternalGetWindowIcon(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 WindowIcon; // rbx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  WindowIcon = 0LL;
  if ( v4 )
  {
    if ( a2 > 2 )
      UserSetLastError(87);
    else
      WindowIcon = GetWindowIcon(v4, a2);
  }
  UserSessionSwitchLeaveCrit(v5);
  return WindowIcon;
}
