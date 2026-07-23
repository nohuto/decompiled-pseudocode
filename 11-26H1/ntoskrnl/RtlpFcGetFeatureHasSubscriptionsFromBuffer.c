/*
 * XREFs of RtlpFcGetFeatureHasSubscriptionsFromBuffer @ 0x140A5240C
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x140A52320 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 *     RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x140A525C0 (RtlpFcHasEffectiveStateInGovernedFeatureInfoTable.c)
 * Callees:
 *     RtlFindLowerBoundInSortedArray @ 0x140A52510 (RtlFindLowerBoundInSortedArray.c)
 */

__int64 __fastcall RtlpFcGetFeatureHasSubscriptionsFromBuffer(int a1, __int64 a2, __int64 a3)
{
  unsigned int *v4; // rdi
  __int64 LowerBoundInSortedArray; // rax
  int v6; // edx
  unsigned int v7; // edx
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = a1;
  if ( a2 && (v4 = *(unsigned int **)(a2 + 8)) != 0LL )
  {
    if ( !*v4
      || (LowerBoundInSortedArray = RtlFindLowerBoundInSortedArray(
                                      (unsigned int)&v9,
                                      (int)v4 + 4,
                                      *v4,
                                      16,
                                      (__int64)RtlFcpCompareFeatureIdToFeature),
          (unsigned int *)LowerBoundInSortedArray == &v4[4 * *v4 + 1])
      || *(_DWORD *)LowerBoundInSortedArray != v9 )
    {
      LowerBoundInSortedArray = 0LL;
    }
    v6 = *(_DWORD *)(a3 + 4);
    if ( LowerBoundInSortedArray )
    {
      v7 = v6 | 0x80;
      *(_DWORD *)(a3 + 4) = v7;
      if ( (v7 & 0x40) != 0 )
        return (v7 & 0x80u) == 0 ? 0xC0000225 : 0;
      v7 = v7 & 0xFFFFFFBF | ((*(_WORD *)(LowerBoundInSortedArray + 6) & 1) << 6);
    }
    else
    {
      v7 = v6 & 0xFFFFFF7F;
    }
    *(_DWORD *)(a3 + 4) = v7;
  }
  else
  {
    *(_DWORD *)(a3 + 4) &= ~0x80u;
    v7 = *(_DWORD *)(a3 + 4);
  }
  return (v7 & 0x80u) == 0 ? 0xC0000225 : 0;
}
