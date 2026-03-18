/*
 * XREFs of rimCopyInstancePathFromRimDev @ 0x1401D77A8
 * Callers:
 *     RIMGetDevicePropertiesLockfree @ 0x14002C3C0 (RIMGetDevicePropertiesLockfree.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall rimCopyInstancePathFromRimDev(_WORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax

  memmove(a1, *(const void **)(a2 + 200), *(unsigned __int16 *)(a2 + 192));
  if ( *a1 != 92 || a1[1] != 63 || a1[2] != 63 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3824);
  a1[1] = 92;
  result = (unsigned int)(a3 - 1);
  a1[result] = 0;
  return result;
}
