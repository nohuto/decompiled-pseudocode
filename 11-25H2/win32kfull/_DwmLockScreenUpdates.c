/*
 * XREFs of _DwmLockScreenUpdates @ 0x1402177A0
 * Callers:
 *     NtUserDwmLockScreenUpdates @ 0x140217760 (NtUserDwmLockScreenUpdates.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxRedrawWindow @ 0x140030830 (xxxRedrawWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     IsCurrentDesktopComposed @ 0x140060BF0 (IsCurrentDesktopComposed.c)
 */

__int64 __fastcall DwmLockScreenUpdates(__int64 a1, __int64 a2)
{
  int v2; // edi
  HANDLE v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct tagWND *v18; // rbx
  __int64 v19; // rdx
  struct tagTHREADINFO *v20; // rax
  __int64 v21; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1;
  v3 = *(HANDLE *)(W32GetUserSessionState(a1, a2) + 63544);
  if ( PsGetCurrentProcessId() == v3 )
  {
    v6 = *(_DWORD *)(W32GetUserSessionState(v5, v4) + 70564);
    *(_DWORD *)(W32GetUserSessionState(v8, v7) + 70564) = v2;
    if ( *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19144)
      && v6
      && !*(_DWORD *)(W32GetUserSessionState(v12, v11) + 70564)
      && !(unsigned int)IsCurrentDesktopComposed(v14, v13) )
    {
      v17 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 19144);
      v18 = *(struct tagWND **)(*(_QWORD *)(v17 + 8) + 24LL);
      v20 = PtiCurrent(v17, v19);
      Win32HM_LockIntoThread<1>((__int64)v20, (__int64)v18, (__int64 *)BugCheckParameter3);
      xxxRedrawWindow(v18, 0LL, 0LL, 133);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v21);
    }
  }
  else
  {
    UserSetLastError(5);
  }
  return 0LL;
}
