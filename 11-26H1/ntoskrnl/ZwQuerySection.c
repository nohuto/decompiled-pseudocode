/*
 * XREFs of ZwQuerySection @ 0x1407289E0
 * Callers:
 *     CmSiGetSectionLength @ 0x1404C94A4 (CmSiGetSectionLength.c)
 *     DifZwQuerySectionWrapper @ 0x1406B7380 (DifZwQuerySectionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T SectionInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
