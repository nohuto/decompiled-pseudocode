/*
 * XREFs of NtCreateProcessEx @ 0x140B6ABD0
 * Callers:
 *     DifNtCreateProcessExWrapper @ 0x140676510 (DifNtCreateProcessExWrapper.c)
 *     NtCreateProcess @ 0x1407F5750 (NtCreateProcess.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     PspCreateProcess @ 0x140AD9D10 (PspCreateProcess.c)
 */

NTSTATUS __cdecl NtCreateProcessEx(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ParentProcess,
        ULONG Flags,
        HANDLE SectionHandle,
        HANDLE DebugPort,
        HANDLE TokenHandle,
        ULONG Reserved)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 ULong64FromUser; // rax

  if ( !ParentProcess )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(ProcessHandle);
    RtlWriteULong64ToUser(ProcessHandle, ULong64FromUser);
  }
  return PspCreateProcess(
           ProcessHandle,
           DesiredAccess,
           (__int64)ObjectAttributes,
           (ULONG_PTR)ParentProcess,
           PreviousMode,
           Flags,
           SectionHandle,
           DebugPort,
           (__int64)TokenHandle);
}
