/*
 * XREFs of NtUserInheritWindowMonitor @ 0x1401ED620
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x140064724 (xxxInheritWindowMonitor.c)
 */

__int64 __fastcall NtUserInheritWindowMonitor(__int64 a1, __int64 a2)
{
  int v4; // esi
  struct tagWND *v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // rdi
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v5 = 0LL;
  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  if ( v7 )
  {
    v8 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      v12 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v12 == *(_QWORD *)(*((_QWORD *)v9 + 2) + 464LL) )
      {
        if ( !a2 || (v5 = (struct tagWND *)ValidateHwnd(a2)) != 0LL )
          v4 = xxxInheritWindowMonitor(v9, v5, 1);
      }
      else
      {
        UserSetLastError(5);
      }
      v15 = PtiCurrent(v14, v13);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v15, BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v4;
}
