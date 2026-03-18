/*
 * XREFs of NtUserGetKeyboardType @ 0x140125E70
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     _GetKeyboardType @ 0x140125EA8 (_GetKeyboardType.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetKeyboardType(unsigned int a1)
{
  __int64 KeyboardType; // rbx
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v5, 1LL);
  KeyboardType = (int)GetKeyboardType(a1);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v3);
  return KeyboardType;
}
