/*
 * XREFs of KsepPoolAllocateNonPaged @ 0x1404D9A64
 * Callers:
 *     KseSetCompletionHook @ 0x1404D99D0 (KseSetCompletionHook.c)
 *     KseShimDriverIoCallbacks @ 0x140A39400 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 KsepPoolAllocateNonPaged()
{
  __int64 result; // rax
  volatile signed __int32 *v1; // rcx

  result = ExAllocatePool2(0x40uLL);
  v1 = (volatile signed __int32 *)&AlpcpMessageLogLock.ApcStateFill[40];
  if ( !result )
    v1 = (volatile signed __int32 *)&AlpcpMessageLogLock.WaitStatus + 1;
  _InterlockedIncrement(v1);
  return result;
}
