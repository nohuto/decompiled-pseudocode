/*
 * XREFs of PcwAddInstance @ 0x140A69670
 * Callers:
 *     FsRtlDiskIOCounterSetCallback @ 0x140A67C10 (FsRtlDiskIOCounterSetCallback.c)
 *     PoThermalCounterSetCallback @ 0x140A691E0 (PoThermalCounterSetCallback.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A693C0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpPcwDisabledStatus @ 0x140A69904 (ExpPcwDisabledStatus.c)
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
