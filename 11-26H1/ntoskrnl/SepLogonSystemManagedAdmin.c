/*
 * XREFs of SepLogonSystemManagedAdmin @ 0x140B50F90
 * Callers:
 *     NtQueryInformationToken @ 0x140B79CE0 (NtQueryInformationToken.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     Feature_AdminlessElevatedToken__private_IsEnabledDeviceUsageNoInline @ 0x1404DF174 (Feature_AdminlessElevatedToken__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SepLogonSystemManagedAdmin(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi

  v4 = -1073741822;
  if ( (unsigned int)Feature_AdminlessElevatedToken__private_IsEnabledDeviceUsageNoInline()
    && ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.PriorityFloorCounts[8]) )
  {
    v4 = guard_dispatch_icall_no_overrides(a1, a2);
    ExReleaseExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.PriorityFloorCounts[8]);
  }
  return v4;
}
