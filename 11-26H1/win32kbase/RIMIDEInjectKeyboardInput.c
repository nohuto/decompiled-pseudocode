/*
 * XREFs of RIMIDEInjectKeyboardInput @ 0x14020943C
 * Callers:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1401546A0 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMQueueKeyboardInput @ 0x1402098CC (RIMQueueKeyboardInput.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardInput(__int64 a1)
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
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2207);
    RIMLockExclusive(v1 + 760);
    v3 = RIMQueueKeyboardInput((struct RawInputManagerObject *)v1, (struct RIMDEV *)v2);
    RIMUnlockExclusive(v1 + 760);
  }
  RIMUnlockExclusive(v1 + 104);
  return v3;
}
