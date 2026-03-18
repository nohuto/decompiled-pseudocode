/*
 * XREFs of NtUserIsMouseInPointerEnabled @ 0x1401523C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 NtUserIsMouseInPointerEnabled()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v3, 1LL);
  v0 = (*(_DWORD *)(*((_QWORD *)PtiCurrent() + 58) + 808LL) >> 2) & 1;
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v1);
  return v0;
}
