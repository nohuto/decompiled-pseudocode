/*
 * XREFs of RIMIDEInjectMouseInput @ 0x1401EA358
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x140180DA4 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMQueueMouseInput @ 0x1401EAB30 (RIMQueueMouseInput.c)
 */

__int64 __fastcall RIMIDEInjectMouseInput(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  unsigned int v3; // edi

  v1 = *(_QWORD *)(a1 + 392);
  v2 = (a1 + 72) & -(__int64)(a1 != 0);
  RIMLockExclusive(v1 + 104);
  if ( *(_BYTE *)(v1 + 81) )
  {
    v3 = -1073741637;
  }
  else
  {
    if ( (*(_DWORD *)(v2 + 168) & 0x2000) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2291);
    RIMLockExclusive(v1 + 760);
    v3 = RIMQueueMouseInput((struct RawInputManagerObject *)v1, (struct RIMDEV *)v2);
    RIMUnlockExclusive(v1 + 760);
  }
  RIMUnlockExclusive(v1 + 104);
  return v3;
}
