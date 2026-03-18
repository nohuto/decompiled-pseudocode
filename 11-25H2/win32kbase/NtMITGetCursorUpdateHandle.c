/*
 * XREFs of NtMITGetCursorUpdateHandle @ 0x1400BD110
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     IsInputProcessingActivated @ 0x140067500 (IsInputProcessingActivated.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     GetCursorUpdateHandle @ 0x1402160F4 (GetCursorUpdateHandle.c)
 */

__int64 NtMITGetCursorUpdateHandle()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CursorUpdateHandle; // rbx
  __int64 v3; // rdx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v5, 1LL);
  if ( !(unsigned __int8)IsInputThread() || IsInputProcessingActivated(v1, v0) )
  {
    CursorUpdateHandle = -1LL;
    UserSetLastError(5);
  }
  else
  {
    CursorUpdateHandle = GetCursorUpdateHandle();
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v3);
  return CursorUpdateHandle;
}
