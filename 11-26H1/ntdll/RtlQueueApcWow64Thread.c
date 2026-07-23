/*
 * XREFs of RtlQueueApcWow64Thread @ 0x18013A6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlQueueApcWow64Thread(
        HANDLE ThreadHandle,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  return NtQueueApcThread(
           ThreadHandle,
           (PPS_APC_ROUTINE)(-4LL * (_QWORD)ApcRoutine),
           ApcArgument1,
           ApcArgument2,
           ApcArgument3);
}
