/*
 * XREFs of PopPowerRequestNotifyTtmSessionInitialized @ 0x140B5FE6C
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1404E8960 (PopPowerRequestUnrevokeRequests.c)
 *     TtmNotifySessionPowerRequestPresent @ 0x1407EC118 (TtmNotifySessionPowerRequestPresent.c)
 */

__int64 __fastcall PopPowerRequestNotifyTtmSessionInitialized(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  _KTHREAD_WPS_FEEDBACK *i; // rbx
  int FeedbackCycles; // r8d
  __int64 v6; // r9
  int v8; // [rsp+28h] [rbp-20h]

  PopAcquireRwLockExclusive(stru_140F12EA0.TracingPrivate, a2, a3, a4);
  for ( i = stru_140F12EA0.WpsFeedback;
        i != (_KTHREAD_WPS_FEEDBACK *)&stru_140F12EA0.WpsFeedback;
        i = (_KTHREAD_WPS_FEEDBACK *)i->FeedbackStartTime )
  {
    FeedbackCycles = i[3].FeedbackCycles;
    if ( FeedbackCycles )
    {
      v6 = *(_QWORD *)&i[3].InvalidFeedbackCount;
      if ( v6 )
        TtmNotifySessionPowerRequestPresent(
          i->InvalidFeedbackCount,
          HIDWORD(i[1].FeedbackStartTime),
          FeedbackCycles,
          v6,
          *(_QWORD *)&i[3].HigherPerfClassFeedbackCount,
          v8,
          0);
    }
  }
  PopPowerRequestUnrevokeRequests(1);
  return PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
}
