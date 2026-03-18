/*
 * XREFs of ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x140032AE8
 * Callers:
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x140032974 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x140033184 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x14004E5D8 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     GetResizeBorderWidthForDpi @ 0x14020AF94 (GetResizeBorderWidthForDpi.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401BF66C (_ScaleSystemMetricForDPIWithoutCache.c)
 *     Get96DpiServerInfo @ 0x140302324 (Get96DpiServerInfo.c)
 *     GetDpiCacheIndex @ 0x140302350 (GetDpiCacheIndex.c)
 */

__int64 __fastcall GetResizeBorderWidthForDpiWithAppCompat2(unsigned int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int DpiDependentMetric; // eax

  if ( (a2 & 0x10000000) != 0 )
  {
    return 1;
  }
  else
  {
    v5 = *(_DWORD *)(Get96DpiServerInfo() + 4) * a1 + 48;
    v6 = (int)v5 / 96;
    if ( (a2 & 0x20000000) != 0 )
    {
      LODWORD(v4) = (unsigned __int64)(715827883LL * (int)v5) >> 32;
      v8 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19904);
      if ( a1 == *(unsigned __int16 *)(v8 + 6998) )
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 19904) + 2400LL);
      }
      else if ( a1 == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 19904) + 2520LL);
      }
      else if ( (unsigned int)GetDpiCacheIndex(a1) == -1 )
      {
        DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, a1);
      }
      else
      {
        DpiDependentMetric = GetDpiDependentMetric(29, a1);
      }
      v6 += DpiDependentMetric;
    }
  }
  return v6;
}
