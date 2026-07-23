/*
 * XREFs of NtSetEvent @ 0x140A5BEF0
 * Callers:
 *     DifNtSetEventWrapper @ 0x14068EEC0 (DifNtSetEventWrapper.c)
 *     SepAdtInitializeAuditingOptions @ 0x140CE4BC0 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtSetEventEx @ 0x140A5BF10 (NtSetEventEx.c)
 */

NTSTATUS __cdecl NtSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  return NtSetEventEx(EventHandle);
}
