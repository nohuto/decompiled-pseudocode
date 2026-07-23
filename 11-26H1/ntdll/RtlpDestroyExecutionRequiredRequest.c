/*
 * XREFs of RtlpDestroyExecutionRequiredRequest @ 0x18010E1F4
 * Callers:
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800926EC (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     RtlpSetClearExecutionRequiredRequest @ 0x18010E21C (RtlpSetClearExecutionRequiredRequest.c)
 */

NTSTATUS __fastcall RtlpDestroyExecutionRequiredRequest(HANDLE Handle)
{
  RtlpSetClearExecutionRequiredRequest(Handle, 0LL, 0LL);
  return NtClose(Handle);
}
