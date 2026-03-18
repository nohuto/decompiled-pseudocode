/*
 * XREFs of PopVerifierFlushMemoryBeforeSleep @ 0x140BFD704
 * Callers:
 *     PoBroadcastSystemState @ 0x140C05D10 (PoBroadcastSystemState.c)
 * Callees:
 *     MmPerformMemoryListCommand @ 0x140C0C460 (MmPerformMemoryListCommand.c)
 */

__int64 PopVerifierFlushMemoryBeforeSleep()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = *(unsigned int *)&stru_140F10828.WaitBlockFill11[100];
  if ( (stru_140F10828.WaitBlockFill6[100] & 0x80u) != 0 || MmVerifierTrimAtPowerTransition )
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
