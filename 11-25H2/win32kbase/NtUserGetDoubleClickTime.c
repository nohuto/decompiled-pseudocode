/*
 * XREFs of NtUserGetDoubleClickTime @ 0x14010C7C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ApiSetEditionAreAllAccessGranted @ 0x14010C86C (ApiSetEditionAreAllAccessGranted.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 NtUserGetDoubleClickTime()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rcx
  unsigned int v3; // ebx
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v9, 1LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v0);
  v3 = 0;
  v4 = (_QWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v2 = -*(_QWORD *)CurrentProcessWin32Process;
    v4 = (_QWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  }
  v6 = *(_QWORD *)(W32GetUserGdiSessionState(v2) + 40);
  if ( *v4 == v6 )
    goto LABEL_7;
  v7 = PsGetCurrentProcessWin32Process(v6);
  if ( v7 )
    v7 &= -(__int64)(*(_QWORD *)v7 != 0LL);
  if ( (unsigned int)ApiSetEditionAreAllAccessGranted(*(unsigned int *)(v7 + 664)) )
LABEL_7:
    v3 = *(_DWORD *)(W32GetUserSessionState(v6, v5) + 14720);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v5);
  return v3;
}
