/*
 * XREFs of ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1401E94B4
 * Callers:
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1401E9238 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@_N@Z @ 0x1400948E4 (-FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@_N@Z.c)
 *     DelQEntry @ 0x140095C20 (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x140095E60 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     IsPointerInputMessage @ 0x1400969D0 (IsPointerInputMessage.c)
 *     DelegateCoalescePointerMessage @ 0x140096CE4 (DelegateCoalescePointerMessage.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1400976DC (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?ShellHandwritingDelegationReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1401E97C4 (-ShellHandwritingDelegationReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     DelegateChainingResetAndCoalescePointerMessage @ 0x1401E9884 (DelegateChainingResetAndCoalescePointerMessage.c)
 */

void __fastcall _ShellHandwritingDelegationReassignInputMessage(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        struct tagQMSG *a3)
{
  char v4; // r15
  int v5; // r12d
  __int64 v8; // rbp
  char v9; // bl
  char v10; // di
  struct tagQMSG *MsgInsertionPoint; // rax
  __int64 v12; // rdx
  struct tagQMSG *v13; // rcx
  char v14; // r14
  __int64 v15; // rax
  BOOL v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  __int64 v23; // [rsp+20h] [rbp-88h]
  __int64 v24; // [rsp+28h] [rbp-80h]
  struct tagQMSG *v25; // [rsp+B0h] [rbp+8h]
  __int64 v26; // [rsp+B8h] [rbp+10h]

  v4 = 1;
  v5 = (*((_DWORD *)a2 + 340) >> 13) & 1;
  InputTraceLogging::DManip::ShellHandwritingDelegationReassignMessage(a3);
  v8 = *((_QWORD *)a2 + 58);
  DelQEntry(*((_QWORD *)a1 + 58) + 24LL, (__int64)a3, 0);
  v26 = *((_QWORD *)a1 + 58);
  v9 = 0;
  v25 = *(struct tagQMSG **)(v26 + 88);
  if ( v25 == a3 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
      || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v10 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 1;
    if ( v10 || v9 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v21) = v9;
      LOBYTE(v22) = v10;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        18,
        12,
        (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
        v26,
        (char)v25);
    }
    *(_QWORD *)(*((_QWORD *)a1 + 58) + 88LL) = 0LL;
  }
  *((_DWORD *)a3 + 25) &= 0xF7FFFFEF;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 13) = a2;
  MsgInsertionPoint = FindMsgInsertionPoint((struct tagQ *const)v8, a3, v5);
  v13 = MsgInsertionPoint;
  if ( MsgInsertionPoint )
  {
    v19 = (_QWORD *)*((_QWORD *)MsgInsertionPoint + 1);
    if ( v19 )
      *v19 = a3;
    else
      *(_QWORD *)(v8 + 24) = a3;
    *(_QWORD *)a3 = v13;
    *((_QWORD *)a3 + 1) = *((_QWORD *)v13 + 1);
    *((_QWORD *)v13 + 1) = a3;
  }
  else
  {
    if ( *(_QWORD *)(v8 + 24) )
    {
      **(_QWORD **)(v8 + 32) = a3;
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v8 + 32);
    }
    else
    {
      *(_QWORD *)(v8 + 24) = a3;
    }
    *(_QWORD *)(v8 + 32) = a3;
  }
  ++*(_DWORD *)(v8 + 40);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v4 = 0;
  }
  v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
    WPP_RECORDER_AND_TRACE_SF_qiqdd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v4,
      v14,
      *(_QWORD *)(v15 + 69152),
      v23,
      v24,
      0xDu,
      (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids);
  }
  v16 = IsPointerInputMessage(*((_DWORD *)a3 + 6));
  if ( !v5 )
  {
    if ( v16 && (unsigned int)DelegateCoalescePointerMessage((__int64)a2, 0LL, (__int64)a3) )
      return;
LABEL_29:
    WakeSomeone((struct tagQ *)v8, a2, *((_DWORD *)a3 + 6), a3);
    return;
  }
  if ( !v16 || !(unsigned int)DelegateChainingResetAndCoalescePointerMessage(v18, v17, a3) )
  {
    *((_DWORD *)a3 + 25) = *((_DWORD *)a3 + 25) & 0xFFFFFF9F | 0x20;
    goto LABEL_29;
  }
}
