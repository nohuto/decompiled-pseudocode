/*
 * XREFs of KsepPoolAllocateNonPaged @ 0x1404E0384
 * Callers:
 *     KseSetCompletionHook @ 0x1404E02F0 (KseSetCompletionHook.c)
 *     KseShimDriverIoCallbacks @ 0x140A26360 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 KsepPoolAllocateNonPaged()
{
  __int64 result; // rax
  volatile signed __int32 *p_Queue; // rcx

  result = ExAllocatePool2(0x40uLL);
  p_Queue = (volatile signed __int32 *)&AlpcpMessageLogLock.Queue;
  if ( !result )
    p_Queue = (volatile signed __int32 *)&AlpcpMessageLogLock.Teb + 1;
  _InterlockedIncrement(p_Queue);
  return result;
}
