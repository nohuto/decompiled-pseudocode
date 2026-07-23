/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x1800E5058
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1800E4F20 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1800ECAEC (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_details_AreDependenciesEnabled @ 0x18013B770 (wil_details_AreDependenciesEnabled.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  char v2; // al
  int v4; // edi
  _BOOL8 v5; // r8
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // ecx
  int v12; // r14d
  unsigned int v13; // eax
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp+8h]

  v2 = *(_BYTE *)(a1 + 28);
  v4 = 1;
  v5 = v2 == 3 || v2 == 2;
  *a2 = 1;
  v6 = *(unsigned int *)(a1 + 24);
  v16 = 0LL;
  v15 = 0LL;
  v7 = wil_RtlStagingConfig_QueryFeatureState(&v15, v6, v5);
  HIDWORD(v17) = 0;
  v8 = (unsigned __int8)v15 & (unsigned __int8)-(v7 != 0) & 3;
  if ( v8 )
  {
    v9 = 0;
    if ( (_DWORD)v15 == 2 )
      v9 = 64;
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 31) != 0 ? 0x40 : 0;
  }
  v10 = v9 | ((_DWORD)v16 != 0 ? 0x400 : 0) | (HIDWORD(v16) != 0 ? 0x800 : 0) | (v8 << 7);
  v11 = 0;
  if ( (v10 & 0xC00) == 0xC00 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    v13 = v10;
    if ( (v10 & 0x40) == 0 )
      goto LABEL_18;
  }
  if ( *(_QWORD *)(a1 + 32) )
    v11 = wil_details_AreDependenciesEnabled(a1);
  else
    v11 = 1;
  v13 = v10;
  if ( v12 && !v11 )
    v13 = v10 & 0xFFFFFBFF;
LABEL_18:
  if ( (v13 & 0x40) == 0 || !v11 )
    v4 = 0;
  LODWORD(v17) = v4 | v13 & 0xFFFFFFFE;
  return v17;
}
