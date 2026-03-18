/*
 * XREFs of NtUserGetKeyboardLayoutList @ 0x140110360
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     _GetKeyboardLayoutList @ 0x1401103F0 (_GetKeyboardLayoutList.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutList(unsigned int a1, volatile void *a2)
{
  __int64 v3; // rbx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int KeyboardLayoutList; // ebx
  __int64 v6; // rdx
  char v8; // [rsp+60h] [rbp+18h] BYREF

  v3 = a1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v8, 1LL);
  if ( a2 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(a2, 8 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  else
  {
    LODWORD(v3) = 0;
  }
  KeyboardLayoutList = GetKeyboardLayoutList((unsigned int)v3, a2);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v6);
  return KeyboardLayoutList;
}
