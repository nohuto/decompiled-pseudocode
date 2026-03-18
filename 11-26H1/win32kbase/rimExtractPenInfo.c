/*
 * XREFs of rimExtractPenInfo @ 0x1400F8FD0
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1400F65C8 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     rimExtractData @ 0x1400F874C (rimExtractData.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimExtractPenInfo(__int64 a1, int a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( !(unsigned int)RIMIsPenPointerDevice(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3154LL);
  a3[43] = rimExtractData(a1, 13, 65, 2, a3 + 41);
  a3[44] = rimExtractData(a1, 13, 61, 4, a3 + 41);
  result = rimExtractData(a1, 13, 62, 8, a3 + 41);
  a3[45] = result;
  if ( (*(_DWORD *)(a1 + 368) & 0x4000) != 0 )
  {
    result = rimExtractData(a1, 13, 48, 1, a3 + 41);
    a3[42] = result;
  }
  else if ( a2 )
  {
    a3[41] |= 1u;
    a3[42] = 512;
  }
  return result;
}
