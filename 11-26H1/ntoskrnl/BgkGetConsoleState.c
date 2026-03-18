/*
 * XREFs of BgkGetConsoleState @ 0x140C4F6E0
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x1405C5918 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1405C593C (BgkpReleaseConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BgkGetConsoleState(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v4; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v4 = guard_dispatch_icall_no_overrides(a1, v2);
  BgkpReleaseConsole();
  return v4;
}
