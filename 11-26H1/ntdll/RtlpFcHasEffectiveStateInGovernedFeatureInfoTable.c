/*
 * XREFs of RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x18016E1FC
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x18016E134 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 * Callees:
 *     RtlpFcGetFeatureHasSubscriptionsFromBuffer @ 0x18016E488 (RtlpFcGetFeatureHasSubscriptionsFromBuffer.c)
 *     RtlFindLowerBoundInSortedArray @ 0x18016E5B0 (RtlFindLowerBoundInSortedArray.c)
 *     RtlpFcLinearSearchInSortedArray @ 0x18016E8F8 (RtlpFcLinearSearchInSortedArray.c)
 */

char __fastcall RtlpFcHasEffectiveStateInGovernedFeatureInfoTable(
        unsigned int a1,
        unsigned __int16 *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int *a6)
{
  char v6; // bl
  char *v9; // rbp
  char *LowerBoundInSortedArray; // rax
  unsigned int v11; // r11d
  _DWORD *v12; // rdx
  __int64 v13; // rax
  unsigned int *v14; // r9
  unsigned int *v15; // r8
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int *v19; // r10
  unsigned int v20; // eax
  int v21; // eax
  unsigned int v22; // edx
  int v23; // ecx
  unsigned int v24; // eax
  int v25; // eax
  unsigned int v27; // [rsp+40h] [rbp+8h] BYREF

  v27 = a1;
  v6 = 0;
  if ( a2 )
  {
    v9 = (char *)a2 + *((_QWORD *)a2 + 1);
    if ( (unsigned __int16)*(_DWORD *)a2 )
    {
      LowerBoundInSortedArray = (char *)RtlFindLowerBoundInSortedArray(
                                          (unsigned int)&v27,
                                          (_DWORD)v9,
                                          (unsigned __int16)*(_DWORD *)a2,
                                          a4,
                                          (__int64)RtlpFcCompareFeatureIdToGovernedFeature);
      v11 = v27;
      v12 = LowerBoundInSortedArray;
      if ( LowerBoundInSortedArray == &v9[16 * *a2] || *(_DWORD *)LowerBoundInSortedArray != v27 )
        v12 = 0LL;
    }
    else
    {
      v13 = RtlpFcLinearSearchInSortedArray(
              (unsigned int)&v27,
              (_DWORD)v9,
              0,
              a4,
              (__int64)RtlpFcCompareFeatureIdToGovernedFeature);
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
      if ( (v12[v18] & 1) != 0 && *(_DWORD *)&v9[16 * v17] != *v12 )
      {
        v19 = a6;
        v6 = 1;
        *(_OWORD *)a6 = 0LL;
        *v19 = v11;
        if ( a4 == 1 )
          v20 = *v15;
        else
          v20 = *v14;
        v21 = v19[1] ^ (v19[1] ^ (16 * (v20 >> 1))) & 0x30;
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
          RtlpFcGetFeatureHasSubscriptionsFromBuffer(v11, a5, v19, v14);
      }
    }
  }
  return v6;
}
