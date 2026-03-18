/*
 * XREFs of NtUserGetPointerCursorId @ 0x140170930
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1400D5020 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerCursorId(int a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  ULONG64 v7; // rdx
  int PointerCursorId; // edi
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  struct tagTHREADINFO *v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  if ( a1 && !HIWORD(a1) && a2 )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    PointerCursorId = CTouchProcessor::GetPointerCursorId(*(CTouchProcessor **)(UserSessionState + 3256), v11, a1, &v10);
    if ( PointerCursorId )
    {
      v7 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v10;
    }
  }
  else
  {
    PointerCursorId = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v7);
  return PointerCursorId;
}
