/*
 * XREFs of ZwCreateSectionEx @ 0x140729880
 * Callers:
 *     DifZwCreateSectionExWrapper @ 0x1406A5580 (DifZwCreateSectionExWrapper.c)
 *     PsCheckProcessFileSigningLevel @ 0x1407F7F30 (PsCheckProcessFileSigningLevel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateSectionEx(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
