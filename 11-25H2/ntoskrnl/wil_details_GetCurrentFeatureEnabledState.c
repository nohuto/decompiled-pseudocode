/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x1403F7AE8
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403F79D8 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1403F79A0 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140AA2F6C (wil_RtlStagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  bool v5; // cf
  bool v6; // zf
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // edx
  int v11; // ebx
  __int64 *v12; // rdi
  __int64 v13; // rax
  BOOL v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp+8h]

  v3 = *(unsigned int *)(a1 + 24);
  v5 = *(_BYTE *)(a1 + 28) == 2;
  v6 = *(_BYTE *)(a1 + 28) == 3;
  *a2 = 1;
  v19 = 0LL;
  v18 = 0LL;
  v7 = wil_RtlStagingConfig_QueryFeatureState(&v18, v3, v5 | (unsigned __int8)v6, 0LL);
  HIDWORD(v20) = 0;
  v8 = (unsigned __int8)v18 & (unsigned __int8)-(v7 != 0) & 3;
  if ( v8 )
  {
    v9 = 0;
    if ( (_DWORD)v18 == 2 )
      v9 = 64;
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 31) != 0 ? 0x40 : 0;
  }
  v10 = v9 | ((_DWORD)v19 != 0 ? 0x400 : 0) | (HIDWORD(v19) != 0 ? 0x800 : 0) | (v8 << 7);
  v11 = v10 ^ (v10 >> 6) & 1;
  LODWORD(v20) = v11;
  if ( (v9 & 0x40) != 0 )
  {
    v12 = *(__int64 **)(a1 + 32);
    if ( v12 )
    {
      LODWORD(v20) = v10 ^ (v10 >> 6) & 1;
      do
      {
        v13 = *v12;
        if ( !*v12 )
          break;
        if ( *(_BYTE *)(v13 + 30) || *(_BYTE *)(v13 + 29) )
        {
          v15 = (v11 & 1) != 0 && *(_BYTE *)(v13 + 31);
          v16 = v11 & 0xFFFFFFFE;
        }
        else
        {
          v14 = ((unsigned __int8)v11 & (unsigned __int8)wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                                           *(_DWORD **)v13,
                                                           *v12) & 1) != 0;
          v15 = v11 & 0xFFFFFFFE;
          v16 = v14;
        }
        v11 = v15 | v16;
        ++v12;
        LODWORD(v20) = v11;
      }
      while ( (v11 & 1) != 0 );
    }
  }
  return v20;
}
