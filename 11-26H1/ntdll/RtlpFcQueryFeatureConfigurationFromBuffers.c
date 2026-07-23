/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromBuffers @ 0x18016E36C
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x18016E134 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 * Callees:
 *     RtlpFcGetFeatureHasSubscriptionsFromBuffer @ 0x18016E488 (RtlpFcGetFeatureHasSubscriptionsFromBuffer.c)
 *     RtlFindLowerBoundInSortedArray @ 0x18016E5B0 (RtlFindLowerBoundInSortedArray.c)
 *     RtlFcpCompareFeatureIdToFeature @ 0x18016E680 (RtlFcpCompareFeatureIdToFeature.c)
 */

__int64 __fastcall RtlpFcQueryFeatureConfigurationFromBuffers(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rbp
  unsigned int v5; // ebx
  unsigned int v8; // r14d
  unsigned int *v9; // rdi
  unsigned int *LowerBoundInSortedArray; // rax
  int v12; // eax
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = a1;
  v4 = *(unsigned int **)(a2 + 8);
  v5 = 0;
  v8 = a1;
  v9 = 0LL;
  if ( !v4 )
    goto LABEL_8;
  if ( !*v4
    || (LowerBoundInSortedArray = (unsigned int *)RtlFindLowerBoundInSortedArray(
                                                    (unsigned int)&v13,
                                                    (int)v4 + 4,
                                                    *v4,
                                                    a4,
                                                    (__int64)RtlFcpCompareFeatureIdToFeature),
        v9 = LowerBoundInSortedArray,
        v8 = v13,
        LowerBoundInSortedArray == &v4[4 * *v4 + 1])
    || *LowerBoundInSortedArray != v13 )
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    *(_OWORD *)a4 = *(_OWORD *)v9;
  }
  else
  {
LABEL_8:
    *(_OWORD *)a4 = 0LL;
    *(_DWORD *)a4 = v8;
  }
  RtlpFcGetFeatureHasSubscriptionsFromBuffer(v8, a3, a4, a4);
  if ( !v9 )
  {
    v12 = *(_DWORD *)(a4 + 4);
    if ( (v12 & 0x40) == 0 )
      return (v12 & 0x80u) != 0 ? 279 : -1073741275;
  }
  return v5;
}
