/*
 * XREFs of PopProcessPendingSystemIdleResets @ 0x140A3BF84
 * Callers:
 *     PopSystemIdleWorker @ 0x140A3BBE0 (PopSystemIdleWorker.c)
 * Callees:
 *     PopPulseSystemIdleEvent @ 0x140A3C2BC (PopPulseSystemIdleEvent.c)
 */

__int64 PopProcessPendingSystemIdleResets()
{
  __int64 result; // rax
  int v2; // ecx

  while ( 1 )
  {
    result = LODWORD(PopWeakChargerLock.IoSelfBoostsEntry.Next);
    if ( !_BitScanForward((unsigned int *)&v2, (unsigned int)PopWeakChargerLock.IoSelfBoostsEntry.Next) )
      break;
    _InterlockedAnd((volatile signed __int32 *)&PopWeakChargerLock.IoSelfBoostsEntry, ~(1 << v2));
    if ( v2 == 2 )
      PopPulseSystemIdleEvent(2LL);
  }
  return result;
}
