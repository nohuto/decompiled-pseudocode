/*
 * XREFs of NtUserEndPaint @ 0x140052010
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxEndPaint @ 0x140052E08 (xxxEndPaint.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtUserEndPaint(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  int v7; // edi
  __int64 v9; // rdx
  ULONG_PTR BugCheckParameter3[4]; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v11[4]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v12; // [rsp+90h] [rbp-18h]

  memset_0(v11, 0, 0x48uLL);
  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateReceivingHwnd(a1, 1LL);
  v6 = v5;
  v7 = 0;
  if ( v5 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v4, v5);
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v11[0] = *(_OWORD *)a2;
    v11[1] = *(_OWORD *)(a2 + 16);
    v11[2] = *(_OWORD *)(a2 + 32);
    v11[3] = *(_OWORD *)(a2 + 48);
    v12 = *(_QWORD *)(a2 + 64);
    v7 = xxxEndPaint(v6, v11);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v9);
  }
  UserSessionSwitchLeaveCrit();
  return v7;
}
