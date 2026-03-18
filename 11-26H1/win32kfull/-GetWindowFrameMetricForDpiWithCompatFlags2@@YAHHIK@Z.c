/*
 * XREFs of ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1401BF5C8
 * Callers:
 *     GetWindowFrameMetricForDpi @ 0x1401BF59C (GetWindowFrameMetricForDpi.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401BF66C (_ScaleSystemMetricForDPIWithoutCache.c)
 *     GetDpiCacheIndex @ 0x140302350 (GetDpiCacheIndex.c)
 */

__int64 __fastcall GetWindowFrameMetricForDpiWithCompatFlags2(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = a2;
  if ( (a3 & 0x10000000) != 0 || (a3 & 0x20000000) != 0 )
    return 0LL;
  v6 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904);
  if ( v3 == *(unsigned __int16 *)(v6 + 6998) )
    return *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19904) + 2400LL);
  if ( v3 == 96 )
    return *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19904) + 2520LL);
  if ( (unsigned int)GetDpiCacheIndex(v3) == -1 )
    return ScaleSystemMetricForDPIWithoutCache(29LL, v3);
  return GetDpiDependentMetric(29, v3);
}
