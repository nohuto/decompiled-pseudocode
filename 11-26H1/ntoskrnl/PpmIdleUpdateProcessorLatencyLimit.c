/*
 * XREFs of PpmIdleUpdateProcessorLatencyLimit @ 0x14028EF68
 * Callers:
 *     PpmParkReportUnparkedCore @ 0x140254CCC (PpmParkReportUnparkedCore.c)
 *     PpmParkReportParkedCore @ 0x140254E74 (PpmParkReportParkedCore.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x14028F150 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PpmParkReportSoftParkChange @ 0x140420608 (PpmParkReportSoftParkChange.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140253CAC (-RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     PpmEventTraceProcessorLatencyLimitChange @ 0x140257938 (PpmEventTraceProcessorLatencyLimitChange.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PpmIdleUpdateProcessorLatencyLimit(struct _KPRCB *a1, struct _KAFFINITY_EX *a2)
{
  struct _KPRCB *v3; // rbx
  unsigned __int8 CurrentIrql; // r12
  unsigned int v5; // edi
  unsigned int IdleWakeLatencyLimit; // ebp
  _PPM_IDLE_STATES *IdleStates; // rdx
  unsigned int ProcessorIdleCount; // r11d
  unsigned int v9; // esi
  unsigned int i; // r8d
  unsigned int v11; // r10d
  unsigned int Latency; // r9d
  int v13; // ecx
  int v14; // eax
  __int64 result; // rax
  unsigned int v16; // ecx
  unsigned int j; // ebp
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rdx
  struct _KPRCB *Prcb; // rax
  unsigned int v23; // eax
  __int128 v24; // [rsp+20h] [rbp-58h] BYREF
  __int64 v25; // [rsp+30h] [rbp-48h]
  unsigned int v26; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+90h] [rbp+18h]
  unsigned int v28; // [rsp+98h] [rbp+20h]

  v24 = 0LL;
  v26 = 0;
  v3 = a1;
  v25 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v5 = PpmIdleUnparkedLatencyLimit;
  if ( v3->PowerState.Parked )
  {
    v16 = HIDWORD(stru_140E67200.Padding[1]);
    if ( v3->PowerState.SoftParked )
      v16 = stru_140E67200.Padding[2];
    if ( v16 > PpmIdleUnparkedLatencyLimit )
      v5 = v16;
  }
  IdleWakeLatencyLimit = v3->PowerState.IdleWakeLatencyLimit;
  v28 = IdleWakeLatencyLimit;
  if ( IdleWakeLatencyLimit != v5 )
  {
    v3->PowerState.IdleWakeLatencyLimit = v5;
    PpmEventTraceProcessorLatencyLimitChange((__int64)v3, v5);
    if ( v3 != KeGetCurrentPrcb() && v3->CurrentThread == v3->IdleThread )
    {
      IdleStates = v3->PowerState.IdleStates;
      if ( IdleStates )
      {
        if ( IdleStates->EnforceStateConstraints )
        {
          ProcessorIdleCount = IdleStates->ProcessorIdleCount;
          v9 = 0;
          v27 = 0;
          for ( i = 1; ; ++i )
          {
            v11 = v9;
            if ( i >= ProcessorIdleCount )
              break;
            Latency = IdleStates->State[i].Latency;
            if ( Latency != -1 )
            {
              v13 = 0;
              v14 = 0;
              v9 = IdleStates->State[i].Latency;
              if ( v11 > Latency )
                v9 = v11;
              v27 = v9;
              LOBYTE(v13) = v5 > Latency;
              LOBYTE(v14) = IdleWakeLatencyLimit > Latency;
              if ( v14 != v13 )
              {
LABEL_31:
                KeAddProcessorAffinityEx(&a2->Count, v3->Number);
                goto LABEL_19;
              }
            }
          }
          if ( PpmPlatformStates )
          {
            for ( j = 0; ; ++j )
            {
              v18 = PpmPlatformStates;
              if ( j >= *(_DWORD *)PpmPlatformStates )
                break;
              v19 = 448LL * j;
              if ( !*(_BYTE *)(v19 + PpmPlatformStates + 121) )
              {
                v20 = v19 + PpmPlatformStates + 128;
                if ( (unsigned int)KeCheckProcessorAffinityEx(v20, v3->Number) )
                {
                  *((_QWORD *)&v24 + 1) = *(_QWORD *)(v20 + 8);
                  LOWORD(v25) = 0;
                  *(_QWORD *)&v24 = v19 + v18 + 128;
                  while ( !(unsigned int)KeEnumerateNextProcessor(&v26, &v24) )
                  {
                    Prcb = (struct _KPRCB *)KeGetPrcb(v26);
                    if ( Prcb == KeGetCurrentPrcb() || Prcb->CurrentThread != Prcb->IdleThread )
                      goto LABEL_30;
                  }
                  LODWORD(v21) = KeGetPcr()->Prcb.Number;
                  if ( !(unsigned int)KeCheckProcessorAffinityEx(v19 + v18 + 128, v21) )
                  {
                    if ( *(_BYTE *)(v19 + v18 + 123) || (v23 = v27 + *(_DWORD *)(v19 + v18 + 72), v28 < v23) || v5 < v23 )
                    {
                      if ( !(unsigned int)RtlpAndAffinityExNoResult((struct _KAFFINITY_EX *)(v19 + v18 + 128), a2) )
                        goto LABEL_31;
                    }
                  }
                }
              }
LABEL_30:
              ;
            }
          }
        }
      }
    }
  }
LABEL_19:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
