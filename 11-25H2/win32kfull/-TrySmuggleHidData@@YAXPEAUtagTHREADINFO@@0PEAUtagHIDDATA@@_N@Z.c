/*
 * XREFs of ?TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z @ 0x140274EA8
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     _PostThreadMessageEx @ 0x1401AAC9C (_PostThreadMessageEx.c)
 * Callees:
 *     ?UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x14017F57C (-UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 *     ?SmuggleHidData@RawInput@InputTraceLogging@@SAXPEAX_NKK11@Z @ 0x14022BFA4 (-SmuggleHidData@RawInput@InputTraceLogging@@SAXPEAX_NKK11@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x140274548 (-FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall TrySmuggleHidData(union _SLIST_HEADER *a1, struct tagTHREADINFO *a2, struct tagHIDDATA *a3)
{
  struct tagTHREADINFO *v3; // rsi
  struct tagHIDDATA *v4; // rdi
  struct tagTHREADINFO *v5; // r14
  bool v7; // r13
  bool v8; // bl
  unsigned int ThreadId; // r12d
  unsigned int v10; // r15d
  __int64 v11; // r9

  v3 = (struct tagTHREADINFO *)*((_QWORD *)a3 + 2);
  v4 = a3;
  v5 = a2;
  v7 = a2 == v3;
  v8 = 0;
  if ( v3 )
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v3);
  else
    ThreadId = 0;
  if ( v5 )
    v10 = (unsigned int)PsGetThreadId(*(PETHREAD *)v5);
  else
    v10 = 0;
  if ( v5 != v3 )
  {
    if ( (*((_DWORD *)v4 + 12) & 1) == 0 && a1 == (union _SLIST_HEADER *)v3 )
    {
      FlushPostedRawInput(a1);
      v4 = UnlinkHidData((struct tagTHREADINFO *)a1, v4, 0LL, v11);
    }
    if ( v4 && (*((_DWORD *)v4 + 12) & 1) != 0 )
    {
      HMChangeOwnerThread(v4, v5);
      *((_DWORD *)v4 + 12) = *((_DWORD *)v4 + 12) & 0xFFFFFFFC | 2;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v5 + 72, (PSLIST_ENTRY)v4 + 2);
      if ( (struct tagHIDDATA *)a1[71].Region == v4 )
        a1[71].Region = 0LL;
      v8 = 1;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 3015);
    }
  }
  LOBYTE(a2) = v7;
  InputTraceLogging::RawInput::SmuggleHidData(v4, (__int64)a2, ThreadId, v10, v8, 1);
}
