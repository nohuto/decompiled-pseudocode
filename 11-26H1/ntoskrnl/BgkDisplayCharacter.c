/*
 * XREFs of BgkDisplayCharacter @ 0x140C4F5B0
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x1405C5918 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1405C593C (BgkpReleaseConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     BgDisplayFade @ 0x140C52B58 (BgDisplayFade.c)
 */

__int64 __fastcall BgkDisplayCharacter(unsigned __int16 a1, unsigned int a2)
{
  unsigned int v5; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  if ( byte_140E65D3D || byte_140E65D09 )
  {
    byte_140E65D3D = 0;
    byte_140E65D09 = 0;
    BgDisplayFade(0LL);
  }
  v5 = guard_dispatch_icall_no_overrides(a1, a2);
  BgkpReleaseConsole();
  return v5;
}
