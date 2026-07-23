/*
 * XREFs of ZwExtendSection @ 0x14069CEA0
 * Callers:
 *     CmSiExtendSection @ 0x1404B4320 (CmSiExtendSection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewSectionSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
