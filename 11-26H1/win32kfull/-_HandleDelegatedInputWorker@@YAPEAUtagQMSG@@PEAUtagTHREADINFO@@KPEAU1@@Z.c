/*
 * XREFs of ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1400951E4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x140094164 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140094B10 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x140095430 (-HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     DelQEntry @ 0x140095C20 (DelQEntry.c)
 *     IsPointerInputMessage @ 0x1400969D0 (IsPointerInputMessage.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140096A20 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x140096C84 (DelegateReleasePointerMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

struct tagQMSG *__fastcall _HandleDelegatedInputWorker(struct tagTHREADINFO *a1, unsigned int a2, struct tagQMSG *a3)
{
  __int64 v3; // r15
  char v7; // si
  __int64 v8; // rdx
  __int64 v9; // r13
  struct tagQMSG *v10; // r12
  char v11; // r15
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  _BYTE v20[8]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v21; // [rsp+58h] [rbp-30h]
  __int64 v22; // [rsp+A0h] [rbp+18h]

  v3 = *(_QWORD *)a3;
  v22 = *(_QWORD *)a3;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v20);
  if ( (*((_DWORD *)a3 + 25) & 0x100) == 0 )
  {
    EtwTraceBeginDelegatedInputWorker(a3, a2);
    InputTraceLogging::DManip::HandleDelegatedInput(a3, a2);
    v7 = 1;
    if ( a2 == 1 )
    {
      v13 = *((_DWORD *)a3 + 25);
      if ( (v13 & 0x20) != 0 )
      {
        v14 = *((_QWORD *)a3 + 2);
        *((_DWORD *)a3 + 25) = v13 & 0xFFFFFF9F | 0x40;
        v15 = HMValidateHandleNoSecure(v14, 1);
        if ( v15 )
        {
          v16 = *((_DWORD *)a3 + 25);
          if ( (v16 & 0x200) != 0 )
          {
            *((_QWORD *)a3 + 2) = 0LL;
            *((_DWORD *)a3 + 25) = v16 & 0xFFFFFDFF;
          }
          ReassignInputMessage(a1, *(struct tagTHREADINFO **)(v15 + 16), a3);
          goto LABEL_17;
        }
        goto LABEL_4;
      }
    }
    else
    {
      if ( a2 == 2 )
      {
LABEL_4:
        if ( !(unsigned int)IsPointerInputMessage(*((unsigned int *)a3 + 6))
          || !(unsigned int)DelegateReleasePointerMessage(a1, a3) )
        {
          CleanEventMessage(a3);
          DelQEntry(*((_QWORD *)a1 + 58) + 24LL, a3, 1LL);
        }
        v9 = *((_QWORD *)a1 + 58);
        v10 = *(struct tagQMSG **)(v9 + 88);
        if ( v10 == a3 )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
            || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            v11 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || !*((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            v7 = 0;
          }
          if ( v11 || v7 )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
            LOBYTE(v18) = v7;
            LOBYTE(v19) = v11;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v19,
              v18,
              *(_QWORD *)(UserSessionState + 69152),
              5,
              18,
              14,
              (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
              v9,
              (char)v10);
          }
          v3 = v22;
          *(_QWORD *)(*((_QWORD *)a1 + 58) + 88LL) = 0LL;
        }
        goto LABEL_17;
      }
      *((_DWORD *)a3 + 25) |= 0x10u;
    }
LABEL_17:
    EtwTraceEndDelegatedInputWorker(a3, a2);
    if ( v20[0] )
      --*(_DWORD *)(v21 + 28);
    return (struct tagQMSG *)v3;
  }
  if ( v20[0] )
    --*(_DWORD *)(v21 + 28);
  return (struct tagQMSG *)v3;
}
