/*
 * XREFs of RtlpTpWaitRundown @ 0x1800DAA10
 * Callers:
 *     RtlpTpWaitFinalizationCallback @ 0x1800DA9E0 (RtlpTpWaitFinalizationCallback.c)
 *     RtlDeregisterWaitEx @ 0x180108160 (RtlDeregisterWaitEx.c)
 * Callees:
 *     ZwSetEvent @ 0x18015F000 (ZwSetEvent.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 */

LOGICAL __fastcall RtlpTpWaitRundown(HANDLE *BaseAddress)
{
  HANDLE v2; // rcx

  v2 = BaseAddress[10];
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  if ( *BaseAddress )
    NtClose(*BaseAddress);
  return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
