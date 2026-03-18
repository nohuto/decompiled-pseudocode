/*
 * XREFs of PopIsMostRecentWakeAttended @ 0x140C0C3F8
 * Callers:
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1407D6B00 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopGetMostRecentWakeInfo @ 0x1404F9218 (PopGetMostRecentWakeInfo.c)
 *     PopWakeInfoDereference @ 0x1404FE7D4 (PopWakeInfoDereference.c)
 */

char PopIsMostRecentWakeAttended()
{
  char v0; // bl
  __int64 MostRecentWakeInfo; // rax

  v0 = 1;
  MostRecentWakeInfo = PopGetMostRecentWakeInfo();
  if ( MostRecentWakeInfo )
  {
    v0 = *(_BYTE *)(MostRecentWakeInfo + 80);
    PopWakeInfoDereference(MostRecentWakeInfo);
  }
  return v0;
}
