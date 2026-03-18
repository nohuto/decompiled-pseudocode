/*
 * XREFs of PpmCheckReInit @ 0x140A9D410
 * Callers:
 *     PpmParkSetLpiCap @ 0x1404BBB5C (PpmParkSetLpiCap.c)
 *     PpmCheckPausePpmEngineForSx @ 0x1404C7670 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x1404C76B4 (PpmCheckResumePpmEngineFromSx.c)
 *     PopIntSteerSetMode @ 0x140611F60 (PopIntSteerSetMode.c)
 *     PpmRegisterPerfStates @ 0x1407CE358 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140A9CBF0 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140A9D088 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 *     PoEnergyEstimationEnabled @ 0x14047C5D0 (PoEnergyEstimationEnabled.c)
 *     PpmPerfClearResponsivenessHints @ 0x1404CAE0C (PpmPerfClearResponsivenessHints.c)
 *     PpmPerfCheckRequired @ 0x1404E0208 (PpmPerfCheckRequired.c)
 *     PopInterruptSteeringEnabled @ 0x1404E4C94 (PopInterruptSteeringEnabled.c)
 *     PpmCheckArmPeriod @ 0x1404E6260 (PpmCheckArmPeriod.c)
 *     PpmParkParkingAvailable @ 0x140A9D5A0 (PpmParkParkingAvailable.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x140A9D710 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmPerfResetHistoryAll @ 0x140A9EDC8 (PpmPerfResetHistoryAll.c)
 */

__int64 (__fastcall ***__fastcall PpmCheckReInit(_DWORD *a1))()
{
  char v1; // bl
  bool v2; // si
  __int64 *v3; // r14
  char v4; // di
  char v5; // bp
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // bl
  __int64 (__fastcall ***result)(); // rax

  v1 = 0;
  v2 = 0;
  v3 = &PpmCurrentProfile[89 * dword_140F106CC];
  v4 = 1;
  v5 = 0;
  if ( *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2) != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) )
  {
    v2 = PpmPerfCheckRequired((__int64)(v3 + 5)) != 0;
    v1 = v2;
    if ( PopSleepstudySessionLock.0 )
      v1 = 1;
    v6 = PoEnergyEstimationEnabled();
    a1 = v3 + 25;
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
  if ( (PopInterruptSteeringEnabled() || (v4 = v1) != 0) && !PopSleepstudySessionLock.WaitBlockFill6[97] )
    PpmPerfResetHistoryAll();
  v9 = v4;
  if ( PopSleepstudySessionLock.WaitBlockFill6[96] )
    v9 = 0;
  if ( !v5 )
    PpmPerfClearResponsivenessHints();
  LOBYTE(v8) = v2;
  PpmParkUpdateConcurrencyTracking(v8);
  if ( v9 )
  {
    PpmCheckArmPeriod();
  }
  else if ( PopSleepstudySessionLock.WaitBlockFill6[97] )
  {
    _InterlockedExchange64((volatile __int64 *)&PopSleepstudySessionLock.TrapFrame, 0LL);
    PopSleepstudySessionLock.WaitBlockFill6[97] = 0;
    if ( *(_DWORD *)&PopSleepstudySessionLock.AffinityPrimaryGroup )
      KeCancelTimer2((__int64)&PopSleepstudySessionLock.WaitBlock[2].Object);
  }
  result = PpmCheckHomogeneousPipelines;
  PopSleepstudySessionLock.NpxState = (unsigned __int64)PpmCheckHomogeneousPipelines;
  if ( PpmHeteroPolicy )
  {
    if ( v2 )
    {
      result = PpmCheckHeterogeneousPipelines;
      PopSleepstudySessionLock.NpxState = (unsigned __int64)PpmCheckHeterogeneousPipelines;
    }
  }
  return result;
}
