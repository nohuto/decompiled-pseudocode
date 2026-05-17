/*
 * XREFs of RtlpDestroyExecutionRequiredRequest @ 0x18010E6A4
 * Callers:
 *     RtlpHeapPerformCrossProcessQuery @ 0x180113660 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     RtlpSetClearExecutionRequiredRequest @ 0x18010E6CC (RtlpSetClearExecutionRequiredRequest.c)
 */

NTSTATUS __fastcall RtlpDestroyExecutionRequiredRequest(HANDLE Handle)
{
  RtlpSetClearExecutionRequiredRequest(Handle, 0LL, 0LL);
  return NtClose(Handle);
}
