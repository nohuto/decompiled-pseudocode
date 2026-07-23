/*
 * XREFs of ZwAllocateReserveObject @ 0x140728E40
 * Callers:
 *     DifZwAllocateReserveObjectWrapper @ 0x14069D2E0 (DifZwAllocateReserveObjectWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateReserveObject(
        PHANDLE MemoryReserveHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        MEMORY_RESERVE_TYPE Type)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MemoryReserveHandle);
}
