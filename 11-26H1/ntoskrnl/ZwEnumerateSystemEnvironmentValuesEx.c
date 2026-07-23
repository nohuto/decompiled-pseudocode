/*
 * XREFs of ZwEnumerateSystemEnvironmentValuesEx @ 0x140729CE0
 * Callers:
 *     DifZwEnumerateSystemEnvironmentValuesExWrapper @ 0x1406A9200 (DifZwEnumerateSystemEnvironmentValuesExWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwEnumerateSystemEnvironmentValuesEx(ULONG InformationClass, PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&InformationClass);
}
