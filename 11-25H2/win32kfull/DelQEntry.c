/*
 * XREFs of DelQEntry @ 0x140066E80
 * Callers:
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140063928 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140065FC8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x14006667C (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     FindQMsg @ 0x140066A10 (FindQMsg.c)
 *     DelegateCoalescePointerMessage @ 0x1400675CC (DelegateCoalescePointerMessage.c)
 *     FreeMessageList @ 0x140068600 (FreeMessageList.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x140138088 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x140169610 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x14018B600 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?CleanOutOldInputMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x140195764 (-CleanOutOldInputMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14019612C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     DestroyThreadsMessages @ 0x1401AC220 (DestroyThreadsMessages.c)
 *     SuspendThreadQueue @ 0x1401AD580 (SuspendThreadQueue.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1401C4F94 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1401D3590 (_anonymous_namespace_--RemoveEventMessage.c)
 *     EditionDelQEntry @ 0x1401F8990 (EditionDelQEntry.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x140225308 (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x140245110 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1400670A0 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     FreePointerMessageParams @ 0x140069664 (FreePointerMessageParams.c)
 *     IsPointerInputClientMessage @ 0x140143F90 (IsPointerInputClientMessage.c)
 */

__int64 __fastcall DelQEntry(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  bool v9; // bp
  bool v10; // r12
  __int64 UserSessionState; // rax
  __int64 v12; // rax

  v6 = (__int64 *)a2[1];
  if ( v6 )
    *v6 = *a2;
  v7 = *a2;
  if ( *a2 )
    *(_QWORD *)(v7 + 8) = a2[1];
  if ( *(__int64 **)a1 == a2 )
    *(_QWORD *)a1 = *a2;
  if ( *(__int64 **)(a1 + 8) == a2 )
    *(_QWORD *)(a1 + 8) = a2[1];
  result = *((unsigned int *)a2 + 25);
  if ( (result & 0x2000) == 0 && (result & 0x4000) == 0 && (result & 0x10000) == 0 )
  {
    --*(_DWORD *)(a1 + 16);
    v7 = *(_QWORD *)&WPP_GLOBAL_Control;
    v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      result = WPP_RECORDER_AND_TRACE_SF_qiqdd(
                 *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                 v9,
                 v10,
                 *(_QWORD *)(UserSessionState + 69160));
    }
  }
  if ( a2 == *(__int64 **)(a1 + 32) )
    *(_QWORD *)(a1 + 32) = 0LL;
  if ( a3 )
  {
    if ( (*((_DWORD *)a2 + 25) & 8) != 0
      && !*((_DWORD *)a2 + 24)
      && ((unsigned int)(*((_DWORD *)a2 + 6) - 577) <= 3 || (unsigned int)IsPointerInputClientMessage()) )
    {
      FreePointerMessageParams(a2);
    }
    v12 = W32GetUserSessionState(v7, a2);
    return Win32FreeToPagedLookasideList(*(_QWORD *)(v12 + 16872), a2);
  }
  return result;
}
