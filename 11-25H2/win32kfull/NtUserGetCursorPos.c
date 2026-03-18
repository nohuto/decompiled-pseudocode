/*
 * XREFs of NtUserGetCursorPos @ 0x14005FD60
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x14005FDAC (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetCursorPos(struct tagPOINT *a1, unsigned int a2)
{
  __int64 CursorPos; // rbx
  __int64 v5; // rcx
  char v7; // [rsp+40h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v7, 1LL);
  CursorPos = (int)xxxGetCursorPos(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return CursorPos;
}
