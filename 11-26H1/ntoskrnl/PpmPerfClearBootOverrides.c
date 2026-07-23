/*
 * XREFs of PpmPerfClearBootOverrides @ 0x1404F77C8
 * Callers:
 *     PopSetupHighPerfPowerRequest @ 0x1407CB6F0 (PopSetupHighPerfPowerRequest.c)
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x140AD8CF0 (PopPowerRequestCallbackPerfBoostRequired.c)
 * Callees:
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x140AD89F8 (PpmReinitializeHeteroEngine.c)
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
      PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, a3);
      return PpmReinitializeHeteroEngine(0LL, 0LL);
    }
  }
  return result;
}
