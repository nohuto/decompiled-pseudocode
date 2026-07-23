/*
 * XREFs of PpmEnableProfile @ 0x140AD850C
 * Callers:
 *     PdcPoPpmResetProfile @ 0x140AD84C0 (PdcPoPpmResetProfile.c)
 *     PpmInitPolicyConfiguration @ 0x140CD8F20 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmPerfUpdateMultimediaPowerModel @ 0x1404D838C (PpmPerfUpdateMultimediaPowerModel.c)
 *     PpmEventTraceProfileEnable @ 0x140AD86A4 (PpmEventTraceProfileEnable.c)
 *     PpmReinitializeHeteroEngine @ 0x140AD89F8 (PpmReinitializeHeteroEngine.c)
 */

__int64 __fastcall PpmEnableProfile(__int64 a1)
{
  _QWORD **v1; // rdi
  char v2; // bp
  __int64 v4; // rsi
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // r8d

  *(_DWORD *)(a1 + 28) |= 1u;
  v1 = (_QWORD **)&off_140E08178;
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
        PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, v8, v9);
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
