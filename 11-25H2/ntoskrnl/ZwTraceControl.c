/*
 * XREFs of ZwTraceControl @ 0x14069EC00
 * Callers:
 *     EtwWriteStartScenario @ 0x140A9A900 (EtwWriteStartScenario.c)
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
