/*
 * XREFs of SeGetCachedSigningLevel @ 0x140AAB6B0
 * Callers:
 *     NtGetCachedSigningLevel @ 0x140815170 (NtGetCachedSigningLevel.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeGetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !SepRmCapTableLock.WriteOperationCount )
    return 3221225473LL;
  if ( a1 && a2 && a3 )
    return guard_dispatch_icall_no_overrides(a1, a3);
  return 3221225485LL;
}
