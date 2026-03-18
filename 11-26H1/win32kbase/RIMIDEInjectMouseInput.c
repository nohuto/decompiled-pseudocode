/*
 * XREFs of RIMIDEInjectMouseInput @ 0x140155A3C
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x140154EE8 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RIMQueueMouseInput @ 0x140155B0C (RIMQueueMouseInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2280LL);
    RIMLockExclusive(v1 + 760);
    v3 = RIMQueueMouseInput((struct RawInputManagerObject *)v1, (struct RIMDEV *)v2);
    RIMUnlockExclusive(v1 + 760);
  }
  RIMUnlockExclusive(v1 + 104);
  return v3;
}
