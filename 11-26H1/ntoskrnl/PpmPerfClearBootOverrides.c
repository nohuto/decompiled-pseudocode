/*
 * XREFs of PpmPerfClearBootOverrides @ 0x1404FE288
 * Callers:
 *     PopSetupHighPerfPowerRequest @ 0x1407C8690 (PopSetupHighPerfPowerRequest.c)
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x140A9CFA0 (PopPowerRequestCallbackPerfBoostRequired.c)
 * Callees:
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x140A9CE8C (PpmReinitializeHeteroEngine.c)
 */

__int64 __fastcall PpmPerfClearBootOverrides(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    PpmPerfBootHeteroPolicyOverrideEnabled = 0;
    if ( PopHeteroSystem )
    {
      PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, a3);
      return PpmReinitializeHeteroEngine(0LL, 0LL);
    }
  }
  return result;
}
