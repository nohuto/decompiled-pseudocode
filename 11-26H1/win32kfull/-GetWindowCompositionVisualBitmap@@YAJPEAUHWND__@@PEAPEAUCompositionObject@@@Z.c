/*
 * XREFs of ?GetWindowCompositionVisualBitmap@@YAJPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x14025BA0C
 * Callers:
 *     NtUserGetDCompositionHwndBitmap @ 0x1402B32D0 (NtUserGetDCompositionHwndBitmap.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x140201C1C (-_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z.c)
 */

__int64 __fastcall GetWindowCompositionVisualBitmap(HWND a1, struct CompositionObject **a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // rdi
  int v8; // r8d
  unsigned int WindowCompositionVisualBitmap; // ebx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = (struct tagWND *)v5;
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 40), v8 = *(_WORD *)(v6 + 42) & 0x2FFF, v8 == 669) || v8 == 671 )
  {
    WindowCompositionVisualBitmap = -1073741811;
  }
  else
  {
    Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
    if ( *(_QWORD *)(v4 + 456) == *(_QWORD *)(*((_QWORD *)v7 + 2) + 456LL) )
    {
      WindowCompositionVisualBitmap = _GetWindowCompositionVisualBitmap(v7, a2);
    }
    else
    {
      WindowCompositionVisualBitmap = -1073741811;
      UserSetLastError(5);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v6);
  return WindowCompositionVisualBitmap;
}
