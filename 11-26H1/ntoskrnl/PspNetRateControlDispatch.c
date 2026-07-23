/*
 * XREFs of PspNetRateControlDispatch @ 0x1407FE9B0
 * Callers:
 *     PspJobDelete @ 0x1406187E0 (PspJobDelete.c)
 *     PspSetNetRateControl @ 0x1407FF594 (PspSetNetRateControl.c)
 *     PspQueryRateControlHistory @ 0x140A856AC (PspQueryRateControlHistory.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PspNetRateControlDispatch(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PsAltSystemCallRegistrationLock.TrapFrame) )
  {
    v3 = guard_dispatch_icall_no_overrides(a1, v2);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PsAltSystemCallRegistrationLock.TrapFrame);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
