/*
 * XREFs of PsQueryActivityModerationUserSettings @ 0x1405303A0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsQueryActivityModerationUserSettings(_QWORD *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost) )
  {
    v3 = guard_dispatch_icall_no_overrides(&v5, v2);
    if ( v3 >= 0 )
      *a1 = v5;
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(PspBamExtensionHost + 88));
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v3;
}
