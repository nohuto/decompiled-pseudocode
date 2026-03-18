/*
 * XREFs of NtUserEnableModernAppWindowKeyboardIntercept @ 0x140248BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _EnableModernAppWindowKeyboardIntercept @ 0x1402679C8 (_EnableModernAppWindowKeyboardIntercept.c)
 */

__int64 __fastcall NtUserEnableModernAppWindowKeyboardIntercept(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v5;
  if ( v5 )
  {
    Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
    v7 = EnableModernAppWindowKeyboardIntercept(v8, a2);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v9);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
