/*
 * XREFs of ZwQueryOpenSubKeysEx @ 0x14072AC60
 * Callers:
 *     DifZwQueryOpenSubKeysExWrapper @ 0x1406B6D30 (DifZwQueryOpenSubKeysExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryOpenSubKeysEx(
        POBJECT_ATTRIBUTES TargetKey,
        ULONG BufferLength,
        PVOID Buffer,
        PULONG RequiredSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
