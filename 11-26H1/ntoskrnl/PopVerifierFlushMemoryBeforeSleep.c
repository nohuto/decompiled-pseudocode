/*
 * XREFs of PopVerifierFlushMemoryBeforeSleep @ 0x140C03704
 * Callers:
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 * Callees:
 *     MmPerformMemoryListCommand @ 0x140C12670 (MmPerformMemoryListCommand.c)
 */

__int64 PopVerifierFlushMemoryBeforeSleep()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = LODWORD(PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime);
  if ( SLOBYTE(PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime) < 0 || MmVerifierTrimAtPowerTransition )
  {
    v1 = 2LL;
    do
    {
      MmPerformMemoryListCommand(2LL, -1LL);
      MmPerformMemoryListCommand(3LL, -1LL);
      MmPerformMemoryListCommand(3LL, -1LL);
      --v1;
    }
    while ( v1 );
    return MmPerformMemoryListCommand(4LL, -1LL);
  }
  return result;
}
