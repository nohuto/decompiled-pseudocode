/*
 * XREFs of RtlpTimeFieldsToTime @ 0x1404522F8
 * Callers:
 *     HalQueryRealTimeClock @ 0x140451480 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x1404522E0 (RtlTimeFieldsToTime.c)
 *     HalEfiGetTime @ 0x140533554 (HalEfiGetTime.c)
 *     HalSetRealTimeClock @ 0x140578300 (HalSetRealTimeClock.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x140594734 (HalpCheckWakeupTimeAndAdjust.c)
 *     GetBootSystemTime @ 0x140CAA5C4 (GetBootSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     SeMakeAnonymousLogonToken @ 0x140CDD2F0 (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140CDD570 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140CDD7D0 (SeMakeSystemToken.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x14045239C (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 */

char __fastcall RtlpTimeFieldsToTime(__int64 a1, __int64 *a2)
{
  _KPROCESS *Process; // rbx
  unsigned int SignalState; // esi
  __int64 v5; // rax
  __int64 i; // r8
  __int64 v8; // rdx
  __int64 v9; // rdx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  Process = ExpSysDbgLock.ApcState.Process;
  v11 = 0LL;
  if ( !ExpSysDbgLock.ApcState.Process || !ExpSysDbgLock.ApcState.Process->Header.Lock )
    return ((__int64 (*)(void))RtlpTimeFieldsToTimeNoLeapSeconds)();
  SignalState = ExpSysDbgLock.ApcState.Process->Header.SignalState;
  _InterlockedOr(v10, 0);
  if ( !(unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(a1, &v11) )
    return 0;
  v5 = v11;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= SignalState )
      goto LABEL_6;
    v8 = *((_QWORD *)&Process->Header.WaitListHead.Flink + i);
    if ( v8 < 0 )
      break;
    if ( v5 < v8 + 10000000 )
    {
      if ( v5 < v8 )
        goto LABEL_6;
      v5 = 2 * v5 - v8;
    }
    else
    {
      v5 += 10000000LL;
    }
LABEL_16:
    ;
  }
  v9 = v8 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v5 >= v9 + 10000000 )
  {
    v5 -= 10000000LL;
    goto LABEL_16;
  }
  if ( v5 < v9 )
  {
LABEL_6:
    *a2 = v5;
    return 1;
  }
  return 0;
}
