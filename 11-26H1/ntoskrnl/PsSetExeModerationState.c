/*
 * XREFs of PsSetExeModerationState @ 0x140614F64
 * Callers:
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsSetExeModerationState(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost) )
  {
    v4 = guard_dispatch_icall_no_overrides(a1, a2);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(PspBamExtensionHost + 88));
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v4;
}
