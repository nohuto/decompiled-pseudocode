/*
 * XREFs of KeUpdatePendingQosRequest @ 0x140330628
 * Callers:
 *     KeCheckAndApplyBamQos @ 0x140330350 (KeCheckAndApplyBamQos.c)
 *     KiCheckForPendingQosUpdate @ 0x140330CB0 (KiCheckForPendingQosUpdate.c)
 *     PpmPerfSetProcessorIdle @ 0x1403EAB34 (PpmPerfSetProcessorIdle.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KiSetNextClockTickDueTime @ 0x1403796D0 (KiSetNextClockTickDueTime.c)
 *     KiShouldRearmClockTimer @ 0x14041902C (KiShouldRearmClockTimer.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14051FE68 (KiSetVirtualHeteroClockIntervalRequest.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall KeUpdatePendingQosRequest(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 InterruptTimePrecise; // rsi
  __int64 v7; // r15
  char v8; // al
  __int64 v9; // rdx
  __int64 result; // rax
  char v11; // [rsp+30h] [rbp-D0h] BYREF
  char v12; // [rsp+31h] [rbp-CFh] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  int *v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  __int64 *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  __int64 *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  int *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  char *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  char *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+100h] [rbp+0h] BYREF
  int *v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  char *v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]

  v3 = 0;
  v4 = a1;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 15LL);
    }
    if ( (*(_DWORD *)(v4 + 236) & 0x100) != 0 )
    {
      if ( KiQosHysteresisTimerPeriod )
      {
        if ( KiClockTimerReducePreciseTimeQueries )
          InterruptTimePrecise = RtlGetInterruptTimePrecise((unsigned __int64 *)&v15);
        else
          InterruptTimePrecise = 0LL;
        v7 = -(__int64)(unsigned int)KiQosHysteresisTimerPeriod;
        if ( !KiClockTimerReducePreciseTimeQueries )
          InterruptTimePrecise = RtlGetInterruptTimePrecise((unsigned __int64 *)&v15);
        if ( (unsigned int)dword_140E06F58 > 5 )
        {
          v16 = InterruptTimePrecise;
          v20 = &v16;
          v21 = 8LL;
          v22 = &v13;
          v13 = 6;
          v24 = &v17;
          v23 = 4LL;
          v17 = v7;
          v18 = -v7;
          v25 = 8LL;
          v26 = &v18;
          v28 = (unsigned __int64 *)&v15;
          v30 = &v14;
          v32 = &v11;
          v34 = &v12;
          v27 = 8LL;
          v15 = InterruptTimePrecise - v7;
          v29 = 8LL;
          v14 = 0;
          v31 = 4LL;
          v11 = 0;
          v33 = 1LL;
          v12 = 1;
          v35 = 1LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06F58,
            (unsigned __int8 *)byte_140048E89,
            0LL,
            0LL,
            0xAu,
            &v19);
        }
        LOBYTE(a3) = 1;
        v8 = *(_BYTE *)(v4 + 38468) & 0xFD;
        *(_QWORD *)(v4 + 38456) = InterruptTimePrecise - v7;
        *(_DWORD *)(v4 + 38464) = 0;
        *(_BYTE *)(v4 + 38468) = v8 | 1;
        if ( (unsigned __int8)KiShouldRearmClockTimer(v4, InterruptTimePrecise, a3) )
        {
          LOBYTE(v9) = 1;
          *(_DWORD *)(v4 + 38352) = 2;
          KiSetNextClockTickDueTime(InterruptTimePrecise, v9);
        }
      }
    }
    else
    {
      *(_BYTE *)(v4 + 38468) &= ~1u;
      if ( (unsigned int)dword_140E06F58 > 5 )
      {
        v13 = 6;
        v38 = 4LL;
        v37 = &v13;
        v11 = 0;
        v39 = &v11;
        v40 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06F58,
          (unsigned __int8 *)byte_140048E4D,
          0LL,
          0LL,
          4u,
          &v36);
      }
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    return result;
  }
  if ( (*(_DWORD *)(a1 + 236) & 0x100) != 0 )
  {
    result = (unsigned int)_InterlockedIncrement(&KiPendingVirtualHeteroRequest);
    if ( (_DWORD)result != 1 )
      return result;
    if ( *(_BYTE *)(a1 + 33) )
    {
LABEL_25:
      LOBYTE(a1) = v3;
      return KiSetVirtualHeteroClockIntervalRequest(a1);
    }
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd(&KiPendingVirtualHeteroRequest, 0xFFFFFFFF);
    if ( (_DWORD)result != 1 )
      return result;
    if ( *(_BYTE *)(a1 + 33) )
    {
      v3 = 1;
      goto LABEL_25;
    }
  }
  if ( !qword_140F267B8 )
    WORD1(KiSupervisorXStateFeaturesLock.SchedulerAssistLastYieldBoostTime) = KiClockTimerOwner + 2048;
  return KiInsertQueueDpc(
           (ULONG_PTR)&KiSupervisorXStateFeaturesLock.SchedulerAssistLastYieldBoostTime,
           0LL,
           0LL,
           0LL,
           0);
}
