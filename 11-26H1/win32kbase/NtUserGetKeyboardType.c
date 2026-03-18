/*
 * XREFs of NtUserGetKeyboardType @ 0x140158DA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     _GetKeyboardType @ 0x140158DD4 (_GetKeyboardType.c)
 */

__int64 __fastcall NtUserGetKeyboardType(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 KeyboardType; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  EnterSharedCrit(0LL, 1LL, a3, a4);
  KeyboardType = (int)GetKeyboardType(a1);
  UserSessionSwitchLeaveCritWithNonPaged(v7, v6, v8, v9);
  return KeyboardType;
}
