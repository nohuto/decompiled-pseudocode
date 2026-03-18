/*
 * XREFs of NtUserIsChildWindowDpiMessageEnabled @ 0x14019C360
 * Callers:
 *     <none>
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z @ 0x14019C404 (-IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

_BOOL8 __fastcall NtUserIsChildWindowDpiMessageEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _BOOL8 v5; // rbx
  struct tagWND *v6; // rdi
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+48h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v13, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = (struct tagWND *)v2;
  if ( v2 )
  {
    v7 = PtiCurrent(v4, v3);
    BugCheckParameter3[1] = (ULONG_PTR)v6;
    BugCheckParameter3[0] = *((_QWORD *)v7 + 57);
    *((_QWORD *)v7 + 57) = BugCheckParameter3;
    HMLockObject(v6);
    v5 = IsChildWindowDpiMessageEnabledX(v6);
    v10 = PtiCurrent(v9, v8);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v10, BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
