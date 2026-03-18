/*
 * XREFs of ?RealGetSystemMetricsForDpi@@YAHHI@Z @ 0x14004E344
 * Callers:
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x14004E5D8 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiDepSysMetCacheMetricSlot @ 0x14004E3E4 (GetDpiDepSysMetCacheMetricSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401BF66C (_ScaleSystemMetricForDPIWithoutCache.c)
 *     GetDpiCacheIndex @ 0x140302350 (GetDpiCacheIndex.c)
 */

__int64 __fastcall RealGetSystemMetricsForDpi(__int64 a1, unsigned int a2)
{
  __int64 DpiDepSysMetCacheMetricSlot; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  DpiDepSysMetCacheMetricSlot = (int)GetDpiDepSysMetCacheMetricSlot();
  v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19904);
  if ( a2 == *(unsigned __int16 *)(v7 + 6998) )
    return *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19904) + 4 * DpiDepSysMetCacheMetricSlot + 2284);
  if ( a2 == 96 )
    return *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19904) + 4 * DpiDepSysMetCacheMetricSlot + 2404);
  if ( (unsigned int)GetDpiCacheIndex(a2) == -1 )
    return ScaleSystemMetricForDPIWithoutCache((unsigned int)DpiDepSysMetCacheMetricSlot, a2);
  return GetDpiDependentMetric(DpiDepSysMetCacheMetricSlot, a2);
}
