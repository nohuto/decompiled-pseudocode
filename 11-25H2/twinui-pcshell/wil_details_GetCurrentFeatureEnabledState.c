/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x180650AA4
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x180650940 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_QueryFeatureState @ 0x18028DC7C (wil_QueryFeatureState.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x180650940 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edx
  BOOL v6; // r8d
  int FeatureState; // eax
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // edx
  int v11; // ebx
  unsigned int ***v12; // rdi
  unsigned int **v13; // rcx
  int v14; // eax
  BOOL v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // ebx
  __int128 v20; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-18h]
  __int64 v22; // [rsp+60h] [rbp+8h]
  __int64 v23; // [rsp+70h] [rbp+18h]

  v4 = *(_DWORD *)(a1 + 24);
  v6 = (unsigned __int8)(*(_BYTE *)(a1 + 28) - 2) <= 1u;
  v20 = 0LL;
  v21 = 0LL;
  FeatureState = wil_QueryFeatureState((__int64)&v20, v4, v6, a4, 0LL, a2);
  HIDWORD(v22) = 0;
  v8 = (unsigned __int8)v20 & (unsigned __int8)-(FeatureState != 0) & 3;
  if ( v8 )
  {
    v9 = 0;
    if ( (_DWORD)v20 == 2 )
      v9 = 64;
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 31) != 0 ? 0x40 : 0;
  }
  v10 = v9 | ((_DWORD)v21 != 0 ? 0x400 : 0) | (HIDWORD(v21) != 0 ? 0x800 : 0) | (v8 << 7);
  v11 = v10 ^ (v10 >> 6) & 1;
  LODWORD(v22) = v11;
  if ( (v9 & 0x40) != 0 )
  {
    v12 = *(unsigned int ****)(a1 + 32);
    if ( v12 )
    {
      LODWORD(v22) = v10 ^ (v10 >> 6) & 1;
      do
      {
        v13 = *v12;
        if ( !*v12 )
          break;
        if ( *((_BYTE *)v13 + 30) || *((_BYTE *)v13 + 29) )
        {
          v16 = (v11 & 1) != 0 && *((_BYTE *)v13 + 31);
          v17 = v11 & 0xFFFFFFFE;
        }
        else
        {
          v23 = **v13;
          if ( (v23 & 2) != 0 )
            v14 = **v13;
          else
            LOBYTE(v14) = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
                            (volatile signed __int32 *)*v13,
                            v23,
                            (__int64)v13);
          v15 = ((unsigned __int8)v11 & (unsigned __int8)v14 & 1) != 0;
          v16 = v11 & 0xFFFFFFFE;
          v17 = v15;
        }
        v11 = v16 | v17;
        ++v12;
        LODWORD(v22) = v11;
      }
      while ( (v11 & 1) != 0 );
    }
  }
  return v22;
}
