/*
 * XREFs of NtUserInvalidateRgn @ 0x1401D0770
 * Callers:
 *     <none>
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxRedrawWindow @ 0x140030830 (xxxRedrawWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserInvalidateRgn(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // edi
  struct tagWND *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateReceivingHwnd(a1, 1LL);
  v9 = 0;
  v10 = (struct tagWND *)v7;
  if ( v7 )
  {
    Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
    v9 = xxxRedrawWindow(v10, 0LL, a2, a3 != 0 ? 5 : 1);
    v13 = PtiCurrent(v12, v11);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v13, BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
