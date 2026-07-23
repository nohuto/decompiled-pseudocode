/*
 * XREFs of ZwAllocateLocallyUniqueId @ 0x140728E20
 * Callers:
 *     DifZwAllocateLocallyUniqueIdWrapper @ 0x14069D170 (DifZwAllocateLocallyUniqueIdWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateLocallyUniqueId(PLUID Luid)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Luid);
}
