/*
 * XREFs of BgkDisplayStringEx @ 0x1405C5504
 * Callers:
 *     BgkDisplayString @ 0x1405C5450 (BgkDisplayString.c)
 *     NtDisplayString @ 0x140837360 (NtDisplayString.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     BgkpAcquireConsole @ 0x1405C5918 (BgkpAcquireConsole.c)
 *     HeadlessDispatch @ 0x1406CB870 (HeadlessDispatch.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     BgDisplayFade @ 0x140C52B58 (BgDisplayFade.c)
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
  if ( byte_140E65D3D || byte_140E65D09 )
  {
    byte_140E65D3D = 0;
    byte_140E65D09 = 0;
    BgDisplayFade();
  }
  v5 = (int)guard_dispatch_icall_no_overrides(a1, v4) >= 0;
  ExReleaseRundownProtection_0(&stru_140E0AA10);
  return v5;
}
