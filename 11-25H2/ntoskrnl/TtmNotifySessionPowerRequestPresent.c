/*
 * XREFs of TtmNotifySessionPowerRequestPresent @ 0x14075A368
 * Callers:
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x140AB3E78 (PopPowerRequestNotifyTtmSessionInitialized.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140AB71C8 (PopPowerRequestNotifyUserSessionAttributed.c)
 * Callees:
 *     TtmpInsertPowerRequestToSession @ 0x14075AE78 (TtmpInsertPowerRequestToSession.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x14075B7B4 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmiLogSessionPowerRequestAcknowledged @ 0x14075E6AC (TtmiLogSessionPowerRequestAcknowledged.c)
 */

__int64 __fastcall TtmNotifySessionPowerRequestPresent(int a1, int a2, int a3, int a4, __int64 a5, int a6, char a7)
{
  if ( a7 )
    TtmpUpdatePowerRequestAttribute(a1, a2, a3, a4, a5);
  else
    TtmpInsertPowerRequestToSession(a1, a2, a3, a4, a5);
  return TtmiLogSessionPowerRequestAcknowledged(a1, a2, a3, a4, a5);
}
