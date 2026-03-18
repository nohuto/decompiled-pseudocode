/*
 * XREFs of NtUserEnumDisplayDevices @ 0x140047D40
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DrvEnumDisplayDevices @ 0x140047DF0 (DrvEnumDisplayDevices.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserEnumDisplayDevices(int a1, int a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  unsigned int v11; // ebx
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v13, 1LL);
  if ( *(_DWORD *)(W32GetUserGdiSessionState() + 32) )
  {
    UserSessionState = W32GetUserSessionState(v9, v8);
    v11 = DrvEnumDisplayDevices(
            a1,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 104LL) + 80LL),
            a2,
            a3,
            a4,
            1);
  }
  else
  {
    v11 = -1073741823;
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v8);
  return v11;
}
