/*
 * XREFs of ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140065FC8
 * Callers:
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x14006667C (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x14011F7BC (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 * Callees:
 *     GetAppCompatFlags2QuadWord @ 0x140034EB0 (GetAppCompatFlags2QuadWord.c)
 *     DelQEntry @ 0x140066E80 (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1400670A0 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     IsPointerInputMessage @ 0x140067230 (IsPointerInputMessage.c)
 *     DelegateCoalescePointerMessage @ 0x1400675CC (DelegateCoalescePointerMessage.c)
 *     ?ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1400676B0 (-ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1400681AC (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@_N@Z @ 0x14027CBFC (-FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@_N@Z.c)
 */

void __fastcall ReassignInputMessage(struct tagTHREADINFO *a1, struct tagTHREADINFO *a2, struct tagQMSG *a3)
{
  __int64 v6; // rbp
  __int64 v7; // r15
  char v8; // bl
  struct tagQMSG *v9; // r12
  char v10; // di
  struct tagQMSG *MsgInsertionPoint; // rax
  __int64 v12; // rdx
  struct tagQMSG *v13; // rcx
  _QWORD **v14; // rcx
  int v15; // r12d
  char v16; // r14
  bool v17; // r15
  int v18; // ebx
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 UserSessionState; // rax
  int v26; // r8d
  int v27; // edx
  int v28; // ecx
  __int64 v29; // rdx
  int v30; // [rsp+20h] [rbp-78h]
  int v31; // [rsp+28h] [rbp-70h]

  InputTraceLogging::DManip::ReassignMessage(a3);
  v6 = *((_QWORD *)a2 + 59);
  DelQEntry(*((_QWORD *)a1 + 59) + 24LL, a3, 0LL);
  v7 = *((_QWORD *)a1 + 59);
  v8 = 0;
  v9 = *(struct tagQMSG **)(v7 + 88);
  if ( v9 == a3 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
      || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v10 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
      && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v8 = 1;
    }
    if ( v10 || v8 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v26) = v8;
      LOBYTE(v27) = v10;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v27,
        v26,
        *(_QWORD *)(UserSessionState + 69160),
        5,
        18,
        10,
        (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
        v7,
        (char)v9);
    }
    *(_QWORD *)(*((_QWORD *)a1 + 59) + 88LL) = 0LL;
  }
  *((_DWORD *)a3 + 25) &= ~0x10u;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 13) = a2;
  MsgInsertionPoint = FindMsgInsertionPoint((struct tagQ *const)v6, a3, 0);
  v13 = MsgInsertionPoint;
  if ( MsgInsertionPoint )
  {
    v24 = (_QWORD *)*((_QWORD *)MsgInsertionPoint + 1);
    if ( v24 )
      *v24 = a3;
    else
      *(_QWORD *)(v6 + 24) = a3;
    *(_QWORD *)a3 = v13;
    *((_QWORD *)a3 + 1) = *((_QWORD *)v13 + 1);
    *((_QWORD *)v13 + 1) = a3;
  }
  else
  {
    v14 = (_QWORD **)(v6 + 32);
    if ( *(_QWORD *)(v6 + 24) )
    {
      **v14 = a3;
      *((_QWORD *)a3 + 1) = *v14;
    }
    else
    {
      *(_QWORD *)(v6 + 24) = a3;
    }
    *v14 = a3;
  }
  v15 = *(_DWORD *)(v6 + 40) + 1;
  *(_DWORD *)(v6 + 40) = v15;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
    || (v16 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v16 = 0;
  }
  v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v18 = *(_DWORD *)(v6 + 44);
    v19 = *((_QWORD *)a3 + 18);
    v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
    LOBYTE(v21) = v17;
    LOBYTE(v22) = v16;
    WPP_RECORDER_AND_TRACE_SF_qiqdd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v22,
      v21,
      *(_QWORD *)(v20 + 69160),
      v30,
      v31,
      11,
      (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
      (char)a3,
      v19,
      v6 + 24,
      v18,
      v15);
  }
  if ( !(unsigned int)IsPointerInputMessage(*((unsigned int *)a3 + 6))
    || !(unsigned int)DelegateCoalescePointerMessage(a2, 0LL, a3) )
  {
    if ( (GetAppCompatFlags2QuadWord((__int64)a2, v23) & 0x2000000000000LL) != 0 && *((_DWORD *)a3 + 6) == 512 )
    {
      v28 = *((_DWORD *)a3 + 25);
      if ( (v28 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a2 + 59) + 144LL) )
        {
          v29 = *((_QWORD *)a3 + 1);
          if ( v29 )
          {
            if ( *(_DWORD *)(v29 + 24) == 512
              && *(_QWORD *)(v29 + 16) == *((_QWORD *)a3 + 2)
              && *(_QWORD *)(v6 + 88) != v29
              && (v28 & 0x100) == 0 )
            {
              DelQEntry(v6 + 24, v29, 1LL);
            }
          }
        }
      }
    }
    WakeSomeone((struct tagQ *)v6, a2, *((_DWORD *)a3 + 6), a3);
  }
}
