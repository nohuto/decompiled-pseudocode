/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1400103C8
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1400103C8 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_IsEnabledFallback @ 0x140010680 (wil_details_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1400103C8 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // r12d
  signed __int32 v5; // ebx
  char v7; // cl
  BOOL v8; // esi
  _BOOL8 v9; // rdx
  __int64 v10; // rcx
  int v11; // edi
  int v12; // edx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  bool v18; // zf
  int v19; // edi
  int v20; // r8d
  int v21; // ecx
  unsigned int v22; // r8d
  int v23; // edi
  unsigned int ***v24; // r14
  unsigned int **v25; // rcx
  unsigned __int8 v26; // al
  BOOL v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // edi
  signed __int32 i; // ecx
  signed __int32 v31; // eax
  __int64 v34; // [rsp+20h] [rbp-50h]
  __int64 v35; // [rsp+28h] [rbp-48h]
  __int64 v36; // [rsp+30h] [rbp-40h] BYREF
  __int128 v37; // [rsp+38h] [rbp-38h]
  __int64 v38; // [rsp+50h] [rbp-20h] BYREF
  int v39; // [rsp+58h] [rbp-18h]

  v3 = 0;
  v5 = a2;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v3 = g_wil_details_ensureSubscribedToFeatureConfigurationChanges(a1);
  v7 = *(_BYTE *)(a3 + 28);
  v8 = 1;
  v9 = v7 != 3 && v7 != 2;
  v10 = *(unsigned int *)(a3 + 24);
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v11 = 0;
  v39 = 0;
  v12 = RtlQueryFeatureConfiguration(v10, v9, &v36, &v38, a2);
  if ( v12 )
  {
    v14 = 0;
    v15 = 0;
    v18 = v12 == 279;
    v13 = v37;
    if ( v18 )
    {
      v11 = 1;
      v16 = 8 * (BYTE4(v38) & 0x80);
      goto LABEL_13;
    }
  }
  else
  {
    v11 = 1;
    v13 = (HIDWORD(v38) >> 4) & 3;
    v14 = (HIDWORD(v38) >> 7) & 1;
    v15 = (HIDWORD(v38) >> 6) & 1;
  }
  v16 = v14 << 10;
  if ( v15 )
  {
    v17 = 2048;
    goto LABEL_14;
  }
LABEL_13:
  v17 = 0;
LABEL_14:
  v19 = -v11;
  v20 = v16 | v17 | (((unsigned __int8)v13 & (unsigned __int8)-(v19 != 0) & 3) << 7);
  if ( ((unsigned __int8)v13 & (unsigned __int8)-(v19 != 0) & 3) != 0 )
  {
    v21 = 0;
    if ( v13 == 2 )
      v21 = 64;
  }
  else
  {
    v21 = *(_BYTE *)(a3 + 31) != 0 ? 0x40 : 0;
  }
  v22 = v21 | v20;
  v23 = v22 | (v22 >> 6) & 1;
  if ( ((v22 >> 6) & 1) != 0 )
  {
    v24 = *(unsigned int ****)(a3 + 32);
    if ( v24 )
    {
      while ( (v23 & 1) != 0 )
      {
        v25 = *v24;
        if ( !*v24 )
          break;
        if ( *((_BYTE *)v25 + 30) || *((_BYTE *)v25 + 29) )
        {
          v28 = (v23 & 1) != 0 && *((_BYTE *)v25 + 31);
          v29 = v23 & 0xFFFFFFFE;
        }
        else
        {
          v35 = **v25;
          if ( (v35 & 2) != 0 )
            v26 = **v25;
          else
            v26 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*v25, v35, v25);
          v27 = ((unsigned __int8)v23 & v26 & 1) != 0;
          v28 = v23 & 0xFFFFFFFE;
          v29 = v27;
        }
        v23 = v28 | v29;
        ++v24;
      }
    }
  }
  if ( !*(_BYTE *)(a3 + 28) )
    v8 = v3 != 0;
  for ( i = v5; ; i = v31 )
  {
    LODWORD(v34) = v5;
    if ( v8 )
    {
      LODWORD(v34) = v5;
      if ( (i & 2) == 0 )
      {
        v5 = i ^ (v23 ^ i) & 0x9C1 | 2;
        LODWORD(v34) = v5;
      }
    }
    if ( (i & 4) == 0 )
    {
      v5 = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)v23) & 0x400 | 4;
      LODWORD(v34) = v5;
    }
    v31 = _InterlockedCompareExchange(a1, v5, i);
    if ( i == v31 )
      break;
    v5 = v31;
  }
  if ( (i & 4) == 0 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    g_wil_details_subscribeFeatureStateCacheToConfigurationChanges(a1, *(unsigned __int8 *)(a3 + 28), v3);
  if ( !v8 )
    LODWORD(v34) = v5 ^ (v23 ^ v5) & 0x9C1;
  return v34;
}
