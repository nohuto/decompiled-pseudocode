/*
 * XREFs of ZwOpenSection @ 0x140723AD0
 * Callers:
 *     DifZwOpenSectionWrapper @ 0x1406AD4A0 (DifZwOpenSectionWrapper.c)
 *     NtGetNlsSectionPtr @ 0x140A97650 (NtGetNlsSectionPtr.c)
 *     EmpMapPhysicalAddress @ 0x140CB7B1C (EmpMapPhysicalAddress.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140CECE84 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle, *(_QWORD *)&DesiredAccess);
}
