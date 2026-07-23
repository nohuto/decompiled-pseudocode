/*
 * XREFs of RtlpFcLinearSearchInSortedArray @ 0x18016E8F8
 * Callers:
 *     RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x18016E1FC (RtlpFcHasEffectiveStateInGovernedFeatureInfoTable.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpFcLinearSearchInSortedArray(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64))
{
  unsigned __int64 i; // rdi
  int v9; // eax

  for ( i = 0LL; i < a3; ++i )
  {
    v9 = a5(a1, a2);
    if ( v9 < 0 )
      break;
    if ( !v9 )
      return a2;
    a2 += 16LL;
  }
  return 0LL;
}
