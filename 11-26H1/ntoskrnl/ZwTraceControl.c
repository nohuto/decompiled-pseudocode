/*
 * XREFs of ZwTraceControl @ 0x14072BAA0
 * Callers:
 *     DifZwTraceControlWrapper @ 0x1406C1530 (DifZwTraceControlWrapper.c)
 *     EtwWriteStartScenario @ 0x140B476D0 (EtwWriteStartScenario.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwTraceControl(
        ETWTRACECONTROLCODE TraceControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&TraceControlCode);
}
