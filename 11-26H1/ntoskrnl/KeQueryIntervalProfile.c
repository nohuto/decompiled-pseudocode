/*
 * XREFs of KeQueryIntervalProfile @ 0x1407BDE5C
 * Callers:
 *     KeSetIntervalProfile @ 0x1407BDF28 (KeSetIntervalProfile.c)
 *     NtQueryIntervalProfile @ 0x14084B810 (NtQueryIntervalProfile.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeQueryIntervalProfile(int a1)
{
  if ( a1 == 1 )
    return (unsigned int)KiProfileAlignmentFixupInterval;
  guard_dispatch_icall_no_overrides(1LL, 24LL);
  return 0LL;
}
