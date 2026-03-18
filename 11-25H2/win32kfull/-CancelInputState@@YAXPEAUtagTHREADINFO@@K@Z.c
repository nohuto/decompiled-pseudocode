/*
 * XREFs of ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x14027C900
 * Callers:
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x14023F6D4 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140037CD8 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x14004B2E8 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x14004E56C (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     UnlockCaptureWindow @ 0x140120F50 (UnlockCaptureWindow.c)
 *     zzzInputFocusLostWindowEvent @ 0x140245038 (zzzInputFocusLostWindowEvent.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall CancelInputState(struct tagTHREADINFO *a1, __int64 a2)
{
  int v2; // ebx
  struct tagTHREADINFO *v4; // r14
  __int64 v5; // rdx
  int v6; // ebx
  struct tagWND *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  ULONG_PTR *v10; // rcx
  struct tagWND *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  tagQ *v14; // rcx
  __int64 v15; // rcx
  struct tagWND *v16; // rbx
  tagQ *v17; // rcx
  PETHREAD *v18; // [rsp+30h] [rbp-30h] BYREF
  unsigned int ThreadId; // [rsp+38h] [rbp-28h]
  int v20; // [rsp+3Ch] [rbp-24h]
  _BYTE v21[8]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-10h] BYREF

  v2 = a2;
  v21[0] = 0;
  v4 = PtiCurrent((__int64)a1, a2);
  v22 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v21, v5);
  if ( !v2 )
  {
    v16 = *(struct tagWND **)(*((_QWORD *)a1 + 59) + 128LL);
    Win32HM_LockIntoThread<1>((__int64)v4, (__int64)v16, (__int64 *)BugCheckParameter3);
    SendNotifyMessageAlways(v16, 0x86u, 0LL, 0LL, 0);
    SendNotifyMessageAlways(v16, 6u, (unsigned __int64)(*(_BYTE *)(*((_QWORD *)v16 + 5) + 31LL) & 0x20) << 16, 0LL, 0);
    v17 = (tagQ *)*((_QWORD *)a1 + 59);
    if ( v16 == *((struct tagWND **)v17 + 16) )
      tagQ::SetActiveWindow(v17, 0LL);
    v18 = (PETHREAD *)*((_QWORD *)v16 + 2);
    ThreadId = (unsigned int)PsGetThreadId(*v18);
    v20 = 2;
    xxxSendActivateAppMessage((const struct tagAAS *)&v18);
    v10 = BugCheckParameter3;
    goto LABEL_16;
  }
  v6 = v2 - 1;
  if ( !v6 )
  {
    v11 = *(struct tagWND **)(*((_QWORD *)a1 + 59) + 120LL);
    Win32HM_LockIntoThread<1>((__int64)v4, (__int64)v11, (__int64 *)&v18);
    SendNotifyMessageAlways(v11, 8u, 0LL, 0LL, 0);
    if ( (**(_DWORD **)(W32GetUserSessionState(v13, v12) + 19872) & 4) != 0 )
      xxxFocusSetInputContext(v11, 0LL, 1);
    v14 = (tagQ *)*((_QWORD *)a1 + 59);
    if ( v11 == *((struct tagWND **)v14 + 15) )
    {
      tagQ::UnlockFocusWnd(v14);
      if ( v11 )
      {
        if ( *((_QWORD *)a1 + 59) == *(_QWORD *)(W32GetUserSessionState(v15, v8) + 18888) )
          zzzInputFocusLostWindowEvent(0LL, 5LL);
      }
    }
    goto LABEL_6;
  }
  if ( v6 == 1 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 59) + 412LL) &= ~0x100000u;
    v7 = *(struct tagWND **)(*((_QWORD *)a1 + 59) + 112LL);
    Win32HM_LockIntoThread<1>((__int64)v4, (__int64)v7, (__int64 *)&v18);
    SendNotifyMessageAlways(v7, 0x1Fu, 0LL, 0LL, 0);
    v9 = *((_QWORD *)a1 + 59);
    if ( v7 == *(struct tagWND **)(v9 + 112) )
      UnlockCaptureWindow(v9, v8);
LABEL_6:
    v10 = (ULONG_PTR *)&v18;
LABEL_16:
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v10, v8);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v21);
}
