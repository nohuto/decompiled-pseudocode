/*
 * XREFs of ZwQuerySection @ 0x14069BB60
 * Callers:
 *     CmSiGetSectionLength @ 0x140492AD8 (CmSiGetSectionLength.c)
 *     DifZwQuerySectionWrapper @ 0x14063A410 (DifZwQuerySectionWrapper.c)
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
