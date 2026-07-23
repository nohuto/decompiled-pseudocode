/*
 * XREFs of LsaCallAuthenticationPackage @ 0x140816150
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __cdecl LsaCallAuthenticationPackage(
        HANDLE LsaHandle,
        ULONG AuthenticationPackage,
        PVOID ProtocolSubmitBuffer,
        ULONG SubmitBufferLength,
        PVOID *ProtocolReturnBuffer,
        PULONG ReturnBufferLength,
        PNTSTATUS ProtocolStatus)
{
  NTSTATUS v9; // ebx

  v9 = -1073741822;
  if ( ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.AbCompletedIoQoSBoostCount) )
  {
    v9 = guard_dispatch_icall_no_overrides((__int64)LsaHandle, AuthenticationPackage);
    ExReleaseExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.AbCompletedIoQoSBoostCount);
  }
  return v9;
}
