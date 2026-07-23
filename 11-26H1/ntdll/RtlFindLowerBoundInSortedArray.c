/*
 * XREFs of RtlFindLowerBoundInSortedArray @ 0x18016E5B0
 * Callers:
 *     RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x18016E1FC (RtlpFcHasEffectiveStateInGovernedFeatureInfoTable.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x18016E36C (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 *     RtlpFcGetFeatureHasSubscriptionsFromBuffer @ 0x18016E488 (RtlpFcGetFeatureHasSubscriptionsFromBuffer.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall RtlFindLowerBoundInSortedArray(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, unsigned __int64))
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // rbp
  int v10; // ecx

  v5 = a3;
  v6 = a2;
  v7 = a2 + 16 * a3;
  if ( a2 < v7 )
  {
    do
    {
      v9 = v6 + 16 * (v5 >> 1);
      v10 = a5(a1, v9);
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
        v6 = v9 + 16;
    }
    while ( v6 < v7 );
  }
  return v6;
}
