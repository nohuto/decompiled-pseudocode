/*
 * XREFs of ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x14023F6D4
 * Callers:
 *     xxxSetThreadDesktop @ 0x14011499C (xxxSetThreadDesktop.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     xxxHardErrorControl @ 0x14021DD80 (xxxHardErrorControl.c)
 *     zzzReattachThreads @ 0x14023FD24 (zzzReattachThreads.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1400677E0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     UnlockCaptureWindow @ 0x140120F50 (UnlockCaptureWindow.c)
 *     LockCaptureWindow @ 0x140121D68 (LockCaptureWindow.c)
 *     EditionUpdateRawMouseMode @ 0x140121E10 (EditionUpdateRawMouseMode.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x140145220 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     IsInsideMenuLoop @ 0x1401BADBC (IsInsideMenuLoop.c)
 *     ?CheckTransferState@tagQ@@AEAAKPEAUtagTHREADINFO@@PEQ1@PEAUtagWND@@_N@Z @ 0x1401BC9B8 (-CheckTransferState@tagQ@@AEAAKPEAUtagTHREADINFO@@PEQ1@PEAUtagWND@@_N@Z.c)
 *     ClearDelegationCapture @ 0x1401C4F30 (ClearDelegationCapture.c)
 *     LockQCursor @ 0x140274040 (LockQCursor.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x14027C900 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 */

void __fastcall tagQ::zzzAttachToQueue(tagQ *this, struct tagTHREADINFO *a2, struct tagQ *a3, char a4)
{
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // r15
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // edx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  bool v21; // r12
  __int64 v22; // rsi
  unsigned __int8 v23; // al
  __int64 v24; // rdi
  char v25; // bl
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 UserSessionState; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rcx
  unsigned int v32; // ecx
  struct tagQ *v33; // rax
  struct tagQ *v34; // rbx
  struct tagQMSG *v35; // rcx
  _QWORD v36[2]; // [rsp+60h] [rbp-38h] BYREF

  v8 = tagQ::CheckTransferState((__int64)this, (__int64)a2, 128, a4) - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      tagQ::SetActiveWindow(this, *(struct tagWND **)(*((_QWORD *)a2 + 59) + 128LL));
      tagQ::SetActiveWindow(*((tagQ **)a2 + 59), 0LL);
      v9 = *((_QWORD *)a2 + 59);
      v10 = *(_QWORD *)(v9 + 320);
      if ( v10 )
      {
        if ( *(struct tagTHREADINFO **)(v10 + 16) == a2 && !*((_QWORD *)this + 40) )
        {
          *((_OWORD *)this + 20) = *(_OWORD *)(v9 + 320);
          *((_OWORD *)this + 21) = *(_OWORD *)(v9 + 336);
          *((_OWORD *)this + 22) = *(_OWORD *)(v9 + 352);
          *((_OWORD *)this + 23) = *(_OWORD *)(v9 + 368);
          *((_OWORD *)this + 24) = *(_OWORD *)(v9 + 384);
          *(_QWORD *)(*((_QWORD *)a2 + 59) + 320LL) = 0LL;
        }
      }
    }
  }
  else
  {
    CancelInputState(a2, 0);
  }
  v11 = 1;
  v12 = tagQ::CheckTransferState((__int64)this, (__int64)a2, 120, a4) - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      tagQ::LockFocusWnd(this, *(_QWORD *)(*((_QWORD *)a2 + 59) + 120LL), 0LL);
      tagQ::UnlockFocusWnd(*((tagQ **)a2 + 59));
    }
  }
  else
  {
    CancelInputState(a2, 1u);
  }
  ClearDelegationCapture(*((_QWORD *)a2 + 59));
  ClearDelegationCapture((__int64)this);
  v13 = tagQ::CheckTransferState((__int64)this, (__int64)a2, 112, a4) - 1;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      LockCaptureWindow(this, *(struct tagWND **)(*((_QWORD *)a2 + 59) + 112LL));
      UnlockCaptureWindow(*((_QWORD *)a2 + 59), v14);
      EditionUpdateRawMouseMode((__int64)this, v15);
      v16 = *((_DWORD *)this + 103);
      *((_DWORD *)this + 39) = *(_DWORD *)(*((_QWORD *)a2 + 59) + 156LL);
      *((_DWORD *)this + 103) = v16 ^ (*(_DWORD *)(*((_QWORD *)a2 + 59) + 412LL) ^ v16) & 0x100000;
    }
  }
  else
  {
    CancelInputState(a2, 2u);
  }
  v17 = tagQ::CheckTransferState((__int64)this, (__int64)a2, 136, a4) - 1;
  if ( v17 )
  {
    if ( v17 != 1 )
      goto LABEL_25;
    v36[0] = (char *)this + 136;
    v19 = *(_QWORD *)(*((_QWORD *)a2 + 59) + 136LL);
    goto LABEL_24;
  }
  v18 = *((_QWORD *)this + 16);
  if ( v18 )
  {
    if ( *((_QWORD *)this + 17) )
    {
      v19 = *(_QWORD *)(*((_QWORD *)a2 + 59) + 136LL);
      if ( v19 )
      {
        if ( *(_QWORD *)(v18 + 88) == v19 )
        {
          v36[0] = (char *)this + 136;
LABEL_24:
          v36[1] = v19;
          HMAssignmentLock(v36, 0LL);
          HMAssignmentUnlock(*((_QWORD *)a2 + 59) + 136LL);
        }
      }
    }
  }
