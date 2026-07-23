/*
 * XREFs of PpmReapplyPerfPolicy @ 0x140AD8B10
 * Callers:
 *     PpmPerfProcCapFloorSettingCallback @ 0x1407D93C0 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1409C17C0 (PpmCompareAndApplyPolicySettings.c)
 *     PpmDisableProfile @ 0x140AD85C4 (PpmDisableProfile.c)
 *     PpmInfoApplySettingUpdate @ 0x140AD873C (PpmInfoApplySettingUpdate.c)
 *     PpmReinitializeHeteroEngine @ 0x140AD89F8 (PpmReinitializeHeteroEngine.c)
 *     PpmUpdatePerfStates @ 0x140AD8A50 (PpmUpdatePerfStates.c)
 * Callees:
 *     PpmHeteroHgsCheckContainmentDecision @ 0x14025A1A8 (PpmHeteroHgsCheckContainmentDecision.c)
 *     PpmParkApplyPolicy @ 0x14025AAD0 (PpmParkApplyPolicy.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmCheckApplyParkConstraints @ 0x1404B5534 (PpmCheckApplyParkConstraints.c)
 *     Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline @ 0x14060D314 (Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmHeteroReinitializeWpsProcessors @ 0x1407DA9A8 (PpmHeteroReinitializeWpsProcessors.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AD8DD8 (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckInitProcessors @ 0x140AEB890 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x140AEBB2C (PpmCheckReInit.c)
 *     PpmUpdateProcessorPolicy @ 0x140AF0768 (PpmUpdateProcessorPolicy.c)
 *     PpmPerfResizeHistoryAll @ 0x140B425A0 (PpmPerfResizeHistoryAll.c)
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 */

LONG __fastcall PpmReapplyPerfPolicy(int *a1)
{
  char *v1; // rsi
  __int64 v3; // rbp
  char v4; // r14
  char v5; // di
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // edx
  int v11; // eax
  unsigned __int8 v12; // al
  int v13; // edx
  __int16 v14; // cx
  int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  char v20; // di
  char v21; // si
  LONG result; // eax

  v1 = (char *)PpmCurrentProfile;
  v3 = 712LL * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  v4 = 0;
  v5 = 0;
  v6 = *(_DWORD *)((char *)PpmCurrentProfile + v3 + 712);
  if ( v6 > 4 )
    v6 = 0;
  if ( v6 != PpmHeteroDesiredPolicy )
  {
    PpmHeteroDesiredPolicy = v6;
    if ( ((PopHeteroSystem - 1) & 0xFFFFFFFA) != 0 )
      v6 = 0;
    if ( v6 != PpmHeteroPolicy )
    {
      PpmHeteroPolicy = v6;
      *a1 |= 0x4800u;
    }
  }
  if ( (unsigned int)Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline() )
  {
    v11 = *a1;
    if ( (*a1 & 0x800) != 0 )
    {
      LOBYTE(v8) = 1;
      PopInitializeHeteroProcessors(v8, 0LL);
    }
    else
    {
      LOBYTE(v7) = 0;
      if ( (v11 & 0x10000) != 0 )
      {
        v12 = PpmHeteroReinitializeWpsProcessors();
        v7 = v12;
        v11 = *a1 ^ ((unsigned __int8)*a1 ^ (unsigned __int8)(4 * v12)) & 4;
        *a1 = v11;
      }
      if ( (v11 & 0x1000) == 0 || !(unsigned __int8)PopInitializeHeteroProcessors(0LL, v7) )
        goto LABEL_24;
    }
    v10 = *a1;
LABEL_21:
    v13 = v10 | 0x2008;
    v4 = 1;
    v14 = v13;
    v15 = v13 | 2;
    v16 = v13 & 0xFFFFFFFD;
    if ( (v14 & 0x8000) == 0 )
      v16 = v15;
    *a1 = v16 | 4;
    goto LABEL_24;
  }
  if ( (*a1 & 0x1800) != 0 )
  {
    v9 = (unsigned int)*a1 >> 11;
    LOBYTE(v9) = (*a1 & 0x800) != 0;
    v5 = PopInitializeHeteroProcessors(v9, 0LL);
  }
  v10 = *a1;
  if ( (*a1 & 0x800) != 0 || v5 )
    goto LABEL_21;
LABEL_24:
  if ( *(_DWORD *)&v1[v3 + 732] != PpmHeteroContainmentPolicy )
  {
    PpmHeteroContainmentPolicy = *(_DWORD *)&v1[v3 + 732];
    PpmHeteroHgsCheckContainmentDecision();
  }
  PpmUpdateProcessorPolicy(a1, 0LL);
  if ( (*a1 & 4) != 0 )
    PpmParkApplyPolicy();
  if ( (*a1 & 0x10) != 0 )
    PpmPerfResizeHistoryAll();
  if ( (*a1 & 8) != 0 )
    PpmCheckReInit();
  v20 = 1;
  v21 = 0;
  if ( (*a1 & 2) != 0 )
  {
    LOBYTE(v18) = v4;
    v20 = 0;
    v21 = 1;
    PpmPerfUpdateDomainPolicy(v18);
  }
  result = *a1;
  if ( (*a1 & 4) != 0 )
  {
    if ( v21 )
      PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, v17, v19);
    if ( (*a1 & 0x2000) != 0 )
      return PpmCheckInitProcessors(1LL, ((unsigned int)*a1 >> 14) & 1, v19);
    else
      return PpmCheckApplyParkConstraints();
  }
  else if ( v20 )
  {
    return PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
  }
  return result;
}
