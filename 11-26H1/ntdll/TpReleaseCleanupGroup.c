/*
 * XREFs of TpReleaseCleanupGroup @ 0x1800FEEC0
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 */

void __cdecl TpReleaseCleanupGroup(PTP_CLEANUP_GROUP CleanupGroup)
{
  if ( !CleanupGroup )
    goto LABEL_6;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return;
  if ( _InterlockedExchange(&CleanupGroup->Released, 1) )
  {
LABEL_6:
    TppRaiseInvalidParameter();
  }
  else if ( _InterlockedExchangeAdd(&CleanupGroup->Refcount.Refcount, 0xFFFFFFFF) == 1 )
  {
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag, CleanupGroup);
  }
}
