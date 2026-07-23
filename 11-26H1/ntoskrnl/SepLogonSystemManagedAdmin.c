/*
 * XREFs of SepLogonSystemManagedAdmin @ 0x140B53828
 * Callers:
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     Feature_AdminlessElevatedToken__private_IsEnabledDeviceUsageNoInline @ 0x1404D8854 (Feature_AdminlessElevatedToken__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SepLogonSystemManagedAdmin(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi

  v4 = -1073741822;
  if ( (unsigned int)Feature_AdminlessElevatedToken__private_IsEnabledDeviceUsageNoInline()
    && ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.AbCompletedIoQoSBoostCount) )
  {
    v4 = guard_dispatch_icall_no_overrides(a1, a2);
    ExReleaseExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.AbCompletedIoQoSBoostCount);
  }
  return v4;
}
