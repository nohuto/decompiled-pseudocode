/*
 * XREFs of NtUserGetKeyboardLayout @ 0x14003B800
 * Callers:
 *     <none>
 * Callees:
 *     _GetKeyboardLayout @ 0x14003B834 (_GetKeyboardLayout.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 */

__int64 __fastcall NtUserGetKeyboardLayout(unsigned int a1)
{
  __int64 KeyboardLayout; // rbx

  EnterSharedCrit(0LL);
  KeyboardLayout = GetKeyboardLayout(a1);
  UserSessionSwitchLeaveCritWithNonPaged();
  return KeyboardLayout;
}
