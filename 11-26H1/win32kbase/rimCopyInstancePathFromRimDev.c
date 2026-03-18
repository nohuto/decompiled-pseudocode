/*
 * XREFs of rimCopyInstancePathFromRimDev @ 0x1401FE9EC
 * Callers:
 *     RIMGetDevicePropertiesLockfree @ 0x14016D560 (RIMGetDevicePropertiesLockfree.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall rimCopyInstancePathFromRimDev(_WORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax

  memmove(a1, *(const void **)(a2 + 200), *(unsigned __int16 *)(a2 + 192));
  if ( *a1 != 92 || a1[1] != 63 || a1[2] != 63 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 3784);
  a1[1] = 92;
  result = (unsigned int)(a3 - 1);
  a1[result] = 0;
  return result;
}
