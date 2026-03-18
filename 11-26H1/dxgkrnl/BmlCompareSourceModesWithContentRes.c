/*
 * XREFs of BmlCompareSourceModesWithContentRes @ 0x1402DF274
 * Callers:
 *     BmlCompareSourceModes @ 0x1402DE178 (BmlCompareSourceModes.c)
 *     BmlGetNextBestSourceMode @ 0x1402DE3F8 (BmlGetNextBestSourceMode.c)
 * Callees:
 *     Feature_PreferSourceModeGreaterThanContentSize__private_IsEnabledDeviceUsageNoInline @ 0x14005B4BC (Feature_PreferSourceModeGreaterThanContentSize__private_IsEnabledDeviceUsageNoInline.c)
 *     BmlCompareModeRegions @ 0x1402DF230 (BmlCompareModeRegions.c)
 *     ?BmlCompareModeResolution@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1402DF37C (-BmlCompareModeResolution@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1402DF3B0 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

__int64 __fastcall BmlCompareSourceModesWithContentRes(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r10
  __int64 v7; // r11
  __int64 v8; // rbx
  int v9; // r10d
  __int64 v11; // r9
  __int64 v12; // r10
  unsigned int *v13; // r11
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned int *v16; // r10

  v5 = 120LL * a2;
  v7 = a1;
  if ( (*(_DWORD *)(a1 + 8) & 3) != 0
    || (v8 = v5 + a1 + 108, (unsigned int)BmlCompareModeExtents(v8, v5 + a1 + 52) == 1) )
  {
    if ( (unsigned int)BmlCompareModeResolution(a4 + 76, v5 + v7 + 108) == -1
      || (unsigned int)BmlCompareModeResolution(v12, v11) == -1 )
    {
      if ( (unsigned int)BmlCompareModeResolution(v13, v11) != -1 )
        return 0xFFFFFFFFLL;
      return (unsigned int)BmlCompareModeResolution(v15, v14) != -1;
    }
    else
    {
      return BmlCompareModeRegions(v13, v16);
    }
  }
  else
  {
    if ( !(unsigned int)Feature_PreferSourceModeGreaterThanContentSize__private_IsEnabledDeviceUsageNoInline() )
      return 0LL;
    BmlCompareModeResolution(a4 + 76, v8);
    if ( (unsigned int)BmlCompareModeResolution(a3 + 76, v8) == -1 )
    {
      if ( v9 == -1 )
        return 0LL;
      return 0xFFFFFFFFLL;
    }
    return v9 == -1;
  }
}
