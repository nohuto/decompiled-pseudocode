/*
 * XREFs of NtUserForceWindowToDpiForTest @ 0x140296E90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     GetDpiCacheSlot @ 0x14004B9C0 (GetDpiCacheSlot.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxForceWindowToDpiForTest @ 0x140284B18 (xxxForceWindowToDpiForTest.c)
 */

_BOOL8 __fastcall NtUserForceWindowToDpiForTest(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  BOOL v7; // edi
  struct tagWND *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = 0;
  v8 = (struct tagWND *)v5;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( (((*(_WORD *)(v6 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
      if ( (*(_DWORD *)(*((_QWORD *)v8 + 5) + 288LL) & 0xF) == 2
        && IsTopLevelWindow((__int64)v8)
        && (unsigned int)GetDpiCacheSlot(a2, v9) != -1 )
      {
        v7 = xxxForceWindowToDpiForTest(v8, a2);
      }
      else
      {
        UserSetLastError(87);
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
