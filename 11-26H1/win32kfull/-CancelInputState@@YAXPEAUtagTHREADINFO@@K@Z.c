/*
 * XREFs of ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1402A04C8
 * Callers:
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1401CA7DC (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140046F44 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     UnlockCaptureWindow @ 0x140054860 (UnlockCaptureWindow.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x14012A150 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x140154494 (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x140154C5C (zzzInputFocusLostWindowEvent.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall CancelInputState(struct tagTHREADINFO *a1, int a2)
{
  struct tagTHREADINFO *v4; // r14
  int v5; // ebx
  struct tagWND *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rcx
  struct tagWND *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  tagQ *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagWND *v16; // rbx
  tagQ *v17; // rcx
  PETHREAD *v18; // [rsp+30h] [rbp-30h] BYREF
  unsigned int ThreadId; // [rsp+38h] [rbp-28h]
  int v20; // [rsp+3Ch] [rbp-24h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v22[16]; // [rsp+50h] [rbp-10h] BYREF

  v4 = PtiCurrent((__int64)a1);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v22);
  if ( !a2 )
  {
    v16 = *(struct tagWND **)(*((_QWORD *)a1 + 58) + 128LL);
    Win32HM_LockIntoThread<1>((__int64)v4, (__int64)v16, (__int64 *)BugCheckParameter3);
    SendNotifyMessageAlways(v16, 0x86u, 0LL, 0LL, 0);
    SendNotifyMessageAlways(v16, 6u, (unsigned __int64)(*(_BYTE *)(*((_QWORD *)v16 + 5) + 31LL) & 0x20) << 16, 0LL, 0);
    v17 = (tagQ *)*((_QWORD *)a1 + 58);
    if ( v16 == *((struct tagWND **)v17 + 16) )
      tagQ::SetActiveWindow(v17, 0LL);
    v18 = (PETHREAD *)*((_QWORD *)v16 + 2);
    ThreadId = (unsigned int)PsGetThreadId(*v18);
    v20 = 2;
    xxxSendActivateAppMessage((const struct tagAAS *)&v18);
    v9 = (__int64 *)BugCheckParameter3;
    goto LABEL_16;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    v10 = *(struct tagWND **)(*((_QWORD *)a1 + 58) + 120LL);
    Win32HM_LockIntoThread<1>((__int64)v4, (__int64)v10, (__int64 *)&v18);
    SendNotifyMessageAlways(v10, 8u, 0LL, 0LL, 0);
    if ( (**(_DWORD **)(W32GetUserSessionState(v12, v11) + 19904) & 4) != 0 )
      xxxFocusSetInputContext(v10, 0LL, 1);
    v13 = (tagQ *)*((_QWORD *)a1 + 58);
    if ( v10 == *((struct tagWND **)v13 + 15) )
    {
      tagQ::UnlockFocusWnd(v13);
      if ( v10 )
      {
        if ( *((_QWORD *)a1 + 58) == *(_QWORD *)(W32GetUserSessionState(v15, v14) + 18928) )
          zzzInputFocusLostWindowEvent(0LL, 5LL);
      }
    }
    goto LABEL_6;
  }
  if ( v5 == 1 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 58) + 436LL) &= ~0x100000u;
    v6 = *(struct tagWND **)(*((_QWORD *)a1 + 58) + 112LL);
    Win32HM_LockIntoThread<1>((__int64)v4, (__int64)v6, (__int64 *)&v18);
    SendNotifyMessageAlways(v6, 0x1Fu, 0LL, 0LL, 0);
    v8 = *((_QWORD *)a1 + 58);
    if ( v6 == *(struct tagWND **)(v8 + 112) )
      UnlockCaptureWindow(v8, v7);
LABEL_6:
    v9 = (__int64 *)&v18;
LABEL_16:
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>(v9);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v22);
}
