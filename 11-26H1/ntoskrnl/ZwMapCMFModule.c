/*
 * XREFs of ZwMapCMFModule @ 0x14072A360
 * Callers:
 *     DifZwMapCMFModuleWrapper @ 0x1406AD8C0 (DifZwMapCMFModuleWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwMapCMFModule(
        ULONG What,
        ULONG Index,
        PULONG CacheIndexOut,
        PULONG CacheFlagsOut,
        PULONG ViewSizeOut,
        PVOID *BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&What);
}
