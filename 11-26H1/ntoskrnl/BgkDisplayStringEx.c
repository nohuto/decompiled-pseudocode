/*
 * XREFs of BgkDisplayStringEx @ 0x1405C7D74
 * Callers:
 *     BgkDisplayString @ 0x1405C7CC0 (BgkDisplayString.c)
 *     NtDisplayString @ 0x14083D5A0 (NtDisplayString.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     BgkpAcquireConsole @ 0x1405C8188 (BgkpAcquireConsole.c)
 *     HeadlessDispatch @ 0x1406CF8A0 (HeadlessDispatch.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     BgDisplayFade @ 0x140C58B58 (BgDisplayFade.c)
 */

char __fastcall BgkDisplayStringEx(_WORD *a1)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  bool v5; // bl

  if ( !a1 )
    return 0;
  if ( !*a1 )
    return 1;
  if ( !(unsigned __int8)BgkpAcquireConsole() )
    return 0;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  HeadlessDispatch(23LL, a1, 2 * v3 + 2);
  if ( byte_140E65F50 || byte_140E65F18 )
  {
    byte_140E65F50 = 0;
    byte_140E65F18 = 0;
    BgDisplayFade();
  }
  v5 = (int)guard_dispatch_icall_no_overrides(a1, v4) >= 0;
  ExReleaseRundownProtection_0(&stru_140E0AA10);
  return v5;
}
