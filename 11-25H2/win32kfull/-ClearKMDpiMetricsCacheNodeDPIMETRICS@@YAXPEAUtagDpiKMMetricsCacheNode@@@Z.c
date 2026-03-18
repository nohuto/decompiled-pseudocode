/*
 * XREFs of ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x14014ACE4
 * Callers:
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1401492C8 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 * Callees:
 *     DeleteMetricsFont @ 0x14003FD0C (DeleteMetricsFont.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall ClearKMDpiMetricsCacheNodeDPIMETRICS(struct HLFONT__ **a1)
{
  DeleteMetricsFont(a1[2]);
  DeleteMetricsFont(a1[8]);
  DeleteMetricsFont(a1[9]);
  DeleteMetricsFont(a1[10]);
  DeleteMetricsFont(a1[6]);
  memset_0(a1 + 2, 0, 0x48uLL);
  *((_WORD *)a1 + 1) = 1;
}
