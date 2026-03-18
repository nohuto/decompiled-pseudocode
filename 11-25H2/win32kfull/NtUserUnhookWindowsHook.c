/*
 * XREFs of NtUserUnhookWindowsHook @ 0x1402A2D40
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z @ 0x140286AA0 (-zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserUnhookWindowsHook(unsigned int a1, __int64 (*a2)(void))
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v7, 1LL);
  v4 = (int)zzzUnhookWindowsHook(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
