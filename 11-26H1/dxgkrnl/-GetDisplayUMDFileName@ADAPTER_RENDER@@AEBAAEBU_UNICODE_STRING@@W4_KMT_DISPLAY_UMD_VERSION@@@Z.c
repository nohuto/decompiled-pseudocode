/*
 * XREFs of ?GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z @ 0x1401A764C
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetDisplayUMDFileName(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  bool v4; // zf
  __int64 result; // rax

  v2 = a2;
  if ( a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3654;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(UINT)umdVersion < (UINT)NUM_KMT_DISPLAY_UMDVERSIONS",
      3654LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3655;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGPROCESS::GetCurrent() != NULL",
      3655LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (*((_DWORD *)DXGPROCESS::GetCurrent() + 102) & 8) == 0;
  result = a1 + 512 + 16 * v2;
  if ( !v4 )
    return a1 + 528 + 16 * v2;
  return result;
}
