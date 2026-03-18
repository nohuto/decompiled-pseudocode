/*
 * XREFs of ZwAllocateLocallyUniqueId @ 0x140724250
 * Callers:
 *     DifZwAllocateLocallyUniqueIdWrapper @ 0x140699590 (DifZwAllocateLocallyUniqueIdWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateLocallyUniqueId(PLUID Luid)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(Luid, v1);
}
