/*
 * XREFs of VerifierEtwUnregister @ 0x140B91580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     VfTargetEtwUnregister @ 0x140B7B5C0 (VfTargetEtwUnregister.c)
 */

__int64 __fastcall VerifierEtwUnregister(__int64 a1)
{
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 )
    VfTargetEtwUnregister(a1, retaddr);
  return guard_dispatch_icall_no_overrides(a1);
}
