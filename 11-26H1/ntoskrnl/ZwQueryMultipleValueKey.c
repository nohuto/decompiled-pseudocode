/*
 * XREFs of ZwQueryMultipleValueKey @ 0x14072AC00
 * Callers:
 *     DifZwQueryMultipleValueKeyWrapper @ 0x1406B6820 (DifZwQueryMultipleValueKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryMultipleValueKey(
        HANDLE KeyHandle,
        PKEY_VALUE_ENTRY ValueEntries,
        ULONG EntryCount,
        PVOID ValueBuffer,
        PULONG BufferLength,
        PULONG RequiredBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
