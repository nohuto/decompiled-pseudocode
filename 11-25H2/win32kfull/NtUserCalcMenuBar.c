/*
 * XREFs of NtUserCalcMenuBar @ 0x140050D90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxCalcMenuBar @ 0x140050EB4 (xxxCalcMenuBar.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserCalcMenuBar(__int64 a1, int a2, int a3, int a4, ULONG64 a5)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // edi
  __int128 *v13; // rdx
  __int128 v14; // xmm0
  __int64 v15; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v18; // [rsp+48h] [rbp-30h] BYREF

  v9 = EnterCrit(0LL, 0LL);
  v10 = ValidateReceivingHwnd(a1, 1LL);
  v11 = v10;
  v12 = 0;
  if ( v10 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v9, v10);
    if ( a2 < 0 || a3 < 0 || a4 < 0 )
    {
      UserSetLastError(87);
    }
    else
    {
      v13 = (__int128 *)a5;
      if ( a5 )
      {
        if ( a5 >= MmUserProbeAddress )
          v13 = (__int128 *)MmUserProbeAddress;
        v14 = *v13;
      }
      else
      {
        v14 = *(_OWORD *)(*(_QWORD *)(v11 + 40) + 88LL);
      }
      v18 = v14;
      v12 = xxxCalcMenuBar(v11, a2, a3, a4, (__int64)&v18);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v15);
  }
  UserSessionSwitchLeaveCrit();
  return v12;
}
