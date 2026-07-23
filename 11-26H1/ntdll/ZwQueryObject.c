/*
 * XREFs of ZwQueryObject @ 0x18015F040
 * Callers:
 *     PsspWalkHandleTable @ 0x1800B3A60 (PsspWalkHandleTable.c)
 *     RtlpWow64NinjaSuspendThread @ 0x180138848 (RtlpWow64NinjaSuspendThread.c)
 *     RtlpWow64SuspendProcess @ 0x180138A38 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 16;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
