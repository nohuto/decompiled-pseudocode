/*
 * XREFs of HvlGetSharedPageVa @ 0x140440388
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x1404401A0 (RtlGetMultiTimePrecise.c)
 *     MiInitializeSharedUserData @ 0x140CF82E0 (MiInitializeSharedUserData.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __fastcall HvlGetSharedPageVa(__int64 a1, __int64 a2)
{
  PVOID result; // rax

  result = HvlpReferenceTscPage;
  if ( !HvlpReferenceTscPage )
    return (PVOID)guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
