/*
 * XREFs of RtlDeleteSecurityObject @ 0x1800E3530
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 */

NTSTATUS __cdecl RtlDeleteSecurityObject(PSECURITY_DESCRIPTOR *ObjectDescriptor)
{
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, *ObjectDescriptor);
  return 0;
}
