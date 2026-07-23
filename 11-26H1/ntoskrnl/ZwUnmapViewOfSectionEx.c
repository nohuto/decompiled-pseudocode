/*
 * XREFs of ZwUnmapViewOfSectionEx @ 0x14072BBC0
 * Callers:
 *     DifZwUnmapViewOfSectionExWrapper @ 0x1406C2460 (DifZwUnmapViewOfSectionExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnmapViewOfSectionEx(HANDLE ProcessHandle, PVOID BaseAddress, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
