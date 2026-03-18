/*
 * XREFs of RtlDecompressBufferEx2 @ 0x1404BB340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlDecompressBufferEx2(unsigned __int8 a1, __int64 a2, unsigned int a3)
{
  if ( a1 < 2u )
    return 3221225485LL;
  if ( a1 > 8u )
    return 3221226079LL;
  return guard_dispatch_icall_no_overrides(a2, a3);
}
