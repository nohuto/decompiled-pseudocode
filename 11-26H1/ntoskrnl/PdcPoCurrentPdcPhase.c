/*
 * XREFs of PdcPoCurrentPdcPhase @ 0x14060D4E0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     PopFxPauseDeviceAccounting @ 0x1403949DC (PopFxPauseDeviceAccounting.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1403B6230 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1403B63C4 (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     PopFxResumeDeviceAccounting @ 0x1404AF898 (PopFxResumeDeviceAccounting.c)
 *     Feature_PDCSuspendResumeNotifications__private_IsEnabledDeviceUsageNoInline @ 0x140526A8C (Feature_PDCSuspendResumeNotifications__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1406004D0 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopPowerAggregatorNotifyPdcPhaseState @ 0x1407D6C24 (PopPowerAggregatorNotifyPdcPhaseState.c)
 *     PopPowerAggregatorNotifyResiliencyReached @ 0x1407D6D8C (PopPowerAggregatorNotifyResiliencyReached.c)
 *     PopIdleCsStateChanged @ 0x1407DA1D0 (PopIdleCsStateChanged.c)
 *     PopNetResiliencyPhaseStateChanged @ 0x1407DA8C0 (PopNetResiliencyPhaseStateChanged.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x1407DFFD0 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x140A3EEB4 (PopDisarmIdlePhaseWatchdog.c)
 *     PopSuspendResumeInvocation @ 0x140B35570 (PopSuspendResumeInvocation.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x140B41C58 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 *     PopSmartSuspendMakePredictions @ 0x140B6B6EC (PopSmartSuspendMakePredictions.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PdcPoCurrentPdcPhase(int a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // edi
  char v5; // bl
  int v6; // ecx
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // rdx
  LARGE_INTEGER v13; // rcx
  LARGE_INTEGER v14; // r8
  LARGE_INTEGER v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v24; // [rsp+20h] [rbp-28h] BYREF
  int v25; // [rsp+28h] [rbp-20h]
  int v26; // [rsp+2Ch] [rbp-1Ch]
  int v27; // [rsp+30h] [rbp-18h]

  v4 = 0;
  PopCurrentPdcCsPhase = a1;
  v5 = a2;
  v6 = a1 - 1;
  if ( !v6 )
  {
    PopDisarmIdlePhaseWatchdog();
    return v4;
  }
  v7 = (unsigned int)(v6 - 1);
  if ( (_DWORD)v7 )
  {
    v8 = v7 - 3;
    if ( v8 )
    {
      v9 = (unsigned int)(v8 - 1);
      if ( (_DWORD)v9 )
      {
        v10 = (unsigned int)(v9 - 1);
        if ( (_DWORD)v10 )
        {
          if ( (_DWORD)v10 == 1 )
          {
            LOBYTE(v10) = a2;
            PopNetResiliencyPhaseStateChanged(v10);
            PopPowerAggregatorNotifyResiliencyReached();
          }
        }
        else
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          if ( v5 )
          {
            qword_140E26F80 = PerformanceCounter.QuadPart;
            PopDeepSleepResiliencyPhaseAccountingBegin(3u, 0);
            if ( LODWORD(stru_140E66FF0.SchedulerAssistLastYieldBoostTime) == 2 )
              PopFxResumeDeviceAccounting(v17, v16, v18, v19);
          }
          else
          {
            qword_140E26F88 += PerformanceCounter.QuadPart - qword_140E26F80;
            if ( LODWORD(stru_140E66FF0.SchedulerAssistLastYieldBoostTime) == 2 )
              PopFxPauseDeviceAccounting(
                v13.QuadPart,
                v12.QuadPart,
                v14.QuadPart,
                (struct _KLOCK_ENTRIES *)v15.QuadPart);
            PopDeepSleepResiliencyPhaseAccountingEnd(3u, 0);
          }
        }
        return v4;
      }
      LODWORD(v9) = (unsigned __int8)a2;
      return (unsigned int)PopPowerAggregatorNotifyPdcSleepTransition(v9, a3, a4);
    }
    else
    {
      if ( !(unsigned int)Feature_PDCSuspendResumeNotifications__private_IsEnabledDeviceUsageNoInline() )
        return v4;
      v24 = 0LL;
      v25 = 1;
      v27 = -1;
      v26 = v5 == 0;
      v4 = PopSuspendResumeInvocation(&v24);
      if ( v5 )
        return v4;
      v26 = 2;
      return (unsigned int)PopSuspendResumeInvocation(&v24);
    }
  }
  if ( (_BYTE)a2 )
  {
    PopAcquirePolicyLock(v7, a2);
    PopSmartSuspendMakePredictions(1LL);
    PopReleasePolicyLock();
  }
  LOBYTE(a2) = v5;
  PopPowerAggregatorNotifyPdcPhaseState(2LL, a2);
  LOBYTE(v21) = v5 != 0;
  PopIdleCsStateChanged(v21);
  if ( (unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
  {
    LOBYTE(v22) = v5;
    PopAdaptiveStandbyNotifyShellPhaseState(v22);
  }
  return v4;
}
