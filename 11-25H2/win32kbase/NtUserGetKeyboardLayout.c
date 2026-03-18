/*
 * XREFs of NtUserGetKeyboardLayout @ 0x140048D00
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     _GetKeyboardLayout @ 0x140048D38 (_GetKeyboardLayout.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetKeyboardLayout(unsigned int a1)
{
  __int64 KeyboardLayout; // rbx
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v5, 1LL);
  KeyboardLayout = GetKeyboardLayout(a1);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v3);
  return KeyboardLayout;
}
