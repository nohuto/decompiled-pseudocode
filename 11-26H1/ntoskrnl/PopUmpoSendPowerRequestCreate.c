/*
 * XREFs of PopUmpoSendPowerRequestCreate @ 0x140ADAD84
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140425F6C (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestNotificationsBegin @ 0x1407CC5E4 (PopPowerRequestNotificationsBegin.c)
 * Callees:
 *     PoStoreDiagnosticContext @ 0x140426240 (PoStoreDiagnosticContext.c)
 *     PopUmpoSendPowerMessage @ 0x140426614 (PopUmpoSendPowerMessage.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopUmpoSendPowerRequestCreate(int a1)
{
  _KTHREAD_WPS_FEEDBACK *i; // rcx
  unsigned __int64 v3; // rsi
  __int64 Pool2; // rax
  _DWORD *v5; // rbx
  _KTHREAD_WPS_FEEDBACK *j; // rcx
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  for ( i = stru_140F12EA0.WpsFeedback;
        i != (_KTHREAD_WPS_FEEDBACK *)&stru_140F12EA0.WpsFeedback;
        i = (_KTHREAD_WPS_FEEDBACK *)i->FeedbackStartTime )
  {
    if ( HIDWORD(i[1].FeedbackStartTime) == a1 )
    {
      if ( (unsigned int)PoStoreDiagnosticContext(i[3].FeedbackStartTime, 0LL, &v7) == -1073741789 )
      {
        v3 = v7;
        Pool2 = ExAllocatePool2(0x100uLL);
        v5 = (_DWORD *)Pool2;
        if ( Pool2 )
        {
          *(_DWORD *)Pool2 = 15;
          *(_DWORD *)(Pool2 + 8) = a1;
          for ( j = stru_140F12EA0.WpsFeedback;
                j != (_KTHREAD_WPS_FEEDBACK *)&stru_140F12EA0.WpsFeedback;
                j = (_KTHREAD_WPS_FEEDBACK *)j->FeedbackStartTime )
          {
            if ( HIDWORD(j[1].FeedbackStartTime) == a1 )
            {
              if ( (int)PoStoreDiagnosticContext(j[3].FeedbackStartTime, (unsigned __int64 *)(Pool2 + 16), &v7) >= 0 )
                PopUmpoSendPowerMessage(v5, v3 + 16, 0);
              break;
            }
          }
          ExFreePoolWithTag(v5, 0x6F706D55u);
        }
      }
      return;
    }
  }
}
