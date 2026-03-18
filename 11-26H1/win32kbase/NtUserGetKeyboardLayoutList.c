/*
 * XREFs of NtUserGetKeyboardLayoutList @ 0x14011C350
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     _GetKeyboardLayoutList @ 0x14011C3D8 (_GetKeyboardLayoutList.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutList(unsigned int a1, volatile void *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int KeyboardLayoutList; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v3 = a1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v13);
  if ( a2 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5, v4);
    ProbeForWrite(a2, 8 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  else
  {
    LODWORD(v3) = 0;
  }
  KeyboardLayoutList = GetKeyboardLayoutList((unsigned int)v3, a2);
  UserSessionSwitchLeaveCritWithNonPaged(v9, v8, v10, v11);
  return KeyboardLayoutList;
}
