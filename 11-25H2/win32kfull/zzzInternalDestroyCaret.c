/*
 * XREFs of zzzInternalDestroyCaret @ 0x140158AD8
 * Callers:
 *     xxxCreateCaret @ 0x14005DFA8 (xxxCreateCaret.c)
 *     zzzDestroyCaret @ 0x1401580DC (zzzDestroyCaret.c)
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256E34 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     zzzInternalHideCaret @ 0x140052D7C (zzzInternalHideCaret.c)
 */

void __fastcall zzzInternalDestroyCaret(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 *v6; // rdi
  struct tagWND *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = PtiCurrent(a1, a2);
  zzzInternalHideCaret(v4, v3);
  v5 = *((_QWORD *)v2 + 59);
  v6 = (__int64 *)(v5 + 320);
  if ( *(_QWORD *)(v5 + 368) )
  {
    FindTimer(*v6, 0xFFFFLL, 2u, 1, 0LL);
    *(_QWORD *)(v5 + 368) = 0LL;
  }
  *(_QWORD *)(v5 + 360) = 0LL;
  *(_DWORD *)(v5 + 332) = 0;
  v7 = (struct tagWND *)*v6;
  if ( *v6 )
  {
    Win32HM_LockIntoThread<1>((__int64)v2, *v6, (__int64 *)BugCheckParameter3);
    HMAssignmentUnlock(v6);
    UserSessionState = W32GetUserSessionState(v9, v8);
    xxxWindowEvent(0x8001u, v7, -8, 0, *(_DWORD *)(UserSessionState + 70600) != 0 ? 2 : 0);
    v13 = PtiCurrent(v12, v11);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v13, BugCheckParameter3);
  }
}
