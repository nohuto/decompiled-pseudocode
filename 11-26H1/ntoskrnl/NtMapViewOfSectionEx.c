/*
 * XREFs of NtMapViewOfSectionEx @ 0x1409EDA90
 * Callers:
 *     DifNtMapViewOfSectionExWrapper @ 0x14067F570 (DifNtMapViewOfSectionExWrapper.c)
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x1409EDD40 (MiMapViewOfSectionExCommon.c)
 */

NTSTATUS __cdecl NtMapViewOfSectionEx(
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
  return MiMapViewOfSectionExCommon(
           (ULONG_PTR)SectionHandle,
           (ULONG_PTR)ProcessHandle,
           (__int64)SectionOffset,
           (__int64)ViewSize,
           AllocationType,
           PageProtection,
           ExtendedParameters,
           ExtendedParameterCount,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode,
           0);
}
