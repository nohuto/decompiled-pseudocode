/*
 * XREFs of ?Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z @ 0x14029723C
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140021BA8 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     _PostThreadMessageEx @ 0x1401D3210 (_PostThreadMessageEx.c)
 * Callees:
 *     ?SmuggleHidData@RawInput@InputTraceLogging@@SAXPEAX_NKK11@Z @ 0x140262668 (-SmuggleHidData@RawInput@InputTraceLogging@@SAXPEAX_NKK11@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall Old_TrySmuggleHidData(struct tagTHREADINFO *a1, struct tagHIDDATA *a2, bool a3)
{
  struct tagTHREADINFO *v3; // r14
  struct tagHIDDATA *v5; // rsi
  bool v7; // r13
  bool v8; // bl
  unsigned int ThreadId; // r15d
  unsigned int v10; // ebp
  int v11; // ecx

  v3 = (struct tagTHREADINFO *)*((_QWORD *)a2 + 2);
  v5 = a2;
  v7 = a1 == v3;
  v8 = 0;
  if ( v3 )
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v3);
  else
    ThreadId = 0;
  if ( a1 )
    v10 = (unsigned int)PsGetThreadId(*(PETHREAD *)a1);
  else
    v10 = 0;
  if ( a1 != v3 )
  {
    HMChangeOwnerThread(v5, a1);
    v11 = *((_DWORD *)v5 + 12) | 2;
    *((_DWORD *)v5 + 12) = v11;
    if ( (v11 & 1) != 0 )
    {
      *((_DWORD *)v5 + 12) = v11 & 0xFFFFFFFE;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)a1 + 72, (PSLIST_ENTRY)v5 + 2);
      v8 = 1;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 2968);
    }
  }
  LOBYTE(a2) = v7;
  InputTraceLogging::RawInput::SmuggleHidData(v5, (__int64)a2, ThreadId, v10, v8, a3);
}
