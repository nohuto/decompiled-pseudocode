/*
 * XREFs of PpmEnableProfile @ 0x140A9C6CC
 * Callers:
 *     PdcPoPpmResetProfile @ 0x140A9C680 (PdcPoPpmResetProfile.c)
 *     PpmInitPolicyConfiguration @ 0x140CD2D80 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmPerfUpdateMultimediaPowerModel @ 0x1404DECAC (PpmPerfUpdateMultimediaPowerModel.c)
 *     PpmEventTraceProfileEnable @ 0x140A9C864 (PpmEventTraceProfileEnable.c)
 *     PpmReinitializeHeteroEngine @ 0x140A9CE8C (PpmReinitializeHeteroEngine.c)
 */

__int64 __fastcall PpmEnableProfile(__int64 a1)
{
  __int64 **v1; // rdi
  char v2; // bp
  __int64 v4; // rsi
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // r8d

  *(_DWORD *)(a1 + 28) |= 1u;
  v1 = &off_140E08188;
  v2 = *(_BYTE *)(a1 + 8);
  v4 = 6LL;
  do
  {
    v5 = *(v1 - 1);
    v6 = *(_QWORD *)(a1 + 12) - *v5;
    if ( !v6 )
      v6 = *(_QWORD *)(a1 + 20) - v5[1];
    if ( !v6 )
    {
      **v1 = a1;
      v7 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
      if ( !v7 )
        v7 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
      if ( v7 )
      {
        LOBYTE(v6) = 1;
        PpmReinitializeHeteroEngine(v6, 0LL);
        PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, v8, v9);
      }
      else
      {
        PpmPerfUpdateMultimediaPowerModel();
      }
    }
    v1 += 2;
    --v4;
  }
  while ( v4 );
  LOBYTE(v5) = 1;
  LOBYTE(v6) = v2;
  return PpmEventTraceProfileEnable(v6, v5);
}
