/*
 * XREFs of KeQueryIntervalProfile @ 0x1407BADFC
 * Callers:
 *     KeSetIntervalProfile @ 0x1407BAEC8 (KeSetIntervalProfile.c)
 *     NtQueryIntervalProfile @ 0x140842770 (NtQueryIntervalProfile.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeQueryIntervalProfile(int a1)
{
  if ( a1 == 1 )
    return (unsigned int)KiProfileAlignmentFixupInterval;
  guard_dispatch_icall_no_overrides(1LL, 24LL);
  return 0LL;
}
