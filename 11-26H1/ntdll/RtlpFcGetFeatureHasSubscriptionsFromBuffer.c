/*
 * XREFs of RtlpFcGetFeatureHasSubscriptionsFromBuffer @ 0x18016E488
 * Callers:
 *     RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x18016E1FC (RtlpFcHasEffectiveStateInGovernedFeatureInfoTable.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x18016E36C (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 * Callees:
 *     RtlFindLowerBoundInSortedArray @ 0x18016E5B0 (RtlFindLowerBoundInSortedArray.c)
 *     RtlFcpCompareFeatureIdToFeatureUsageSubscription @ 0x18016E660 (RtlFcpCompareFeatureIdToFeatureUsageSubscription.c)
 */

__int64 __fastcall RtlpFcGetFeatureHasSubscriptionsFromBuffer(int a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int *v5; // rsi
  unsigned int *v6; // rbx
  int v7; // edx
  unsigned int v8; // edx
  unsigned int *LowerBoundInSortedArray; // rax
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = a1;
  if ( a2 && (v5 = *(unsigned int **)(a2 + 8)) != 0LL )
  {
    if ( !*v5
      || (LowerBoundInSortedArray = (unsigned int *)RtlFindLowerBoundInSortedArray(
                                                      (unsigned int)&v11,
                                                      (int)v5 + 4,
                                                      *v5,
                                                      a4,
                                                      (__int64)RtlFcpCompareFeatureIdToFeatureUsageSubscription),
          v6 = LowerBoundInSortedArray,
          LowerBoundInSortedArray == &v5[4 * *v5 + 1])
      || *LowerBoundInSortedArray != v11 )
    {
      v6 = 0LL;
    }
    v7 = *(_DWORD *)(a3 + 4);
    if ( v6 )
    {
      v8 = v7 | 0x80;
      *(_DWORD *)(a3 + 4) = v8;
      if ( (v8 & 0x40) != 0 )
        return (v8 & 0x80u) == 0 ? 0xC0000225 : 0;
      v8 = v8 & 0xFFFFFFBF | ((*((_WORD *)v6 + 3) & 1) << 6);
    }
    else
    {
      v8 = v7 & 0xFFFFFF7F;
    }
    *(_DWORD *)(a3 + 4) = v8;
  }
  else
  {
    *(_DWORD *)(a3 + 4) &= ~0x80u;
    v8 = *(_DWORD *)(a3 + 4);
  }
  return (v8 & 0x80u) == 0 ? 0xC0000225 : 0;
}
