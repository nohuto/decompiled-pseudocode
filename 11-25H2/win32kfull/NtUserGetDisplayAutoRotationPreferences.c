/*
 * XREFs of NtUserGetDisplayAutoRotationPreferences @ 0x1401D2E70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferences(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // r8d
  _DWORD *v5; // rdx
  char v7; // [rsp+58h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v7, 1LL);
  v4 = *(_DWORD *)(*((_QWORD *)PtiCurrent(v3, v2) + 58) + 904LL);
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (_DWORD *)MmUserProbeAddress;
  *v5 = *v5;
  *a1 = v4;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress);
  return 1LL;
}
