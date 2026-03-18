/*
 * XREFs of NtUserFlashWindowEx @ 0x1401FA530
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1401CC8EC (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxFlashWindow @ 0x140253F78 (xxxFlashWindow.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtUserFlashWindowEx(void *Src)
{
  int v2; // ebx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v11; // [rsp+48h] [rbp-40h]
  HWND v12[2]; // [rsp+58h] [rbp-30h] BYREF
  __int128 v13; // [rsp+68h] [rbp-20h]
  struct tagWND *v14; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  *(_OWORD *)v12 = 0LL;
  v13 = 0LL;
  RtlCopyFromUser(v12, Src, 0x20uLL);
  *(_OWORD *)BugCheckParameter3 = *(_OWORD *)v12;
  v11 = v13;
  LOBYTE(v3) = ValidateHWNDND(v12[1], &v14);
  if ( v3 && LODWORD(v12[0]) == 32 && (v13 & 0xFFFFFFF0) == 0 )
  {
    v6 = PtiCurrent(v5, v4);
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v6, (__int64)v14);
    v2 = xxxFlashWindow(v14);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v7);
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v2;
}
