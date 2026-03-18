/*
 * XREFs of ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x140042FDC
 * Callers:
 *     GetWindowFrameMetricForDpi @ 0x140042FB0 (GetWindowFrameMetricForDpi.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x14004B9C0 (GetDpiCacheSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401FB3DC (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetWindowFrameMetricForDpiWithCompatFlags2(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = a2;
  if ( (a3 & 0x10000000) != 0 || (a3 & 0x20000000) != 0 )
    return 0LL;
  v6 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
  if ( v3 == *(unsigned __int16 *)(v6 + 6998) )
    return *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19872) + 2400LL);
  if ( v3 == 96 )
    return *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19872) + 2520LL);
  if ( (unsigned int)GetDpiCacheSlot(v3) == -1 )
    return ScaleSystemMetricForDPIWithoutCache(29LL, v3);
  return GetDpiDependentMetric(29LL, v3);
}
