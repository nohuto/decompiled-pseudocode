/*
 * XREFs of NtUserSetWindowPlacement @ 0x14016FA40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     xxxSetWindowPlacement @ 0x14016FB84 (xxxSetWindowPlacement.c)
 */

__int64 __fastcall NtUserSetWindowPlacement(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // rsi
  int v8; // edi
  __int64 v9; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v12; // [rsp+48h] [rbp-40h]
  __int128 v13; // [rsp+58h] [rbp-30h]
  __int64 v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+70h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = (struct tagWND *)v5;
  v8 = 0;
  if ( v5 )
  {
    v6 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v4, v5);
      if ( a2 >= MmUserProbeAddress )
        a2 = MmUserProbeAddress;
      v12 = *(_OWORD *)a2;
      v13 = *(_OWORD *)(a2 + 16);
      v14 = *(_QWORD *)(a2 + 32);
      v15 = *(_DWORD *)(a2 + 40);
      if ( (_DWORD)v12 == 44 || *(_WORD *)(v4 + 672) < 0x400u )
        v8 = xxxSetWindowPlacement(v7);
      else
        UserSetLastError(87);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v9);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
