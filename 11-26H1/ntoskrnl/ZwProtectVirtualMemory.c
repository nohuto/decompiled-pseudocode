/*
 * XREFs of ZwProtectVirtualMemory @ 0x1407289C0
 * Callers:
 *     CmSiProtectViewOfSection @ 0x14049C6F4 (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x1405FAB48 (KiOpPatchCode.c)
 *     DifZwProtectVirtualMemoryWrapper @ 0x1406B2F60 (DifZwProtectVirtualMemoryWrapper.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409ED50C (WbMakeUserDataPagesKernelWritable.c)
 *     MiCheckForUserStackOverflow @ 0x140AA4214 (MiCheckForUserStackOverflow.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
