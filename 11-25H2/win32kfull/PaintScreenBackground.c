/*
 * XREFs of PaintScreenBackground @ 0x14021A020
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     FillRect @ 0x1400557E0 (FillRect.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

void PaintScreenBackground()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  HBRUSH v6; // rbx
  __int64 v7; // rdx
  __int64 UserSessionState; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  RECT v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+40h] [rbp+8h] BYREF
  char v13; // [rsp+48h] [rbp+10h] BYREF

  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v12, 1);
  EnterLeaveCritShared::EnterLeaveCritShared(&v13, 1LL);
  EnterSharedRenderCrit(v0);
  v3 = *(_QWORD *)(W32GetUserSessionState(v2, v1) + 56968);
  v11 = *(RECT *)(*(_QWORD *)v3 + 24LL);
  v5 = *(_QWORD *)(W32GetUserSessionState(v3, v4) + 19872);
  v6 = *(HBRUSH *)(v5 + 4704);
  UserSessionState = W32GetUserSessionState(v5, v7);
  FillRect(*(HDC *)(*(_QWORD *)(UserSessionState + 56968) + 64LL), &v11, v6);
  LeaveRenderCrit(v9);
  UserSessionSwitchLeaveCrit(v10);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v12);
}
