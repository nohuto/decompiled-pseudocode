/*
 * XREFs of WerKernelCloseHandle @ 0x140058474
 * Callers:
 *     TelemetryData_SubmitReport @ 0x14007F468 (TelemetryData_SubmitReport.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WerKernelCloseHandle(void *a1)
{
  if ( a1 )
    return ZwClose(a1);
  else
    return -1073741811;
}
