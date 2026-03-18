/*
 * XREFs of GetDPIMETRICSForDpiUnsafe @ 0x140042E78
 * Callers:
 *     _SystemParametersInfoForDpi @ 0x1400412AC (_SystemParametersInfoForDpi.c)
 *     GetScaledLogFontForDpi @ 0x140041420 (GetScaledLogFontForDpi.c)
 *     GetWindowNCMetricsForDpi @ 0x1400418A8 (GetWindowNCMetricsForDpi.c)
 *     GetDPIMETRICSForDpi @ 0x140042E30 (GetDPIMETRICSForDpi.c)
 * Callees:
 *     ?EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z @ 0x1401E1FEC (-EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1401F2FF0 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

struct tagDpiKMMetricsCacheNode *__fastcall GetDPIMETRICSForDpiUnsafe(__int64 a1, __int64 a2)
{
  int v2; // ebx
  struct tagDpiKMMetricsCacheNode *result; // rax
  struct tagDpiKMMetricsCacheNode *v4; // rbx

  v2 = a1;
  if ( (_DWORD)a1 == *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872) + 6998LL) )
    return (struct tagDpiKMMetricsCacheNode *)GetSessionDpiMetrics();
  if ( v2 == 96 )
    return (struct tagDpiKMMetricsCacheNode *)Get96DpiMetrics();
  result = EnsureKMDpiMetricsCacheNode(v2);
  v4 = result;
  if ( result )
  {
    RefreshDpiKMMetricsCacheNode(result);
    return (struct tagDpiKMMetricsCacheNode *)((char *)v4 + 16);
  }
  return result;
}
