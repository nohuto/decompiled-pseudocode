/*
 * XREFs of ZwTraceEvent @ 0x140728B80
 * Callers:
 *     DifZwTraceEventWrapper @ 0x1406C16E0 (DifZwTraceEventWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTraceEvent(HANDLE TraceHandle, ULONG Flags, ULONG FieldSize, PVOID Fields)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TraceHandle);
}
