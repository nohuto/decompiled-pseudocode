/*
 * XREFs of ZwGetMUIRegistryInfo @ 0x140729FA0
 * Callers:
 *     DifZwGetMUIRegistryInfoWrapper @ 0x1406AB530 (DifZwGetMUIRegistryInfoWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwGetMUIRegistryInfo(ULONG Flags, PULONG DataSize, PVOID Data)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Flags);
}
