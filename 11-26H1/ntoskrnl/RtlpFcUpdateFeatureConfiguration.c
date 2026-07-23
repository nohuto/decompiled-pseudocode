/*
 * XREFs of RtlpFcUpdateFeatureConfiguration @ 0x140B1BA58
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1408674B4 (CmFcManagerUpdateFeatureConfigurations.c)
 * Callees:
 *     qsort @ 0x140539380 (qsort.c)
 *     RtlpIsImmutableFeatureConfigurationPriority @ 0x140627B58 (RtlpIsImmutableFeatureConfigurationPriority.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpFcCreateAndAddFeatureFromUpdate @ 0x14077DC68 (RtlpFcCreateAndAddFeatureFromUpdate.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140B1BCBC (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     RtlpFcCompareFeatureToUpdate @ 0x140B1BE00 (RtlpFcCompareFeatureToUpdate.c)
 *     RtlpFcApplyUpdateAndAddFeature @ 0x140B1BE2C (RtlpFcApplyUpdateAndAddFeature.c)
 */

__int64 __fastcall RtlpFcUpdateFeatureConfiguration(
        _DWORD *a1,
        __int64 a2,
        unsigned int *a3,
        size_t a4,
        void *a5,
        size_t *a6)
{
  unsigned __int64 v9; // r9
  _DWORD *v10; // rdx
  size_t v11; // r8
  unsigned int *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  __int64 result; // rax
  _DWORD *v18; // rsi
  unsigned __int64 v19; // rbx
  size_t v20; // rbp
  _OWORD *v21; // r8
  unsigned __int64 v22; // rax
  _DWORD *v23; // rdx
  unsigned __int64 v24; // rcx
  _OWORD *v25; // r14
  __int64 v26; // r15
  int v27; // eax
  _OWORD *v28; // r8
  __int128 *v29; // rcx
  __int128 v30; // xmm0
  __int64 v31; // rbx
  size_t v32; // rdi
  size_t Size; // [rsp+58h] [rbp+10h] BYREF

  Size = 0LL;
  qsort(a3, a4, 0x20uLL, RtlpFcCompareUpdates);
  v9 = 1LL;
  v10 = a3 + 9;
  while ( v9 < a4 )
  {
    if ( *(v10 - 1) == *(v10 - 9) && *v10 == *(v10 - 8) )
      return 3221225485LL;
    ++v9;
    v10 += 8;
  }
  v11 = 0LL;
  v12 = a3 + 1;
  while ( v11 < a4 )
  {
    v13 = v12[6];
    if ( (v13 & 4) != 0 && v13 != 4 )
      return 3221225485LL;
    if ( *v12 > 0xF )
      return 3221225485LL;
    if ( RtlpIsImmutableFeatureConfigurationPriority(*v12) )
      return 3221225485LL;
    v16 = *(_DWORD *)(v14 + 4);
    if ( v16 )
    {
      if ( (unsigned int)(v16 - 1) > 1 )
        return 3221225485LL;
    }
    if ( *(_DWORD *)(v14 + 8) > 1u || *(_BYTE *)(v14 + 12) >= 0x40u || *(_DWORD *)(v14 + 16) >= 4u )
      return 3221225485LL;
    v11 = v15 + 1;
    v12 = (unsigned int *)(v14 + 32);
  }
  result = RtlpFcCalculateRequiredSizeForNewFeatureTable(a1, a3, a4, &Size);
  if ( (int)result >= 0 )
  {
    if ( !Size )
    {
      *a6 = 0LL;
      return result;
    }
    if ( Size > *a6 )
    {
      *a6 = Size;
      return 2147483653LL;
    }
    v18 = a5;
    memset_0(a5, 0, Size);
    v19 = 0LL;
    *v18 = 0;
    v20 = 0LL;
    v21 = v18 + 1;
    Size = (size_t)(v18 + 1);
    if ( a1 )
    {
      v22 = (unsigned int)*a1;
      v23 = a1 + 1;
      if ( (_DWORD)v22 )
      {
        LODWORD(v24) = *a1;
        v25 = a1 + 1;
        v26 = (__int64)a3;
        while ( 1 )
        {
          v22 = (unsigned int)v24;
          if ( v20 >= a4 )
          {
LABEL_35:
            v23 = a1 + 1;
            break;
          }
          v27 = RtlpFcCompareFeatureToUpdate(v25, v26);
          if ( v27 )
          {
            if ( v27 != 1 )
            {
              ++v19;
              *v28 = *v25;
              ++*v18;
              v21 = v28 + 1;
              Size = (size_t)v21;
              ++v25;
              goto LABEL_34;
            }
            RtlpFcCreateAndAddFeatureFromUpdate(v26, (__int64)&Size, (__int64)v18);
          }
          else
          {
            RtlpFcApplyUpdateAndAddFeature(v26, v25, &Size, v18);
            ++v19;
            ++v25;
          }
          v21 = (_OWORD *)Size;
          ++v20;
          v26 += 32LL;
LABEL_34:
          v24 = (unsigned int)*a1;
          v22 = v24;
          if ( v19 >= v24 )
            goto LABEL_35;
        }
      }
      if ( v19 < v22 )
      {
        v29 = (__int128 *)&v23[4 * v19];
        do
        {
          v30 = *v29;
          ++v19;
          ++v29;
          *v21 = v30;
          ++*v18;
          ++v21;
        }
        while ( v19 < (unsigned int)*a1 );
        Size = (size_t)v21;
      }
    }
    if ( v20 < a4 )
    {
      v31 = (__int64)&a3[8 * v20];
      v32 = a4 - v20;
      do
      {
        RtlpFcCreateAndAddFeatureFromUpdate(v31, (__int64)&Size, (__int64)v18);
        v31 += 32LL;
        --v32;
      }
      while ( v32 );
    }
    return 0LL;
  }
  return result;
}
