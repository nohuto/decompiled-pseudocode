/*
 * XREFs of NtUserGetMouseMovePointsEx @ 0x1402983A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     _GetMouseMovePointsEx @ 0x1401E3F10 (_GetMouseMovePointsEx.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetMouseMovePointsEx(int a1, void *a2, volatile void *a3, unsigned int a4, int a5)
{
  __int64 v5; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // r14
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v18; // rcx
  unsigned int MouseMovePoints; // ebx
  __int128 v21; // [rsp+30h] [rbp-68h] BYREF
  __int64 v22; // [rsp+40h] [rbp-58h]
  __int128 v23; // [rsp+48h] [rbp-50h] BYREF
  __int64 v24; // [rsp+58h] [rbp-40h]
  _QWORD v25[7]; // [rsp+60h] [rbp-38h] BYREF

  v5 = a4;
  v23 = 0LL;
  v24 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(v25, 1LL);
  v13 = PtiCurrent(v10, v9);
  if ( a1 != 24 || (unsigned int)v5 > 0x40 )
  {
    v14 = 87;
    goto LABEL_7;
  }
  if ( *((_QWORD *)v13 + 62) != *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19144) )
  {
    v14 = 5;
LABEL_7:
    UserSetLastError(v14);
    MouseMovePoints = -1;
    goto LABEL_8;
  }
  v21 = 0LL;
  v22 = 0LL;
  RtlCopyFromUser(&v21, a2, 0x18uLL);
  v23 = v21;
  v24 = v22;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v16, v15);
  ProbeForWrite(a3, 24 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
  MouseMovePoints = GetMouseMovePointsEx((__int16 *)&v23, (__int64)a3, v5, a5);
LABEL_8:
  UserSessionSwitchLeaveCrit(v18);
  return MouseMovePoints;
}
