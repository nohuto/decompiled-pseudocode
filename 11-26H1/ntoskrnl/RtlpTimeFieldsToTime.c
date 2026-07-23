/*
 * XREFs of RtlpTimeFieldsToTime @ 0x14044A428
 * Callers:
 *     HalQueryRealTimeClock @ 0x1404495B0 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x14044A410 (RtlTimeFieldsToTime.c)
 *     HalEfiGetTime @ 0x1405359D4 (HalEfiGetTime.c)
 *     HalSetRealTimeClock @ 0x14057A830 (HalSetRealTimeClock.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x140596EB4 (HalpCheckWakeupTimeAndAdjust.c)
 *     GetBootSystemTime @ 0x140CB05C4 (GetBootSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     SeMakeAnonymousLogonToken @ 0x140CE3688 (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140CE3908 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140CE3B68 (SeMakeSystemToken.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x14044A4CC (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 */

char __fastcall RtlpTimeFieldsToTime(__int64 a1, __int64 *a2)
{
  _KWAIT_BLOCK *WaitBlockList; // rbx
  unsigned int Flink_high; // esi
  __int64 v5; // rax
  __int64 i; // r8
  __int64 v8; // rdx
  __int64 v9; // rdx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  WaitBlockList = ExpSysDbgLock.WaitBlockList;
  v11 = 0LL;
  if ( !ExpSysDbgLock.WaitBlockList || !ExpSysDbgLock.WaitBlockList->WaitListEntry.Flink )
    return ((__int64 (*)(void))RtlpTimeFieldsToTimeNoLeapSeconds)();
  Flink_high = HIDWORD(ExpSysDbgLock.WaitBlockList->WaitListEntry.Flink);
  _InterlockedOr(v10, 0);
  if ( !(unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(a1, &v11) )
    return 0;
  v5 = v11;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= Flink_high )
      goto LABEL_6;
    v8 = *((_QWORD *)&WaitBlockList->WaitListEntry.Blink + i);
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
