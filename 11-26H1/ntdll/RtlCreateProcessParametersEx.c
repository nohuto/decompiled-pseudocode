/*
 * XREFs of RtlCreateProcessParametersEx @ 0x18009EBB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateProcessParametersInternal @ 0x18009E510 (RtlCreateProcessParametersInternal.c)
 */

NTSTATUS __cdecl RtlCreateProcessParametersEx(
        PRTL_USER_PROCESS_PARAMETERS *pProcessParameters,
        PUNICODE_STRING ImagePathName,
        PUNICODE_STRING DllPath,
        PUNICODE_STRING CurrentDirectory,
        PUNICODE_STRING CommandLine,
        PVOID Environment,
        PUNICODE_STRING WindowTitle,
        PUNICODE_STRING DesktopInfo,
        PUNICODE_STRING ShellInfo,
        PUNICODE_STRING RuntimeData,
        ULONG Flags)
{
  return RtlCreateProcessParametersInternal(
           pProcessParameters,
           &ImagePathName->Length,
           (__int64)DllPath,
           &CurrentDirectory->Length,
           (__int64)CommandLine,
           Environment,
           &WindowTitle->Length,
           &DesktopInfo->Length,
           (__int64)ShellInfo,
           (__int64)RuntimeData,
           0LL,
           Flags);
}
