/*
 * XREFs of wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x14007A580
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x14007A494 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x14007A580 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x14007A580 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        __int64 a2)
{
  unsigned __int32 v2; // edi
  int v5; // ebx
  __int64 *v6; // rsi
  __int64 v7; // rax
  signed __int32 v8; // eax
  signed __int32 v9; // ecx
  int v10; // edx
  unsigned int v11; // edi
  unsigned int v12; // ecx
  signed __int32 v13; // ett
  __int64 v14; // [rsp+50h] [rbp+18h]

  v2 = *a1;
  if ( (*a1 & 0x200) == 0 )
    return *(unsigned int *)a1;
  HIDWORD(v14) = 0;
  v5 = (v2 >> 6) & 1;
  if ( v5 )
  {
    v6 = *(__int64 **)(a2 + 32);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = *v6;
        if ( !*v6 )
          break;
        if ( *(_BYTE *)(v7 + 30) || *(_BYTE *)(v7 + 29) )
        {
          if ( !*(_BYTE *)(v7 + 31) )
          {
            v5 = 0;
            break;
          }
          v5 = 1;
          ++v6;
        }
        else
        {
          v5 = (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*(_QWORD *)v7, *v6++) & 1) != 0;
          if ( !v5 )
            break;
        }
      }
    }
  }
  v8 = v2;
  do
  {
    v9 = v2;
    v10 = v2 & 1;
    v11 = v5 | v2 & 0xFFFFFFFE;
    if ( v10 == v5 )
      v8 = v9;
    v12 = v11 & 0xFFFFFFCF;
    if ( v10 == v5 )
      v12 = v11;
    v13 = v8;
    v8 = _InterlockedCompareExchange(a1, v12 & 0xFFFFFDFF, v8);
    v2 = v8;
  }
  while ( v13 != v8 );
  LODWORD(v14) = v12 & 0xFFFFFDFF;
  return v14;
}
