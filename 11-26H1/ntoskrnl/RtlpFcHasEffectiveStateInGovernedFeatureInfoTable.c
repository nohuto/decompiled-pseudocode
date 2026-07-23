/*
 * XREFs of RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x140A525C0
 * Callers:
 *     RtlQueryFeatureConfigurationFromBuffers @ 0x14061A91C (RtlQueryFeatureConfigurationFromBuffers.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x140A52258 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 * Callees:
 *     RtlpFcGetFeatureHasSubscriptionsFromBuffer @ 0x140A5240C (RtlpFcGetFeatureHasSubscriptionsFromBuffer.c)
 *     RtlFindLowerBoundInSortedArray @ 0x140A52510 (RtlFindLowerBoundInSortedArray.c)
 *     RtlpFcLinearSearchInSortedArray @ 0x140B49234 (RtlpFcLinearSearchInSortedArray.c)
 */

char __fastcall RtlpFcHasEffectiveStateInGovernedFeatureInfoTable(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int *a6)
{
  char v6; // bl
  unsigned __int64 v9; // rbp
  _DWORD *LowerBoundInSortedArray; // rax
  int v11; // r11d
  _DWORD *v12; // rdx
  __int64 v13; // rax
  unsigned int *v14; // r9
  unsigned int *v15; // r8
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  int *v19; // r10
  unsigned int v20; // ecx
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // edx
  unsigned int v24; // eax
  int v25; // eax
  int v27; // [rsp+40h] [rbp+8h] BYREF

  v27 = a1;
  v6 = 0;
  if ( a2 )
  {
    v9 = a2 + *(_QWORD *)(a2 + 8);
    if ( (unsigned __int16)*(_DWORD *)a2 )
    {
      LowerBoundInSortedArray = (_DWORD *)RtlFindLowerBoundInSortedArray(
                                            (__int64)&v27,
                                            v9,
                                            (unsigned __int16)*(_DWORD *)a2,
                                            16LL);
      v11 = v27;
      v12 = LowerBoundInSortedArray;
      if ( LowerBoundInSortedArray == (_DWORD *)(v9 + 16LL * (unsigned __int16)*(_DWORD *)a2)
        || *LowerBoundInSortedArray != v27 )
      {
        v12 = 0LL;
      }
    }
    else
    {
      v13 = RtlpFcLinearSearchInSortedArray((unsigned int)&v27, v9, 0, a4, (__int64)RtlFcpCompareFeatureIdToFeature);
      v11 = v27;
      v12 = (_DWORD *)v13;
    }
    if ( v12 )
    {
      v14 = v12 + 2;
      v15 = v12 + 3;
      if ( a4 == 1 )
        v16 = *v15;
      else
        v16 = *v14;
      v17 = (unsigned __int16)(v16 >> 7);
      v18 = 3LL;
      if ( a4 != 1 )
        v18 = 2LL;
      if ( (v12[v18] & 1) != 0 && *(_DWORD *)(v9 + 16 * v17) != *v12 )
      {
        v19 = a6;
        v6 = 1;
        *(_OWORD *)a6 = 0LL;
        *v19 = v11;
        if ( a4 == 1 )
          v20 = *v15;
        else
          v20 = *v14;
        v21 = v19[1] ^ ((unsigned __int8)v19[1] ^ (unsigned __int8)(16 * (v20 >> 1))) & 0x30;
        v19[1] = v21;
        if ( a4 == 1 )
          v22 = *v15;
        else
          v22 = *v14;
        v23 = v21 ^ ((unsigned __int8)(v22 >> 3) ^ (unsigned __int8)v21) & 0xF;
        v19[1] = v23;
        if ( a4 == 1 )
          v24 = *v15;
        else
          v24 = *v14;
        v25 = v23 ^ ((unsigned __int8)v23 ^ (unsigned __int8)((unsigned __int8)(v24 >> 23) << 6)) & 0x40;
        v19[1] = v25;
        if ( (v25 & 0x30) != 0x10 )
          RtlpFcGetFeatureHasSubscriptionsFromBuffer(v11, a5, (__int64)v19);
      }
    }
  }
  return v6;
}
