/*
 * XREFs of rimObsCalculateObserverMessageSize @ 0x14020EE54
 * Callers:
 *     rimObsPopInputMessage @ 0x140177EAC (rimObsPopInputMessage.c)
 *     rimObsCopyMessage @ 0x14020F238 (rimObsCopyMessage.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimObsCalculateObserverMessageSize(_DWORD *a1)
{
  unsigned int v1; // ebx

  v1 = 48;
  if ( *a1 )
  {
    if ( *a1 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 142);
  }
  else
  {
    return (unsigned int)(a1[6] + 48);
  }
  return v1;
}
