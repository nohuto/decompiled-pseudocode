/*
 * XREFs of NtUserSetSystemCursor @ 0x14021B040
 * Callers:
 *     <none>
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140273DD8 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

_BOOL8 __fastcall NtUserSetSystemCursor(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BOOL8 v8; // rbx
  struct tagCURSOR *v9; // rdi
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  LOBYTE(v4) = 3;
  v5 = HMValidateHandleWithDescriptor(a1, v4);
  v8 = 0LL;
  v9 = (struct tagCURSOR *)v5;
  if ( v5 )
  {
    v10 = PtiCurrent(v7, v6);
    Win32HM_LockIntoThread<1>((__int64)v10, (__int64)v9, (__int64 *)BugCheckParameter3);
    v8 = zzzSetSystemCursor(v9, a2);
    v13 = PtiCurrent(v12, v11);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v13, BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
