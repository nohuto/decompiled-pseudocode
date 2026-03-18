/*
 * XREFs of PcwCreateInstance @ 0x140A69810
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpPcwDisabledStatus @ 0x140A69904 (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwCreateInstance(
        PPCW_INSTANCE *Instance,
        PPCW_REGISTRATION Registration,
        PCUNICODE_STRING Name,
        ULONG Count,
        PPCW_DATA Data)
{
  __int64 v7; // rcx
  NTSTATUS v8; // ebx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
  {
    v8 = guard_dispatch_icall_no_overrides((__int64)Instance, (__int64)Registration);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
  else
  {
    *Instance = 0LL;
    return ExpPcwDisabledStatus(v7);
  }
  return v8;
}
