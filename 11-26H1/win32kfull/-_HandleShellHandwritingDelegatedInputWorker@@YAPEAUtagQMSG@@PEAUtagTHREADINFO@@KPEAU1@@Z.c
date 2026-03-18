/*
 * XREFs of ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1401E9238
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     ?_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1401E9140 (-_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?ShellHandwritingDelegationHandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1401E93EC (-ShellHandwritingDelegationHandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1401E94B4 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x14025E4B0 (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 */

struct tagQMSG *__fastcall _HandleShellHandwritingDelegatedInputWorker(
        struct tagTHREADINFO *a1,
        unsigned int a2,
        struct tagQMSG *a3)
{
  __int64 v3; // r15
  char v7; // si
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  struct tagTHREADINFO *v13; // rdx
  bool v15; // bp
  __int64 v16; // rbx
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  _BYTE v20[8]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v21; // [rsp+58h] [rbp-20h]

  v3 = *(_QWORD *)a3;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v20);
  if ( (*((_DWORD *)a3 + 25) & 0x100) == 0 )
  {
    InputTraceLogging::DManip::ShellHandwritingDelegationHandleDelegatedInput(a3, a2);
    v7 = 1;
    if ( a2 == 1 )
    {
      v8 = *((_DWORD *)a3 + 25);
      if ( (v8 & 0x20) == 0 )
        goto LABEL_10;
      v9 = *((_QWORD *)a3 + 2);
      *((_DWORD *)a3 + 25) = v8 & 0xFFFFFF9F | 0x40;
      v11 = HMValidateHandleNoSecure(v9, 1);
      if ( v11 )
      {
        v12 = *((_DWORD *)a3 + 25);
        if ( (v12 & 0x200) != 0 )
        {
          *((_QWORD *)a3 + 2) = 0LL;
          *((_DWORD *)a3 + 25) = v12 & 0xFFFFFDFF;
        }
        v13 = *(struct tagTHREADINFO **)(v11 + 264);
        if ( !v13 )
          v13 = *(struct tagTHREADINFO **)(v11 + 16);
        _ShellHandwritingDelegationReassignInputMessage(a1, v13, a3);
        goto LABEL_10;
      }
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v7 = 0;
      }
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = *((_QWORD *)a3 + 2);
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        LOBYTE(v18) = v15;
        LOBYTE(v19) = v7;
        WPP_RECORDER_AND_TRACE_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v19,
          v18,
          *(_QWORD *)(UserSessionState + 69152),
          3,
          18,
          16,
          (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
          v16,
          (char)a3);
      }
    }
    else if ( a2 != 2 )
    {
      *((_DWORD *)a3 + 25) |= 0x10u;
      goto LABEL_10;
    }
    _AttemptToCoalesceOrDestroyMessage(a1, a3);
LABEL_10:
    if ( v20[0] )
      --*(_DWORD *)(v21 + 28);
    return (struct tagQMSG *)v3;
  }
  if ( v20[0] )
    --*(_DWORD *)(v21 + 28);
  return (struct tagQMSG *)v3;
}
