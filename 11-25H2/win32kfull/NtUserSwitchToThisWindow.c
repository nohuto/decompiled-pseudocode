/*
 * XREFs of NtUserSwitchToThisWindow @ 0x14024F1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxSwitchToThisWindow@@YAHPEAUtagWND@@H@Z @ 0x14023CE88 (-xxxSwitchToThisWindow@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxSwitchToThisWindowEx@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z @ 0x140279CB8 (-xxxSwitchToThisWindowEx@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z.c)
 *     Feature_NextWindow_ForegroundHackRemoval__private_IsEnabledDeviceUsageNoInline @ 0x1402943FC (Feature_NextWindow_ForegroundHackRemoval__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserSwitchToThisWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edi
  struct tagTHREADINFO **v8; // rsi
  __int64 v9; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v7 = 0;
  v8 = (struct tagTHREADINFO **)v5;
  if ( v5 )
  {
    Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
    if ( (unsigned int)Feature_NextWindow_ForegroundHackRemoval__private_IsEnabledDeviceUsageNoInline() )
    {
      xxxSwitchToThisWindowEx(v8, (unsigned int)(a2 != 0) + 5);
      v7 = 1;
    }
    else
    {
      v7 = xxxSwitchToThisWindow(v8, a2);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v9);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
