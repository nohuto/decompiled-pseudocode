/*
 * XREFs of EmonPauseProfiling @ 0x140595CD0
 * Callers:
 *     <none>
 * Callees:
 *     EmonPauseProfilingInternal @ 0x140595D0C (EmonPauseProfilingInternal.c)
 */

__int64 EmonPauseProfiling()
{
  unsigned int Number; // ebx
  __int64 result; // rax

  Number = KeGetPcr()->Prcb.Number;
  result = EmonPauseProfilingInternal(0LL, Number);
  if ( *(_DWORD *)IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts >= 2u )
    return EmonPauseProfilingInternal(1LL, Number);
  return result;
}
