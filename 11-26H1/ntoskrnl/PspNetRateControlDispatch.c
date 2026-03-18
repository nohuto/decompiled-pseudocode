/*
 * XREFs of PspNetRateControlDispatch @ 0x1407F8EB0
 * Callers:
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 *     PspSetNetRateControl @ 0x1407F9A94 (PspSetNetRateControl.c)
 *     PspQueryRateControlHistory @ 0x140A7F83C (PspQueryRateControlHistory.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PspNetRateControlDispatch(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PsAltSystemCallRegistrationLock.Header.WaitListHead.Blink) )
  {
    v3 = guard_dispatch_icall_no_overrides(a1, v2);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PsAltSystemCallRegistrationLock.Header.WaitListHead.Blink);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
