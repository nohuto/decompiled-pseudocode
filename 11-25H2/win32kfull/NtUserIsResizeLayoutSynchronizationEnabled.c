/*
 * XREFs of NtUserIsResizeLayoutSynchronizationEnabled @ 0x14029AE00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserIsResizeLayoutSynchronizationEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  struct tagTHREADINFO *v7; // rax
  unsigned __int8 v8; // bl
  __int64 v9; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v12, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 40);
    v6 = (*(_WORD *)(v3 + 42) & 0x2FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v7 = PtiCurrent(v3, v6);
      Win32HM_LockIntoThread<0>((__int64)v7, v5, BugCheckParameter3);
      v8 = *(_BYTE *)(*(_QWORD *)(v5 + 40) + 25LL);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v9);
      v4 = v8 & 0x80;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
