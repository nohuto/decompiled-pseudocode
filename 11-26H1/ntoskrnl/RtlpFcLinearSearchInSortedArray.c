/*
 * XREFs of RtlpFcLinearSearchInSortedArray @ 0x140B49234
 * Callers:
 *     RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x140A525C0 (RtlpFcHasEffectiveStateInGovernedFeatureInfoTable.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpFcLinearSearchInSortedArray(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 i; // rdi
  int v7; // eax

  for ( i = 0LL; ; ++i )
  {
    if ( i >= a3 )
      return 0LL;
    v7 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v7 < 0 )
      return 0LL;
    if ( !v7 )
      break;
    a2 += 16LL;
  }
  return a2;
}
