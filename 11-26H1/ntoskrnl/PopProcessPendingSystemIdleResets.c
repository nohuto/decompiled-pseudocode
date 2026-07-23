/*
 * XREFs of PopProcessPendingSystemIdleResets @ 0x1409F79A4
 * Callers:
 *     PopSystemIdleWorker @ 0x1409F7600 (PopSystemIdleWorker.c)
 * Callees:
 *     PopPulseSystemIdleEvent @ 0x1409F7CDC (PopPulseSystemIdleEvent.c)
 */

__int64 PopProcessPendingSystemIdleResets()
{
  __int64 result; // rax
  int v2; // ecx

  while ( 1 )
  {
    result = (unsigned int)PopPendingSystemIdleResetMask;
    if ( !_BitScanForward((unsigned int *)&v2, PopPendingSystemIdleResetMask) )
      break;
    _InterlockedAnd(&PopPendingSystemIdleResetMask, ~(1 << v2));
    if ( v2 == 2 )
      PopPulseSystemIdleEvent(2LL);
  }
  return result;
}
