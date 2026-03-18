/*
 * XREFs of PpmReapplyPerfPolicy @ 0x140A9D088
 * Callers:
 *     PpmPerfProcCapFloorSettingCallback @ 0x1407D6210 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140945E50 (PpmCompareAndApplyPolicySettings.c)
 *     PpmDisableProfile @ 0x140A9C784 (PpmDisableProfile.c)
 *     PpmInfoApplySettingUpdate @ 0x140A9C928 (PpmInfoApplySettingUpdate.c)
 *     PpmReinitializeHeteroEngine @ 0x140A9CE8C (PpmReinitializeHeteroEngine.c)
 *     PpmUpdatePerfStates @ 0x140A9CEE0 (PpmUpdatePerfStates.c)
 * Callees:
 *     PpmHeteroHgsCheckContainmentDecision @ 0x1402589C8 (PpmHeteroHgsCheckContainmentDecision.c)
 *     PpmParkApplyPolicy @ 0x1402592F0 (PpmParkApplyPolicy.c)
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmCheckApplyParkConstraints @ 0x1404BBD54 (PpmCheckApplyParkConstraints.c)
 *     PpmCheckInitProcessors @ 0x140A9CBF0 (PpmCheckInitProcessors.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140A9D254 (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckReInit @ 0x140A9D410 (PpmCheckReInit.c)
 *     PpmUpdateProcessorPolicy @ 0x140A9D7C8 (PpmUpdateProcessorPolicy.c)
 *     PopInitializeHeteroProcessors @ 0x140A9DA10 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResizeHistoryAll @ 0x140B40594 (PpmPerfResizeHistoryAll.c)
 */

LONG __fastcall PpmReapplyPerfPolicy(LONG *a1)
{
  __int64 *v1; // rdi
  unsigned __int64 v3; // rsi
  char v4; // bp
  unsigned int v5; // ecx
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r8d
  char v11; // di
  char v12; // si
  LONG result; // eax
  unsigned int v14; // edx

  v1 = PpmCurrentProfile;
  v3 = 89LL * dword_140F106CC;
  v4 = 0;
  v5 = PpmCurrentProfile[v3 + 89];
  if ( v5 > 4 )
    v5 = 0;
  if ( v5 != PpmHeteroDesiredPolicy )
  {
    PpmHeteroDesiredPolicy = v5;
    if ( ((PopHeteroSystem - 1) & 0xFFFFFFFA) != 0 )
      v5 = 0;
    if ( v5 != PpmHeteroPolicy )
    {
      PpmHeteroPolicy = v5;
      *a1 |= 0x4800u;
    }
  }
  if ( (*a1 & 0x1800) != 0 )
  {
    v6 = (unsigned int)*a1 >> 11;
    LOBYTE(v6) = (*a1 & 0x800) != 0;
    v7 = PopInitializeHeteroProcessors(v6);
    if ( (*a1 & 0x800) != 0 || v7 )
    {
      v4 = 1;
      v14 = *a1 & 0xFFFFDFF5 | 0x2008;
      if ( (*(_WORD *)a1 & 0x8000) == 0 )
        v14 = *a1 | 0x200A;
      *a1 = v14 | 4;
    }
  }
  if ( HIDWORD(v1[v3 + 91]) != PpmHeteroContainmentPolicy )
  {
    PpmHeteroContainmentPolicy = HIDWORD(v1[v3 + 91]);
    PpmHeteroHgsCheckContainmentDecision();
  }
  PpmUpdateProcessorPolicy(a1, 0LL);
  if ( (*a1 & 4) != 0 )
    PpmParkApplyPolicy();
  if ( (*a1 & 0x10) != 0 )
    PpmPerfResizeHistoryAll();
  if ( (*a1 & 8) != 0 )
    PpmCheckReInit();
  v11 = 1;
  v12 = 0;
  if ( (*a1 & 2) != 0 )
  {
    LOBYTE(v9) = v4;
    v11 = 0;
    v12 = 1;
    PpmPerfUpdateDomainPolicy(v9);
  }
  result = *a1;
  if ( (*a1 & 4) != 0 )
  {
    if ( v12 )
      PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, v8, v10);
    if ( (*a1 & 0x2000) != 0 )
      return PpmCheckInitProcessors(1, ((unsigned int)*a1 >> 14) & 1);
    else
      return PpmCheckApplyParkConstraints();
  }
  else if ( v11 )
  {
    return PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
  }
  return result;
}
