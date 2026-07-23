/*
 * XREFs of PopPowerRequestNotificationsBegin @ 0x1407CC5E4
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1407DF428 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestAction @ 0x1407DF5DC (PopUmpoSendPowerRequestAction.c)
 *     PopUmpoSendPowerRequestCreate @ 0x140ADAD84 (PopUmpoSendPowerRequestCreate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140AEFCB4 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestNotificationsBegin(__int64 a1)
{
  _KTHREAD_WPS_FEEDBACK *WpsFeedback; // rbx
  __int64 v2; // r8
  int v3; // edi
  _BYTE *v4; // rsi

  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  WpsFeedback = stru_140F12EA0.WpsFeedback;
  LOBYTE(stru_140F12EA0.OtherTransferCount) = 1;
  while ( WpsFeedback != (_KTHREAD_WPS_FEEDBACK *)&stru_140F12EA0.WpsFeedback )
  {
    if ( LODWORD(WpsFeedback[3].FeedbackCycles) )
    {
      PopUmpoSendPowerRequestCreate(HIDWORD(WpsFeedback[1].FeedbackStartTime));
      v3 = 0;
      v4 = (char *)&WpsFeedback[4].HigherPerfClassFeedbackCount + 1;
      do
      {
        if ( *v4 )
        {
          LOBYTE(v2) = 1;
          PopUmpoSendPowerRequestAction(HIDWORD(WpsFeedback[1].FeedbackStartTime), (unsigned int)v3, v2);
        }
        ++v3;
        ++v4;
      }
      while ( v3 < 6 );
    }
    WpsFeedback = (_KTHREAD_WPS_FEEDBACK *)WpsFeedback->FeedbackStartTime;
  }
  return PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
}
