/*
 * XREFs of ?BmlCompareModeResolution@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1402DF37C
 * Callers:
 *     BmlCompareSourceModesWithContentRes @ 0x1402DF274 (BmlCompareSourceModesWithContentRes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareModeResolution(int *a1, int *a2)
{
  int v2; // eax
  int v3; // r8d
  unsigned int v5; // edx
  unsigned int v6; // ecx

  v2 = *a2;
  v3 = *a1;
  if ( *a1 < (unsigned int)*a2 )
    return 0xFFFFFFFFLL;
  v5 = a2[1];
  v6 = a1[1];
  if ( v6 < v5 )
    return 0xFFFFFFFFLL;
  if ( v3 == v2 )
    return v6 != v5;
  return 1LL;
}
