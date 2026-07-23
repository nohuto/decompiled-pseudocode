/*
 * XREFs of RtlDestroyProcessParameters @ 0x1800FC320
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 */

NTSTATUS __cdecl RtlDestroyProcessParameters(PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
{
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, ProcessParameters);
  return 0;
}
