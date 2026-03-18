/*
 * XREFs of KsepPoolFreeNonPaged @ 0x1404E35A0
 * Callers:
 *     KsepCompletionSafeWrapper @ 0x1404E34F0 (KsepCompletionSafeWrapper.c)
 *     KseShimDriverIoCallbacks @ 0x140A26360 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement((_DWORD *)&AlpcpMessageLogLock.Queue + 1);
  }
}
