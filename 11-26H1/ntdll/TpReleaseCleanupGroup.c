/*
 * XREFs of TpReleaseCleanupGroup @ 0x1800FF770
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 */

void __fastcall TpReleaseCleanupGroup(volatile signed __int32 *a1)
{
  if ( !a1 )
    goto LABEL_6;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return;
  if ( _InterlockedExchange(a1 + 1, 1) )
  {
LABEL_6:
    TppRaiseInvalidParameter();
  }
  else if ( _InterlockedExchangeAdd(a1, 0xFFFFFFFF) == 1 )
  {
    RtlFreeHeap_0();
  }
}
