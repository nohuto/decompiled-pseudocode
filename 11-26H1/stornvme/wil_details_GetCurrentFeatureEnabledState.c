/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x140014384
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x140014220 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140013C18 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1400141E8 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  char v2; // al
  BOOL v4; // r8d
  unsigned int v5; // edx
  int FeatureState; // eax
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // edx
  int v10; // ebx
  __int64 *v11; // rdi
  __int64 v12; // rax
  BOOL v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp+8h]

  v2 = *(_BYTE *)(a1 + 28);
  v4 = v2 == 3 || v2 == 2;
  *a2 = 1;
  v5 = *(_DWORD *)(a1 + 24);
  v18 = 0LL;
  v17 = 0LL;
  FeatureState = wil_RtlStagingConfig_QueryFeatureState((__int64)&v17, v5, v4);
  HIDWORD(v19) = 0;
  v7 = (unsigned __int8)v17 & (unsigned __int8)-(FeatureState != 0) & 3;
  if ( v7 )
  {
    v8 = 0;
    if ( (_DWORD)v17 == 2 )
      v8 = 64;
  }
  else
  {
    v8 = *(_BYTE *)(a1 + 31) != 0 ? 0x40 : 0;
  }
  v9 = v8 | ((_DWORD)v18 != 0 ? 0x400 : 0) | (HIDWORD(v18) != 0 ? 0x800 : 0) | (v7 << 7);
  v10 = v9 | (v9 >> 6) & 1;
  LODWORD(v19) = v10;
  if ( ((v9 >> 6) & 1) != 0 )
  {
    v11 = *(__int64 **)(a1 + 32);
    if ( v11 )
    {
      while ( (v10 & 1) != 0 )
      {
        v12 = *v11;
        if ( !*v11 )
          break;
        if ( *(_BYTE *)(v12 + 30) || *(_BYTE *)(v12 + 29) )
        {
          v14 = (v10 & 1) != 0 && *(_BYTE *)(v12 + 31);
          v15 = v10 & 0xFFFFFFFE;
        }
        else
        {
          v13 = ((unsigned __int8)v10 & (unsigned __int8)wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                                           *(_DWORD **)v12,
                                                           *v11) & 1) != 0;
          v14 = v10 & 0xFFFFFFFE;
          v15 = v13;
        }
        v10 = v14 | v15;
        LODWORD(v19) = v10;
        ++v11;
      }
    }
  }
  return v19;
}
