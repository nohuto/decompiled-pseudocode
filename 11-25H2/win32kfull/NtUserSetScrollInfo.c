/*
 * XREFs of NtUserSetScrollInfo @ 0x140050C40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxSetScrollBar @ 0x1400504D8 (xxxSetScrollBar.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetScrollInfo(__int64 a1, unsigned int a2, ULONG64 a3, int a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  struct tagWND *v10; // r15
  unsigned int v11; // edi
  __int64 v12; // rdx
  ULONG_PTR BugCheckParameter3[4]; // [rsp+28h] [rbp-80h] BYREF
  __int128 v15; // [rsp+48h] [rbp-60h] BYREF
  __int64 v16; // [rsp+58h] [rbp-50h]
  int v17; // [rsp+60h] [rbp-48h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a1);
  v10 = (struct tagWND *)v9;
  v11 = 0;
  if ( v9 && (((*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v8, v9);
    if ( a2 > 3 || a2 == 2 )
    {
      UserSetLastError(87);
    }
    else
    {
      if ( a3 >= MmUserProbeAddress )
        a3 = MmUserProbeAddress;
      v15 = *(_OWORD *)a3;
      v16 = *(_QWORD *)(a3 + 16);
      v17 = *(_DWORD *)(a3 + 24);
      v11 = xxxSetScrollBar(v10, a2, (__int64)&v15, a4);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v12);
  }
  UserSessionSwitchLeaveCrit();
  return v11;
}
