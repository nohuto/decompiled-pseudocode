/*
 * XREFs of KsepPoolFreeNonPaged @ 0x1404DCB40
 * Callers:
 *     KsepCompletionSafeWrapper @ 0x1404DCA90 (KsepCompletionSafeWrapper.c)
 *     KseShimDriverIoCallbacks @ 0x140A39400 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement((volatile signed __int32 *)&AlpcpMessageLogLock.UserIdealProcessor);
  }
}
