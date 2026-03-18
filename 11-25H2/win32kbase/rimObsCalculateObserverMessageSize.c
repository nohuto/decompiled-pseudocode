/*
 * XREFs of rimObsCalculateObserverMessageSize @ 0x1401F3384
 * Callers:
 *     rimObsPopInputMessage @ 0x14013C0D8 (rimObsPopInputMessage.c)
 *     rimObsCopyMessage @ 0x1401F3768 (rimObsCopyMessage.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimObsCalculateObserverMessageSize(_DWORD *a1)
{
  unsigned int v1; // ebx

  v1 = 48;
  if ( *a1 )
  {
    if ( *a1 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 142);
  }
  else
  {
    return (unsigned int)(a1[6] + 48);
  }
  return v1;
}
