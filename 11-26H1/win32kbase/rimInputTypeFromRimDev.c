/*
 * XREFs of rimInputTypeFromRimDev @ 0x1401FE69C
 * Callers:
 *     RIMIDEIsCompatibleDevice @ 0x140209508 (RIMIDEIsCompatibleDevice.c)
 * Callees:
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimInputTypeFromRimDev(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rcx
  int v4; // r8d

  v1 = *(_DWORD *)(a1 + 48);
  switch ( v1 )
  {
    case 0:
      return 1LL;
    case 1:
      return 2LL;
    case 2:
      if ( (*(_DWORD *)(a1 + 184) & 0x80u) == 0 )
        return 32LL;
      if ( (unsigned int)RIMIsPenPointerDevice(*(_QWORD *)(a1 + 456)) )
        return (unsigned int)(v4 + 2);
      if ( *(_DWORD *)(v3 + 24) == 7 )
        return 8LL;
      if ( (unsigned int)RIMIsTouchPointerDevice(v3) )
        return 16LL;
      break;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 547);
  return 0LL;
}
