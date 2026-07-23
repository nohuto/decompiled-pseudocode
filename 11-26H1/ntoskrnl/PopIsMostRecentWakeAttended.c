/*
 * XREFs of PopIsMostRecentWakeAttended @ 0x140C12608
 * Callers:
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1407D9C70 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopGetMostRecentWakeInfo @ 0x1404F2828 (PopGetMostRecentWakeInfo.c)
 *     PopWakeInfoDereference @ 0x1404F7D84 (PopWakeInfoDereference.c)
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
