/*
 * XREFs of PcwRegister @ 0x140A698A0
 * Callers:
 *     ExpRegisterCounterSet @ 0x140841C2C (ExpRegisterCounterSet.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpPcwDisabledStatus @ 0x140A69904 (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwRegister(PPCW_REGISTRATION *Registration, PPCW_REGISTRATION_INFORMATION Info)
{
  __int64 v4; // rcx
  NTSTATUS v5; // ebx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
  {
    v5 = guard_dispatch_icall_no_overrides((__int64)Registration, (__int64)Info);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
  else
  {
    *Registration = 0LL;
    return ExpPcwDisabledStatus(v4);
  }
  return v5;
}
