/*
 * XREFs of ZwUnmapViewOfSectionEx @ 0x14069ED20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnmapViewOfSectionEx(HANDLE ProcessHandle, PVOID BaseAddress, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
