/*
 * XREFs of MiInitializeChannelRangesTemporary @ 0x140D02DE4
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void MiInitializeChannelRangesTemporary()
{
  __int128 v0; // [rsp+50h] [rbp-20h]

  v0 = 0LL;
  if ( dword_140FBF218 && !BYTE1(stru_140E366D8.ReadyTime) )
  {
    if ( dword_140FBF22C )
      guard_dispatch_icall_no_overrides(31LL, 8LL);
  }
}
