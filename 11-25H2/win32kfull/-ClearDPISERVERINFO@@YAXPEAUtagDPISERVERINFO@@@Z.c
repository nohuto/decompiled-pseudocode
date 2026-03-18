/*
 * XREFs of ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x14003FCD4
 * Callers:
 *     DestroyDpiMetricsCache @ 0x14003FB60 (DestroyDpiMetricsCache.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x14003FC08 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 * Callees:
 *     DeleteMetricsFont @ 0x14003FD0C (DeleteMetricsFont.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall ClearDPISERVERINFO(struct tagDPISERVERINFO *a1)
{
  DeleteMetricsFont(*((_QWORD *)a1 + 1));
  DeleteMetricsFont(*((_QWORD *)a1 + 3));
  memset_0(a1, 0, 0x68uLL);
}
