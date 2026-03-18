/*
 * XREFs of RtlFindLowerBoundInSortedArray @ 0x140A49220
 * Callers:
 *     CmpFindSecurityCellCacheIndex @ 0x140472390 (CmpFindSecurityCellCacheIndex.c)
 *     RtlpFcIsGovernedFeatureTableUpdateNeeded @ 0x140809FE8 (RtlpFcIsGovernedFeatureTableUpdateNeeded.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x140A49030 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 *     RtlpFcGetFeatureHasSubscriptionsFromBuffer @ 0x140A4911C (RtlpFcGetFeatureHasSubscriptionsFromBuffer.c)
 *     RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x140A492D0 (RtlpFcHasEffectiveStateInGovernedFeatureInfoTable.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall RtlFindLowerBoundInSortedArray(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v9; // r14
  int v10; // ecx

  v5 = a3;
  v6 = a2;
  v7 = a2 + a4 * a3;
  if ( a2 < v7 )
  {
    do
    {
      v9 = v6 + a4 * (v5 >> 1);
      v10 = guard_dispatch_icall_no_overrides(a1, v9);
      if ( v10 > 0 )
      {
        v5 += -1LL - (v5 >> 1);
      }
      else
      {
        v5 >>= 1;
        v7 = v9;
      }
      if ( v10 > 0 )
        v6 = v9 + a4;
    }
    while ( v6 < v7 );
  }
  return v6;
}
