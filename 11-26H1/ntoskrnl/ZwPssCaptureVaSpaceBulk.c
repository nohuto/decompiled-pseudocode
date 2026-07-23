/*
 * XREFs of ZwPssCaptureVaSpaceBulk @ 0x14072A8C0
 * Callers:
 *     DifZwPssCaptureVaSpaceBulkWrapper @ 0x1406B3110 (DifZwPssCaptureVaSpaceBulkWrapper.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14084BEC0 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPssCaptureVaSpaceBulk(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PNTPSS_MEMORY_BULK_INFORMATION BulkInformation,
        SIZE_T BulkInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
