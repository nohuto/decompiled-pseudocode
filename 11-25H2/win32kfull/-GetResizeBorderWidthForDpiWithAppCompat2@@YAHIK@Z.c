/*
 * XREFs of ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x140049E90
 * Callers:
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x140037D74 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     GetResizeBorderWidthForDpi @ 0x140042EEC (GetResizeBorderWidthForDpi.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1400495FC (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x140049D18 (GetWindowBordersForDpiWithCompatFlags2.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x14004B9C0 (GetDpiCacheSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401FB3DC (_ScaleSystemMetricForDPIWithoutCache.c)
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
      v8 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19872);
      if ( a1 == *(unsigned __int16 *)(v8 + 6998) )
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 19872) + 2400LL);
      }
      else if ( a1 == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 19872) + 2520LL);
      }
      else if ( (unsigned int)GetDpiCacheSlot(a1) == -1 )
      {
        DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, a1);
      }
      else
      {
        DpiDependentMetric = GetDpiDependentMetric(29LL, a1);
      }
      v6 += DpiDependentMetric;
    }
  }
  return v6;
}
