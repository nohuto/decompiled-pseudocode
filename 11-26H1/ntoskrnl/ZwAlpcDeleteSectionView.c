/*
 * XREFs of ZwAlpcDeleteSectionView @ 0x140729040
 * Callers:
 *     DifZwAlpcDeleteSectionViewWrapper @ 0x14069EBD0 (DifZwAlpcDeleteSectionViewWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDeleteSectionView(HANDLE PortHandle, ULONG Flags, PVOID ViewBase)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
