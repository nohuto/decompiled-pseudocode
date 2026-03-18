/*
 * XREFs of ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1402DF3B0
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1402DD530 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlGetNextBestSourceMode @ 0x1402DE3F8 (BmlGetNextBestSourceMode.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1402DEB90 (BmlDoesSourceModeObeyConstraint.c)
 *     BmlCompareSourceModesWithContentRes @ 0x1402DF274 (BmlCompareSourceModesWithContentRes.c)
 *     BmlFillPreferredMonitorMode @ 0x1402DF5D4 (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareModeExtents(_DWORD *a1, int *a2)
{
  int v2; // r8d
  unsigned int v3; // edx
  unsigned int v4; // eax

  v2 = *a2;
  if ( *a1 > (unsigned int)*a2 )
    return 1LL;
  v3 = a2[1];
  v4 = a1[1];
  if ( v4 > v3 )
    return 1LL;
  if ( *a1 == v2 )
    return (unsigned int)-(v3 != v4);
  return 0xFFFFFFFFLL;
}
