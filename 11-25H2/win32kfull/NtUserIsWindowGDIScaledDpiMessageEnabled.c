/*
 * XREFs of NtUserIsWindowGDIScaledDpiMessageEnabled @ 0x14029AF30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

_BOOL8 __fastcall NtUserIsWindowGDIScaledDpiMessageEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _BOOL8 v5; // rbx
  __int64 v6; // rdi
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v15, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = v2;
  if ( v2 )
  {
    v7 = PtiCurrent(v4, v3);
    Win32HM_LockIntoThread<0>((__int64)v7, v6, BugCheckParameter3);
    if ( PtiCurrent(v9, v8)
      && *((_QWORD *)PtiCurrent(v11, v10) + 62)
      && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v12, v10) + 62) + 8LL) + 64LL) & 1) != 0
      && (*(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL) & 0x4000000F) == 0x40000000 )
    {
      v5 = (*(_DWORD *)(v6 + 380) & 0x100000) != 0;
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v10);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
