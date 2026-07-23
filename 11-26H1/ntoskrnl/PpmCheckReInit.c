/*
 * XREFs of PpmCheckReInit @ 0x140AEBB2C
 * Callers:
 *     PpmParkSetLpiCap @ 0x1404B533C (PpmParkSetLpiCap.c)
 *     PpmCheckPausePpmEngineForSx @ 0x1404C0F80 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x1404C0FC4 (PpmCheckResumePpmEngineFromSx.c)
 *     PopIntSteerSetMode @ 0x140614DA0 (PopIntSteerSetMode.c)
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x140AD8B10 (PpmReapplyPerfPolicy.c)
 *     PpmCheckInitProcessors @ 0x140AEB890 (PpmCheckInitProcessors.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 *     PoEnergyEstimationEnabled @ 0x140475F40 (PoEnergyEstimationEnabled.c)
 *     PpmPerfClearResponsivenessHints @ 0x1404C483C (PpmPerfClearResponsivenessHints.c)
 *     PpmPerfCheckRequired @ 0x1404D98E8 (PpmPerfCheckRequired.c)
 *     PopInterruptSteeringEnabled @ 0x1404DE234 (PopInterruptSteeringEnabled.c)
 *     PpmCheckArmPeriod @ 0x1404DF800 (PpmCheckArmPeriod.c)
 *     PpmParkParkingAvailable @ 0x140AEBCBC (PpmParkParkingAvailable.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x140AEBE2C (PpmParkUpdateConcurrencyTracking.c)
 *     PpmPerfResetHistoryAll @ 0x140AEBEE4 (PpmPerfResetHistoryAll.c)
 */

__int64 (__fastcall ***__fastcall PpmCheckReInit(_DWORD *a1))()
{
  char v1; // bl
  bool v2; // si
  char *v3; // r14
  char v4; // di
  char v5; // bp
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // bl
  __int64 (__fastcall ***result)(); // rax

  v1 = 0;
  v2 = 0;
  v3 = (char *)PpmCurrentProfile + 712 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  v4 = 1;
  v5 = 0;
  if ( *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2) != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) )
  {
    v2 = PpmPerfCheckRequired((__int64)(v3 + 40)) != 0;
    v1 = v2;
    if ( PpmCheckPollForFeedback )
      v1 = 1;
    v6 = PoEnergyEstimationEnabled();
    a1 = v3 + 200;
    if ( v6 )
      v1 = 1;
    v7 = 3LL;
    do
    {
      if ( *a1 != a1[3] )
      {
        v1 = 1;
        v5 = 1;
      }
      ++a1;
      --v7;
    }
    while ( v7 );
  }
  if ( (unsigned __int8)PpmParkParkingAvailable(a1) )
  {
    v1 = 1;
    v2 = 1;
  }
  if ( (PopInterruptSteeringEnabled() || (v4 = v1) != 0) && !PpmCheckArmed )
    PpmPerfResetHistoryAll();
  v9 = v4;
  if ( PpmCheckForceDisarm )
    v9 = 0;
  if ( !v5 )
    PpmPerfClearResponsivenessHints();
  LOBYTE(v8) = v2;
  PpmParkUpdateConcurrencyTracking(v8);
  if ( v9 )
  {
    PpmCheckArmPeriod();
  }
  else if ( PpmCheckArmed )
  {
    _InterlockedExchange64(&PpmCheckLastEffectiveExecutionTime, 0LL);
    PpmCheckArmed = 0;
    if ( PpmCheckTimerImplementation )
      KeCancelTimer2((__int64)&PpmCheckTimer);
  }
  result = PpmCheckHomogeneousPipelines;
  PpmCheckPipelines = (__int64)PpmCheckHomogeneousPipelines;
  if ( PpmHeteroPolicy )
  {
    if ( v2 )
    {
      result = PpmCheckHeterogeneousPipelines;
      PpmCheckPipelines = (__int64)PpmCheckHeterogeneousPipelines;
    }
  }
  return result;
}
