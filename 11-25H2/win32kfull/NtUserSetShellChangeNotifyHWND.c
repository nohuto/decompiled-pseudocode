/*
 * XREFs of NtUserSetShellChangeNotifyHWND @ 0x1402207E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetShellChangeNotifyHWND@@YAHPEAUHWND__@@@Z @ 0x140220820 (-_SetShellChangeNotifyHWND@@YAHPEAUHWND__@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserSetShellChangeNotifyHWND(HWND a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v5, 1LL);
  v2 = (int)_SetShellChangeNotifyHWND(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
