/*
 * XREFs of LsaLogonUser @ 0x140816260
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall LsaLogonUser(
        HANDLE LsaHandle,
        PLSA_STRING OriginName,
        SECURITY_LOGON_TYPE LogonType,
        ULONG AuthenticationPackage,
        PVOID AuthenticationInformation,
        ULONG AuthenticationInformationLength,
        PTOKEN_GROUPS LocalGroups,
        PTOKEN_SOURCE SourceContext,
        PVOID *ProfileBuffer,
        PULONG ProfileBufferLength,
        PLUID LogonId,
        PHANDLE Token,
        PQUOTA_LIMITS Quotas,
        PNTSTATUS SubStatus)
{
  NTSTATUS v16; // ebx

  v16 = -1073741822;
  if ( ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.AbCompletedIoQoSBoostCount) )
  {
    v16 = guard_dispatch_icall_no_overrides((__int64)LsaHandle, (__int64)OriginName);
    ExReleaseExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.AbCompletedIoQoSBoostCount);
  }
  return v16;
}
