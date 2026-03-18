/*
 * XREFs of ?ClearDpiServerInfo@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1402A62E0
 * Callers:
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x14021B858 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     DestroyDpiMetricsCache @ 0x140248C10 (DestroyDpiMetricsCache.c)
 * Callees:
 *     DeleteMetricsFont @ 0x14010FB44 (DeleteMetricsFont.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall ClearDpiServerInfo(struct HLFONT__ **a1)
{
  DeleteMetricsFont(a1[1]);
  DeleteMetricsFont(a1[3]);
  memset_0(a1, 0, 0x68uLL);
}
