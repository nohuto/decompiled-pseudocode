/*
 * XREFs of BgkDisplayCharacter @ 0x140C555B0
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x1405C8188 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1405C81AC (BgkpReleaseConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     BgDisplayFade @ 0x140C58B58 (BgDisplayFade.c)
 */

__int64 __fastcall BgkDisplayCharacter(unsigned __int16 a1, unsigned int a2)
{
  unsigned int v5; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  if ( byte_140E65F50 || byte_140E65F18 )
  {
    byte_140E65F50 = 0;
    byte_140E65F18 = 0;
    BgDisplayFade(0LL);
  }
  v5 = guard_dispatch_icall_no_overrides(a1, a2);
  BgkpReleaseConsole();
  return v5;
}
