/*
 * XREFs of NtUserPaintDesktop @ 0x14029B7C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxInternalPaintDesktop @ 0x14020D100 (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall NtUserPaintDesktop(HDC a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  v4 = PtiCurrent(v3, v2);
  v5 = 0;
  v6 = *((_QWORD *)v4 + 62);
  if ( v6 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 24LL);
    Win32HM_LockIntoThread<1>((__int64)v4, v7, (__int64 *)BugCheckParameter3);
    v5 = xxxInternalPaintDesktop(v7, a1, 1);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v8);
  }
  else
  {
    UserSetLastError(0);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v5;
}
