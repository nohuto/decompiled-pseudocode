/*
 * XREFs of NtUserGetCursorInfo @ 0x140249780
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     CheckWinstaAttributeAccess @ 0x14005FF00 (CheckWinstaAttributeAccess.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x140236F98 (-_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetCursorInfo(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  ULONG64 v10; // rcx
  __int128 v12; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+90h] [rbp+18h]

  v12 = 0LL;
  v13 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v15, 1LL);
  v4 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(2LL)
    && ((v5 = v15, !*(_QWORD *)(v15 + 496))
     || *(_QWORD *)(v5 + 496) == *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19144)) )
  {
    _GetCursorInfo((struct tagCURSORINFO *)&v12);
    v8 = -PsGetCurrentProcessWow64Process(v7, v6);
    v16 = (-(__int64)(v8 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
    v9 = (_BYTE *)a1;
    if ( ((v8 != 0 ? 0 : 3) & (unsigned int)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = MmUserProbeAddress;
    if ( a1 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[23] = v9[23];
    if ( *(_DWORD *)a1 == 24 )
    {
      *(_OWORD *)a1 = v12;
      *(_QWORD *)(a1 + 16) = v13;
      v4 = 1;
    }
    else
    {
      UserSetLastError(87);
    }
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v4;
}
