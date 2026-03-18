/*
 * XREFs of BgkSetCursor @ 0x140C4F7C0
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x1405C5918 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1405C593C (BgkpReleaseConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BgkSetCursor(unsigned int a1, unsigned int a2)
{
  unsigned int v5; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v5 = guard_dispatch_icall_no_overrides(a1, a2);
  BgkpReleaseConsole();
  return v5;
}
