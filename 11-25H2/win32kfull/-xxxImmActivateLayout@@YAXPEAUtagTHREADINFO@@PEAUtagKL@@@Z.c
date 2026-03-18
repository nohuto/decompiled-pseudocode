/*
 * XREFs of ?xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x1402120C8
 * Callers:
 *     EditionImmActivateLayout @ 0x1402120B0 (EditionImmActivateLayout.c)
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x140282610 (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x140282A18 (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

void __fastcall xxxImmActivateLayout(struct tagTHREADINFO *a1, struct tagKL *a2)
{
  char *v2; // rsi
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (char *)a1 + 480;
  if ( *((struct tagKL **)a1 + 60) != a2 )
  {
    if ( *((_QWORD *)a1 + 103) )
    {
      v5 = PtiCurrent((__int64)a1, (__int64)a2);
      Win32HM_LockIntoThread<0>((__int64)v5, *((_QWORD *)a1 + 103), BugCheckParameter3);
      xxxSendMessage(*((struct tagWND **)a1 + 103), 0x287u);
      v8 = PtiCurrent(v7, v6);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v8, BugCheckParameter3);
    }
    BugCheckParameter3[0] = (ULONG_PTR)v2;
    BugCheckParameter3[1] = (ULONG_PTR)a2;
    HMAssignmentLock(BugCheckParameter3, 0LL);
  }
}
