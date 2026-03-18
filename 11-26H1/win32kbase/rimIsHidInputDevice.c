/*
 * XREFs of rimIsHidInputDevice @ 0x1401426DC
 * Callers:
 *     RIMAllocateHidDesc @ 0x1401AE930 (RIMAllocateHidDesc.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimIsHidInputDevice(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = *(_DWORD *)(a1 + 48);
  v3 = 0;
  if ( v2 != 2 && v2 != 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2702LL);
  LOBYTE(v3) = *(_WORD *)(a2 + 44) != 0;
  return v3;
}
