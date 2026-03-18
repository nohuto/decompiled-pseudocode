/*
 * XREFs of ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140094B10
 * Callers:
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x140054C28 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1400951E4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@_N@Z @ 0x1400948E4 (-FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@_N@Z.c)
 *     ?ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1400949E0 (-ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x140095C20 (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x140095E60 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     IsPointerInputMessage @ 0x1400969D0 (IsPointerInputMessage.c)
 *     DelegateCoalescePointerMessage @ 0x140096CE4 (DelegateCoalescePointerMessage.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1400976DC (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     GetAppCompatFlags2QuadWord @ 0x1400A8130 (GetAppCompatFlags2QuadWord.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
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
  char v14; // r14
  bool v15; // r15
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  _QWORD *v19; // rax
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rdx

  InputTraceLogging::DManip::ReassignMessage(a3);
  v6 = *((_QWORD *)a2 + 58);
  DelQEntry(*((_QWORD *)a1 + 58) + 24LL, a3, 0LL);
  v7 = *((_QWORD *)a1 + 58);
  v8 = 0;
  v9 = *(struct tagQMSG **)(v7 + 88);
  if ( v9 == a3 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
      || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v10 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      v8 = 1;
    if ( v10 || v8 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v21) = v8;
      LOBYTE(v22) = v10;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        18,
        10,
        (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
        v7,
        (char)v9);
    }
    *(_QWORD *)(*((_QWORD *)a1 + 58) + 88LL) = 0LL;
  }
  *((_DWORD *)a3 + 25) &= ~0x10u;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 13) = a2;
  MsgInsertionPoint = FindMsgInsertionPoint((struct tagQ *const)v6, a3, 0);
  v13 = MsgInsertionPoint;
  if ( MsgInsertionPoint )
  {
    v19 = (_QWORD *)*((_QWORD *)MsgInsertionPoint + 1);
    if ( v19 )
      *v19 = a3;
    else
      *(_QWORD *)(v6 + 24) = a3;
    *(_QWORD *)a3 = v13;
    *((_QWORD *)a3 + 1) = *((_QWORD *)v13 + 1);
    *((_QWORD *)v13 + 1) = a3;
  }
  else
  {
    if ( *(_QWORD *)(v6 + 24) )
    {
      **(_QWORD **)(v6 + 32) = a3;
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v6 + 32);
    }
    else
    {
      *(_QWORD *)(v6 + 24) = a3;
    }
    *(_QWORD *)(v6 + 32) = a3;
  }
  ++*(_DWORD *)(v6 + 40);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
    || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v14 = 0;
  }
  v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
    LOBYTE(v17) = v15;
    LOBYTE(v18) = v14;
    WPP_RECORDER_AND_TRACE_SF_qiqdd(*((_QWORD *)WPP_GLOBAL_Control + 3), v18, v17, *(_QWORD *)(v16 + 69152));
  }
  if ( !(unsigned int)IsPointerInputMessage(*((unsigned int *)a3 + 6))
    || !(unsigned int)DelegateCoalescePointerMessage(a2, 0LL, a3) )
  {
    if ( (GetAppCompatFlags2QuadWord(a2) & 0x2000000000000LL) != 0 && *((_DWORD *)a3 + 6) == 512 )
    {
      v23 = *((_DWORD *)a3 + 25);
      if ( (v23 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a2 + 58) + 144LL) )
        {
          v24 = *((_QWORD *)a3 + 1);
          if ( v24 )
          {
            if ( *(_DWORD *)(v24 + 24) == 512
              && *(_QWORD *)(v24 + 16) == *((_QWORD *)a3 + 2)
              && *(_QWORD *)(v6 + 88) != v24
              && (v23 & 0x100) == 0 )
            {
              DelQEntry(v6 + 24, v24, 1LL);
            }
          }
        }
      }
    }
    WakeSomeone((struct tagQ *)v6, a2, *((_DWORD *)a3 + 6), a3);
  }
}
