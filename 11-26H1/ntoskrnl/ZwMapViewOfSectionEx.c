/*
 * XREFs of ZwMapViewOfSectionEx @ 0x14072A3A0
 * Callers:
 *     DifZwMapViewOfSectionExWrapper @ 0x1406ADD70 (DifZwMapViewOfSectionExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMapViewOfSectionEx(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        ULONG AllocationType,
        ULONG PageProtection,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
