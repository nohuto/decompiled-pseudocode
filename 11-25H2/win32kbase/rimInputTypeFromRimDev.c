/*
 * XREFs of rimInputTypeFromRimDev @ 0x1401D73E4
 * Callers:
 *     RIMIDEIsCompatibleDevice @ 0x1401EA420 (RIMIDEIsCompatibleDevice.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimInputTypeFromRimDev(__int64 a1)
{
  int v1; // eax
  int v3; // edx

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
      v3 = *(_DWORD *)(*(_QWORD *)(a1 + 456) + 24LL);
      if ( (unsigned int)(v3 - 5) <= 1 )
        return 4LL;
      if ( v3 == 7 )
        return 8LL;
      if ( (unsigned int)(v3 - 1) <= 3 )
        return 16LL;
      break;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 547);
  return 0LL;
}
