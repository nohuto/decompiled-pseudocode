/*
 * XREFs of PfPowerActionNotify @ 0x140C0D3C0
 * Callers:
 *     PfIoPowerEventNotify @ 0x1407C8798 (PfIoPowerEventNotify.c)
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 *     PfpProcessScenarioPhase @ 0x140B1F0C8 (PfpProcessScenarioPhase.c)
 *     PopDispatchSuperfetchNotification @ 0x140B51798 (PopDispatchSuperfetchNotification.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PfpPartitionIterate @ 0x1403843E0 (PfpPartitionIterate.c)
 *     PfpServiceMainThreadUnboost @ 0x1404F3EC0 (PfpServiceMainThreadUnboost.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PfpScenCtxPrefetchWait @ 0x140BFEAD8 (PfpScenCtxPrefetchWait.c)
 *     PfSnBeginBootPhase @ 0x140BFEFAC (PfSnBeginBootPhase.c)
 *     PfpScenCtxScenarioSet @ 0x140C10118 (PfpScenCtxScenarioSet.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140C129A8 (PfpStartLoggingHardFaultEvents.c)
 */

__int64 __fastcall PfPowerActionNotify(int a1, char a2, int a3)
{
  int v4; // ecx
  int v5; // ecx
  __int64 result; // rax
  int v7; // ecx
  unsigned int v8; // r8d
  int v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+28h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v12; // [rsp+40h] [rbp-30h]
  __int128 v13; // [rsp+48h] [rbp-28h] BYREF
  int v14; // [rsp+58h] [rbp-18h]

  v14 = 0;
  v9 = 0;
  v12 = 0LL;
  v10 = (unsigned int)(2 * a1);
  v13 = 0LL;
  v11 = 0LL;
  if ( (a2 & 1) != 0 )
    LODWORD(v10) = (2 * a1) | 1;
  if ( a1 )
  {
    v4 = a1 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 5 && (unsigned int)(a3 - 2) <= 2 )
        {
          *(_QWORD *)&v13 = 0x200000001LL;
          DWORD2(v13) = 1;
          HIDWORD(v13) = HIDWORD(stru_140E66D40.TracingPrivate[0]);
          v14 = 0;
          PfpPartitionIterate((__int64)PfpLogScenarioEventCallback, 0LL, (__int64)&v13);
        }
LABEL_7:
        HIDWORD(v10) = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                     + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
LABEL_8:
        LODWORD(v11) = 28;
        DWORD2(v11) = 8;
        DWORD1(v11) = HIDWORD(stru_140E66D40.WriteOperationCount)
                    + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                      + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
        v12 = &v10;
        return PfpPartitionIterate((__int64)PfpPartitionLogEventCallback, 0LL, (__int64)&v11);
      }
      PfpPartitionIterate(
        (__int64)PfpPowerActionStartScenarioTracingCallback,
        4LL,
        (__int64)&stru_140E66D40.OtherOperationCount);
      if ( LODWORD(stru_140E66D40.TracingPrivate[0]) == 5 )
        PfSnBeginBootPhase(4u);
      PfpScenCtxScenarioSet((struct _KTHREAD *)&stru_140E66D40.OtherOperationCount);
      PfpScenCtxScenarioSet((struct _KTHREAD *)&stru_140E66D40.OtherOperationCount);
      PfpScenCtxScenarioSet((struct _KTHREAD *)&stru_140E66D40.OtherOperationCount);
      result = PfpStartLoggingHardFaultEvents();
      if ( (int)result >= 0 )
        goto LABEL_7;
    }
    else
    {
      result = (unsigned int)(a3 - 2);
      if ( (unsigned int)result <= 3 )
      {
        PfpPartitionIterate((__int64)PfpPowerActionSleepSystemPhaseCallback, 4LL, (__int64)&v9);
        if ( v9 )
        {
          if ( a3 == 5 )
          {
            v7 = 2;
            v8 = *(_DWORD *)&stru_140E66D40.WaitBlockFill11[136];
            if ( LODWORD(stru_140E66D40.TracingPrivate[0]) == 5 )
            {
              v8 = *(_DWORD *)&stru_140E66D40.WaitBlockFill11[140];
              v7 = 5;
            }
          }
          else
          {
            v8 = *(_DWORD *)&stru_140E66D40.WaitBlockFill11[132];
            v7 = 1;
          }
          HIDWORD(v10) = PfpScenCtxPrefetchWait((struct _KTHREAD *)&stru_140E66D40.OtherOperationCount, v7, v8);
        }
        PfpServiceMainThreadUnboost(0LL);
        goto LABEL_8;
      }
    }
  }
  else
  {
    result = (unsigned int)(a3 - 2);
    if ( (unsigned int)result <= 2 || a3 == 5 )
      return PfpScenCtxScenarioSet((struct _KTHREAD *)&stru_140E66D40.OtherOperationCount);
  }
  return result;
}
