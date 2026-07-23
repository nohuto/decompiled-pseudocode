/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromBuffers @ 0x140A52320
 * Callers:
 *     RtlQueryFeatureConfigurationFromBuffers @ 0x14061A91C (RtlQueryFeatureConfigurationFromBuffers.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x140A52258 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 * Callees:
 *     RtlpFcGetFeatureHasSubscriptionsFromBuffer @ 0x140A5240C (RtlpFcGetFeatureHasSubscriptionsFromBuffer.c)
 *     RtlFindLowerBoundInSortedArray @ 0x140A52510 (RtlFindLowerBoundInSortedArray.c)
 */

__int64 __fastcall RtlpFcQueryFeatureConfigurationFromBuffers(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rbp
  unsigned int v5; // ebx
  unsigned int *v8; // rdi
  unsigned int *LowerBoundInSortedArray; // rax
  int v11; // eax
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1;
  v4 = *(unsigned int **)(a2 + 8);
  v5 = 0;
  v8 = 0LL;
  if ( !v4 )
    goto LABEL_7;
  if ( !*v4
    || (LowerBoundInSortedArray = (unsigned int *)RtlFindLowerBoundInSortedArray(
                                                    (unsigned int)&v12,
                                                    (int)v4 + 4,
                                                    *v4,
                                                    16,
                                                    (__int64)RtlFcpCompareFeatureIdToFeature),
        v8 = LowerBoundInSortedArray,
        a1 = v12,
        LowerBoundInSortedArray == &v4[4 * *v4 + 1])
    || *LowerBoundInSortedArray != v12 )
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    *(_OWORD *)a4 = *(_OWORD *)v8;
  }
  else
  {
LABEL_7:
    *(_OWORD *)a4 = 0LL;
    *(_DWORD *)a4 = a1;
  }
  RtlpFcGetFeatureHasSubscriptionsFromBuffer(a1, a3, a4);
  if ( !v8 )
  {
    v11 = *(_DWORD *)(a4 + 4);
    if ( (v11 & 0x40) == 0 )
      return (v11 & 0x80u) != 0 ? 279 : -1073741275;
  }
  return v5;
}
