/*
 * XREFs of MiInitializeChannelRangesTemporary @ 0x140CFCA64
 * Callers:
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void MiInitializeChannelRangesTemporary()
{
  __int128 v0; // [rsp+50h] [rbp-20h]

  v0 = 0LL;
  if ( dword_140FBE218 && !BYTE1(stru_140E36558.ReadyTime) )
  {
    if ( dword_140FBE22C )
      guard_dispatch_icall_no_overrides(31LL, 8LL);
  }
}
