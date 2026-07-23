/*
 * XREFs of ZwQueryOpenSubKeys @ 0x14072AC40
 * Callers:
 *     DifZwQueryOpenSubKeysWrapper @ 0x1406B6EC0 (DifZwQueryOpenSubKeysWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
