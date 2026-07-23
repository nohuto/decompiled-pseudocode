/*
 * XREFs of wil_details_GetCurrentVariantState @ 0x14060EBDC
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x14060EAD4 (wil_details_FeatureStateCache_ReevaluateCachedVariantState.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x14041C460 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140B517FC (wil_RtlStagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_details_GetCurrentVariantState(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // ebx
  char v4; // bp
  int v5; // r14d
  __int64 *v6; // rsi
  __int64 v7; // rax
  char CachedFeatureEnabledState; // al
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp+8h]

  v10 = 0LL;
  v11 = 0LL;
  *a2 = 1;
  v2 = wil_RtlStagingConfig_QueryFeatureState(&v10, 48709785LL, 1LL, 0LL);
  v3 = ((_DWORD)v11 != 0 ? 0x400 : 0) | (HIDWORD(v11) != 0 ? 0x800 : 0);
  if ( v2 )
  {
    v4 = BYTE4(v10);
    v5 = HIDWORD(v10);
  }
  else
  {
    v4 = 10;
    v5 = 0;
  }
  v6 = (__int64 *)&Feature_AdaptiveHibernateEnhancements__private_requiresFeatures;
  if ( &Feature_AdaptiveHibernateEnhancements__private_requiresFeatures )
  {
    while ( 1 )
    {
      v7 = *v6;
      if ( !*v6 )
        break;
      if ( *(_BYTE *)(v7 + 30) || *(_BYTE *)(v7 + 29) )
      {
        if ( !*(_BYTE *)(v7 + 31) )
          goto LABEL_9;
        ++v6;
      }
      else
      {
        CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(*(_DWORD **)v7, *v6++);
        if ( (CachedFeatureEnabledState & 1) == 0 )
          goto LABEL_9;
      }
    }
  }
  if ( !v4 )
  {
    v3 |= 0xA000u;
LABEL_9:
    LODWORD(v12) = v3;
    goto LABEL_15;
  }
  HIDWORD(v12) = v5;
  LODWORD(v12) = v3 ^ ((v4 & 0x3F) << 12);
  if ( !DWORD2(v10) )
LABEL_15:
    HIDWORD(v12) = 0;
  return v12;
}
