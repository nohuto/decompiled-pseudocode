/*
 * XREFs of NtUserCheckWindowThreadDesktop @ 0x140294BF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     GetConsoleDesktop @ 0x14019C77C (GetConsoleDesktop.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserCheckWindowThreadDesktop(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    v8 = PtiFromThreadId(a2);
    if ( v8 )
    {
      v6 = ValidatePwndDesktop(v7, v8);
    }
    else
    {
      v12 = 0LL;
      v11 = 0LL;
      if ( (int)GetConsoleDesktop(a2, v10, &v11, &v12) < 0 )
        UserSetLastError(87);
      else
        LOBYTE(v6) = *(_QWORD *)(v7 + 24) == v11;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
