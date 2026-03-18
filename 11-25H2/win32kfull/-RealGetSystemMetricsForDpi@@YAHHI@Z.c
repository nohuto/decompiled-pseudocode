/*
 * XREFs of ?RealGetSystemMetricsForDpi@@YAHHI@Z @ 0x140049A78
 * Callers:
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x140037D74 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1400495FC (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 * Callees:
 *     GetDpiDepSysMetCacheMetricSlot @ 0x140049B18 (GetDpiDepSysMetCacheMetricSlot.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x14004B9C0 (GetDpiCacheSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401FB3DC (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall RealGetSystemMetricsForDpi(__int64 a1, unsigned int a2)
{
  __int64 DpiDepSysMetCacheMetricSlot; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  DpiDepSysMetCacheMetricSlot = (int)GetDpiDepSysMetCacheMetricSlot();
  v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19872);
  if ( a2 == *(unsigned __int16 *)(v7 + 6998) )
    return *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19872) + 4 * DpiDepSysMetCacheMetricSlot + 2284);
  if ( a2 == 96 )
    return *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19872) + 4 * DpiDepSysMetCacheMetricSlot + 2404);
  if ( (unsigned int)GetDpiCacheSlot(a2) == -1 )
    return ScaleSystemMetricForDPIWithoutCache((unsigned int)DpiDepSysMetCacheMetricSlot, a2);
  return GetDpiDependentMetric((unsigned int)DpiDepSysMetCacheMetricSlot, a2);
}
