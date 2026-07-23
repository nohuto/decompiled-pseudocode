/*
 * XREFs of MiVerifyMirrorPacketPages @ 0x1406F4ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiVerifyMirrorPacketPages(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = *(_DWORD *)(a1 + 8);
  v4 = a2 << 18;
  if ( v3 != 1 )
    v4 = a2;
  v5 = a3 << 18;
  v6 = v4 << 12;
  if ( v3 != 1 )
    v5 = a3;
  return guard_dispatch_icall_no_overrides(v6, v5 << 12);
}
