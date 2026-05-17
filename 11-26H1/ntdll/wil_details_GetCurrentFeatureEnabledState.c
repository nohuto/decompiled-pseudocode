/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x1800E391C
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1800E3800 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1800E3734 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1800E3A50 (wil_RtlStagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  char v2; // al
  _BOOL8 v4; // r8
  __int64 v5; // rdx
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // ebx
  __int64 *v11; // rdi
  char CachedFeatureEnabledState; // al
  int v14; // eax
  __int64 v15; // rax
  bool v16; // zf
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp+8h]

  v2 = *(_BYTE *)(a1 + 28);
  v4 = v2 == 3 || v2 == 2;
  *a2 = 1;
  v5 = *(unsigned int *)(a1 + 24);
  v18 = 0LL;
  v17 = 0LL;
  v6 = wil_RtlStagingConfig_QueryFeatureState(&v17, v5, v4);
  HIDWORD(v19) = 0;
  v7 = (unsigned __int8)v17 & (unsigned __int8)-(v6 != 0) & 3;
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
      while ( 1 )
      {
        if ( (v10 & 1) == 0 )
          return v19;
        v15 = *v11;
        if ( !*v11 )
          return v19;
        if ( *(_BYTE *)(v15 + 30) || *(_BYTE *)(v15 + 29) )
        {
          if ( (v10 & 1) == 0 )
            goto LABEL_15;
          v16 = *(_BYTE *)(v15 + 31) == 0;
        }
        else
        {
          CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(*(_DWORD **)v15, *v11);
          if ( (v10 & 1) == 0 )
            goto LABEL_15;
          v16 = (CachedFeatureEnabledState & 1) == 0;
        }
        if ( v16 )
        {
LABEL_15:
          v14 = 0;
          goto LABEL_16;
        }
        v14 = 1;
LABEL_16:
        v10 = v14 | v10 & 0xFFFFFFFE;
        LODWORD(v19) = v10;
        ++v11;
      }
    }
  }
  return v19;
}
