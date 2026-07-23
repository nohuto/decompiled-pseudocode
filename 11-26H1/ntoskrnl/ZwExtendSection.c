/*
 * XREFs of ZwExtendSection @ 0x140729D20
 * Callers:
 *     CmSiExtendSection @ 0x1404EAC34 (CmSiExtendSection.c)
 *     DifZwExtendSectionWrapper @ 0x1406A96E0 (DifZwExtendSectionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewSectionSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
