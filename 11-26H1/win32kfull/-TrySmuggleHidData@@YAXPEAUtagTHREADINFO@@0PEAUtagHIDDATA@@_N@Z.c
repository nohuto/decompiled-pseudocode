/*
 * XREFs of ?TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z @ 0x140262518
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140021BA8 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     _PostThreadMessageEx @ 0x1401D3210 (_PostThreadMessageEx.c)
 * Callees:
 *     ?FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x140028818 (-FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x1401E9D20 (-UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 *     ?SmuggleHidData@RawInput@InputTraceLogging@@SAXPEAX_NKK11@Z @ 0x140262668 (-SmuggleHidData@RawInput@InputTraceLogging@@SAXPEAX_NKK11@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall TrySmuggleHidData(union _SLIST_HEADER *a1, struct tagTHREADINFO *a2, struct tagHIDDATA *a3)
{
  struct tagTHREADINFO *v3; // rsi
  struct tagHIDDATA *v4; // rdi
  bool v7; // r13
  bool v8; // bl
  unsigned int ThreadId; // r12d
  unsigned int v10; // r15d

  v3 = (struct tagTHREADINFO *)*((_QWORD *)a3 + 2);
  v4 = a3;
  v7 = a2 == v3;
  v8 = 0;
  if ( v3 )
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v3);
  else
    ThreadId = 0;
  if ( a2 )
    v10 = (unsigned int)PsGetThreadId(*(PETHREAD *)a2);
  else
    v10 = 0;
  if ( a2 != v3 )
  {
    if ( (*((_DWORD *)v4 + 12) & 1) == 0 && a1 == (union _SLIST_HEADER *)v3 )
    {
      FlushPostedRawInput(a1);
      v4 = UnlinkHidData((struct tagTHREADINFO *)a1, v4, 0LL);
    }
    if ( v4 && (*((_DWORD *)v4 + 12) & 1) != 0 )
    {
      HMChangeOwnerThread(v4, a2);
      *((_DWORD *)v4 + 12) = *((_DWORD *)v4 + 12) & 0xFFFFFFFC | 2;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)a2 + 72, (PSLIST_ENTRY)v4 + 2);
      if ( (struct tagHIDDATA *)a1[71].Alignment == v4 )
        a1[71].Alignment = 0LL;
      v8 = 1;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3015LL);
    }
  }
  InputTraceLogging::RawInput::SmuggleHidData(v4, v7, ThreadId, v10, v8, 1);
}
