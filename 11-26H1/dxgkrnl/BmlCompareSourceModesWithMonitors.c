/*
 * XREFs of BmlCompareSourceModesWithMonitors @ 0x1402DEFE4
 * Callers:
 *     BmlCompareSourceModes @ 0x1402DE178 (BmlCompareSourceModes.c)
 *     BmlGetNextBestSourceMode @ 0x1402DE3F8 (BmlGetNextBestSourceMode.c)
 * Callees:
 *     ??$DIFF@H@@YAHHH@Z @ 0x14005793C (--$DIFF@H@@YAHHH@Z.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1402DEEDC (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     BmlGetModeCategoryForRegion @ 0x1402DF1E4 (BmlGetModeCategoryForRegion.c)
 */

__int64 __fastcall BmlCompareSourceModesWithMonitors(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v5; // esi
  __int64 v6; // rbp
  __int64 v7; // r8
  bool v10; // r15
  unsigned int v11; // edi
  char v12; // r14
  __int64 v13; // rbx
  int v14; // edx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r11
  __int64 v18; // r8
  unsigned int ModeCategoryForRegion; // eax
  __int64 v21; // r11
  __int64 v22; // r8
  unsigned int v23; // ebp
  __int64 v24; // r10
  unsigned int v25; // eax
  int v26; // ebx
  int ScaledAspectRatio; // eax
  int v28; // ebp
  int v29; // eax
  int v30; // eax
  __int64 v31; // r8
  unsigned int v32; // eax
  unsigned int v33; // r10d

  v5 = 0;
  v6 = a2;
  v7 = 120LL * a2;
  v10 = 0;
  v11 = 1;
  v12 = 0;
  v13 = v7 + a1;
  v14 = *(_DWORD *)(v7 + a1 + 52);
  if ( v14 && (v15 = *(_DWORD *)(v13 + 56)) != 0 )
  {
    v16 = a4 + 76;
    if ( *(_DWORD *)(a4 + 76) == v14 )
      v10 = *(_DWORD *)(a4 + 80) == v15;
    if ( *(_DWORD *)(a5 + 76) == v14 && *(_DWORD *)(a5 + 80) == v15 )
      v12 = 1;
  }
  else
  {
    v16 = a4 + 76;
  }
  v17 = v7 + a1;
  if ( *(_DWORD *)(v7 + a1 + 36) && *(_DWORD *)(v17 + 40) )
  {
    LOBYTE(v7) = v10;
    ModeCategoryForRegion = BmlGetModeCategoryForRegion(v16, v17 + 36, v7);
    LOBYTE(v22) = v12;
    v23 = ModeCategoryForRegion;
    v25 = BmlGetModeCategoryForRegion(v24, v21 + 36, v22);
    if ( v23 < v25 )
      return (unsigned int)-1;
    if ( v23 > v25 )
      return v11;
    LOWORD(v6) = a2;
  }
  else
  {
    WdLogSingleEntry4(3LL, a1, v6, *(unsigned int *)(v7 + a1 + 36), *(unsigned int *)(v17 + 40));
    WdLogGlobalForLineNumber = 1229;
  }
  if ( !*(_DWORD *)(v13 + 52) || !*(_DWORD *)(v13 + 56) )
  {
    WdLogSingleEntry4(3LL, a1, (unsigned __int16)v6, *(unsigned int *)(v13 + 52), *(unsigned int *)(v13 + 56));
    WdLogGlobalForLineNumber = 1243;
    return 0LL;
  }
  LOBYTE(v18) = v10;
  BmlGetModeCategoryForRegion(a4 + 76, v13 + 52, v18);
  LOBYTE(v31) = v12;
  v32 = BmlGetModeCategoryForRegion(a5 + 76, v13 + 52, v31);
  if ( v33 <= v32 )
  {
    if ( v33 >= v32 )
    {
      if ( v33 != 3 )
        return 0LL;
      v26 = *(_DWORD *)(120LL * (unsigned __int16)v6 + a1 + 60);
      ScaledAspectRatio = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)(a4 + 76));
      v28 = DIFF<int>(ScaledAspectRatio, v26);
      v29 = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)(a5 + 76));
      v30 = DIFF<int>(v29, v26);
      if ( v30 <= v28 )
      {
        LOBYTE(v5) = v30 >= v28;
        return (unsigned int)(v5 - 1);
      }
      return v11;
    }
    return (unsigned int)-1;
  }
  return v11;
}
