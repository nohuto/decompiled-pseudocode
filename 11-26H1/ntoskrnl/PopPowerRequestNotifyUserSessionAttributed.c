/*
 * XREFs of PopPowerRequestNotifyUserSessionAttributed @ 0x140B67154
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     TtmNotifySessionPowerRequestPresent @ 0x1407EC118 (TtmNotifySessionPowerRequestPresent.c)
 *     TtmIsEnabled @ 0x1409FA8A4 (TtmIsEnabled.c)
 */

char __fastcall PopPowerRequestNotifyUserSessionAttributed(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _KTHREAD_WPS_FEEDBACK *v5; // rbx
  char v6; // di
  _KTHREAD_WPS_FEEDBACK *i; // rax
  char result; // al
  int v11; // [rsp+28h] [rbp-20h]

  v5 = 0LL;
  v6 = 0;
  PopAcquireRwLockExclusive(stru_140F12EA0.TracingPrivate, a2, a3, a4);
  for ( i = stru_140F12EA0.WpsFeedback;
        i != (_KTHREAD_WPS_FEEDBACK *)&stru_140F12EA0.WpsFeedback;
        i = (_KTHREAD_WPS_FEEDBACK *)i->FeedbackStartTime )
  {
    v5 = i;
    if ( LODWORD(i[3].FeedbackCycles) == a1 && *(_QWORD *)&i[3].InvalidFeedbackCount == a2 )
    {
      *(_QWORD *)&i[3].HigherPerfClassFeedbackCount = a3;
      v6 = 1;
      break;
    }
  }
  result = PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
  if ( v6 )
  {
    result = TtmIsEnabled();
    if ( result )
      return TtmNotifySessionPowerRequestPresent(
               v5->InvalidFeedbackCount,
               HIDWORD(v5[1].FeedbackStartTime),
               v5[3].FeedbackCycles,
               *(_QWORD *)&v5[3].InvalidFeedbackCount,
               *(_QWORD *)&v5[3].HigherPerfClassFeedbackCount,
               v11,
               1);
  }
  return result;
}
