/*
 * XREFs of NtUserIsTopLevelWindow @ 0x140036AB0
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserIsTopLevelWindow(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v5, 1LL);
  v2 = ValidateHwnd(a1);
  v3 = 0;
  if ( v2 )
    v3 = IsTopLevelWindow(v2);
  UserSessionSwitchLeaveCrit();
  return v3;
}
