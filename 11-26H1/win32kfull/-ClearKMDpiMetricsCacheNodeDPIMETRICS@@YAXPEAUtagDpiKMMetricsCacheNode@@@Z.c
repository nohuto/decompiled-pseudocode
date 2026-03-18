/*
 * XREFs of ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x140248CF4
 * Callers:
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x140248CB8 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 * Callees:
 *     DeleteMetricsFont @ 0x14010FB44 (DeleteMetricsFont.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
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
