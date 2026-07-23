/*
 * XREFs of PcwAddInstance @ 0x140A76640
 * Callers:
 *     FsRtlDiskIOCounterSetCallback @ 0x140A74BE0 (FsRtlDiskIOCounterSetCallback.c)
 *     PoThermalCounterSetCallback @ 0x140A761B0 (PoThermalCounterSetCallback.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A76390 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpPcwDisabledStatus @ 0x140A768D4 (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwAddInstance(PPCW_BUFFER Buffer, PCUNICODE_STRING Name, ULONG Id, ULONG Count, PPCW_DATA Data)
{
  __int64 v7; // rcx
  NTSTATUS v8; // ebx

  if ( !ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
    return ExpPcwDisabledStatus(v7);
  v8 = guard_dispatch_icall_no_overrides((__int64)Buffer, (__int64)Name);
  ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  return v8;
}
