/*
 * XREFs of NtUserInitThreadCoreMessagingIocp2 @ 0x1401D0830
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     _InitThreadCoreMessagingIocp2 @ 0x1401D093C (_InitThreadCoreMessagingIocp2.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserInitThreadCoreMessagingIocp2(__int64 a1, void *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 inited; // rbx
  ULONG_PTR BugCheckParameter3[4]; // [rsp+38h] [rbp-20h] BYREF
  int Src; // [rsp+70h] [rbp+18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateReceivingHwnd(a1, 0LL);
  v7 = v5;
  if ( v5 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v4, v5);
    if ( a2 )
    {
      Src = 0;
      inited = InitThreadCoreMessagingIocp2(v7, &Src);
      if ( inited )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(a2, &Src, 4uLL);
      }
    }
    else
    {
      UserSetLastError(87);
      inited = 0LL;
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v8);
  }
  else
  {
    inited = 0LL;
  }
  UserSessionSwitchLeaveCrit(v6);
  return inited;
}
