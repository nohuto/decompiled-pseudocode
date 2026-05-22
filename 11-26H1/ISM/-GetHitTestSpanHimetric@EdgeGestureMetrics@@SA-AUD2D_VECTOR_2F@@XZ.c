/*
 * XREFs of ?GetHitTestSpanHimetric@EdgeGestureMetrics@@SA?AUD2D_VECTOR_2F@@XZ @ 0x1801AF614
 * Callers:
 *     ?EnsureEdgeMetricsForDisplay@EdgyLegacyProcessor@@IEAAXPEBUHitTestInfo@@@Z @ 0x1801ACF7C (-EnsureEdgeMetricsForDisplay@EdgyLegacyProcessor@@IEAAXPEBUHitTestInfo@@@Z.c)
 * Callees:
 *     ?Initialize@EdgeGestureMetrics@@SAXXZ @ 0x1801AF640 (-Initialize@EdgeGestureMetrics@@SAXXZ.c)
 */

struct D2D_VECTOR_2F EdgeGestureMetrics::GetHitTestSpanHimetric(void)
{
  struct RegistryWatcher **v0; // rax

  v0 = EdgeGestureMetrics::s_edgeGestureMetrics;
  if ( !EdgeGestureMetrics::s_edgeGestureMetrics )
  {
    EdgeGestureMetrics::Initialize();
    v0 = EdgeGestureMetrics::s_edgeGestureMetrics;
  }
  return (struct D2D_VECTOR_2F)v0[1];
}
