/*
 * XREFs of VerifierFsRtlDissectName @ 0x140B7EA50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VerifierFsRtlDissectName(__int128 *a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  return guard_dispatch_icall_no_overrides(&v2);
}
