/*
 * XREFs of NtUserGetTopLevelWindow @ 0x14021C820
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetTopLevelWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  char v7; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v7, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 && GetTopLevelWindow(v2) )
    v4 = *(_QWORD *)GetTopLevelWindow(v5);
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
