/*
 * XREFs of NtQueryInformationByName @ 0x140985770
 * Callers:
 *     DifNtQueryInformationByNameWrapper @ 0x1406862F0 (DifNtQueryInformationByNameWrapper.c)
 * Callees:
 *     IoQueryInformationByName @ 0x1409857A0 (IoQueryInformationByName.c)
 */

NTSTATUS __cdecl NtQueryInformationByName(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  return IoQueryInformationByName(
           ObjectAttributes,
           IoStatusBlock,
           FileInformation,
           Length,
           FileInformationClass,
           0,
           0LL);
}
