/*
 * XREFs of ZwAllocateUuids @ 0x140728EA0
 * Callers:
 *     DifZwAllocateUuidsWrapper @ 0x14069D780 (DifZwAllocateUuidsWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateUuids(PULARGE_INTEGER Time, PULONG Range, PULONG Sequence, PCHAR Seed)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Time);
}