LABEL_25:
  v20 = *((_QWORD *)a2 + 59);
  if ( a2 == *(struct tagTHREADINFO **)(v20 + 72) )
  {
    *((_DWORD *)this + 103) ^= (*(_DWORD *)(v20 + 412) ^ *((_DWORD *)this + 103)) & 0xFFEFFFFF;
    if ( !(unsigned int)IsInsideMenuLoop((__int64)a2) )
    {
      v18 = (unsigned int)v18 & 0xFFFFFFBF;
      *((_DWORD *)this + 103) = v18;
    }
    v20 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v11 = 0;
    }
    v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v22 = *(_QWORD *)(*((_QWORD *)a2 + 59) + 72LL);
      v23 = (unsigned __int8)PtiCurrent(*(__int64 *)&WPP_GLOBAL_Control, v18);
      v24 = *((_QWORD *)a2 + 59);
      v25 = v23;
      UserSessionState = W32GetUserSessionState(v27, v26);
      LOBYTE(v29) = v21;
      LOBYTE(v30) = v11;
      WPP_RECORDER_AND_TRACE_SF_qqq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v30,
        v29,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        18,
        43,
        (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
        v24,
        v25,
        v22);
    }
    *(_QWORD *)(*((_QWORD *)a2 + 59) + 72LL) = 0LL;
  }
  v31 = *(_QWORD *)(W32GetUserSessionState(v20, v18) + 36256);
  if ( v31 && a2 == *(struct tagTHREADINFO **)(v31 + 16) )
    LockQCursor(this, *(struct tagCURSOR **)(*((_QWORD *)a2 + 59) + 400LL));
  *((_DWORD *)this + 102) += *((_DWORD *)a2 + 198);
  *((_QWORD *)this + 12) = a2;
  *((_QWORD *)this + 13) = a2;
  v32 = *(_DWORD *)(*((_QWORD *)a2 + 58) + 864LL);
  if ( *((_DWORD *)this + 112) < v32 )
  {
    *(_QWORD *)((char *)this + 452) = 0LL;
    *((_DWORD *)this + 112) = v32;
  }
  v33 = tagTHREADINFO::AssignQueue(a2, this);
  v34 = v33;
  if ( v33 != a3 )
  {
    v35 = (struct tagQMSG *)*((_QWORD *)v33 + 3);
    *((_QWORD *)v33 + 3) = 0LL;
    *((_QWORD *)v33 + 4) = 0LL;
    *((_QWORD *)v33 + 7) = 0LL;
    *((_DWORD *)v33 + 10) = 0;
    RedistributeInput(v35, v33, 0LL);
    zzzDestroyQueue(v34, a2);
  }
}
