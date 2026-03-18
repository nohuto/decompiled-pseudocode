/*
 * XREFs of NtUserEndDeferWindowPosEx @ 0x14004C490
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 */

__int64 __fastcall NtUserEndDeferWindowPosEx(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // edi
  struct tagSMWP *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  LOBYTE(v3) = 4;
  v4 = v2;
  v5 = HMValidateHandleWithDescriptor(a1, v3);
  v6 = 0;
  v7 = (struct tagSMWP *)v5;
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 24) & 4) != 0 )
    {
      UserSetLastError(1405);
    }
    else
    {
      Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
      v6 = xxxEndDeferWindowPosEx(v7);
      v10 = PtiCurrent(v9, v8);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v10, BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit();
  return v6;
}
