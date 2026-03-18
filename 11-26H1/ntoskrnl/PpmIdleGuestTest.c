/*
 * XREFs of PpmIdleGuestTest @ 0x140611E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmIdleGuestTest(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edx

  v3 = 0;
  if ( a3 != -1 && *(_QWORD *)(PpmPlatformStates + 16) )
    return (unsigned int)guard_dispatch_icall_no_overrides(a1, 0LL);
  return v3;
}
