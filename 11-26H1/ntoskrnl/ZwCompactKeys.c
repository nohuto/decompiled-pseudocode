/*
 * XREFs of ZwCompactKeys @ 0x140729380
 * Callers:
 *     DifZwCompactKeysWrapper @ 0x1406A12C0 (DifZwCompactKeysWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwCompactKeys(ULONG Count, HANDLE KeyArray[])
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Count);
}
