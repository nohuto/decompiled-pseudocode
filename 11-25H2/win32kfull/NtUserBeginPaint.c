/*
 * XREFs of NtUserBeginPaint @ 0x140052120
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxBeginPaint @ 0x140052240 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x140052E08 (xxxEndPaint.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtUserBeginPaint(__int64 a1, void *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  struct tagWND *v6; // r14
  __int64 v7; // rdi
  __int64 v9; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE Src[68]; // [rsp+50h] [rbp-78h] BYREF
  int v12; // [rsp+94h] [rbp-34h]

  memset_0(Src, 0, 0x48uLL);
  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateReceivingHwnd(a1, 1LL);
  v6 = (struct tagWND *)v5;
  v7 = 0LL;
  if ( v5 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v4, v5);
    v7 = xxxBeginPaint(v6);
    v12 = 0;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, Src, 0x48uLL);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v9);
  }
  UserSessionSwitchLeaveCrit();
  return v7;
}
