/*
 * XREFs of ZwSystemDebugControl @ 0x14072B9E0
 * Callers:
 *     DifZwSystemDebugControlWrapper @ 0x1406C1210 (DifZwSystemDebugControlWrapper.c)
 *     PspLocateSystemDll @ 0x1407F3EEC (PspLocateSystemDll.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSystemDebugControl(
        SYSDBG_COMMAND Command,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Command);
}
