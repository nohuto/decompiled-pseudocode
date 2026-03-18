/*
 * XREFs of ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1401D0B4C
 * Callers:
 *     GetDPIMETRICSForDpiUnsafe @ 0x1401D0AE8 (GetDPIMETRICSForDpiUnsafe.c)
 * Callees:
 *     ?EnsureDpiMetricsForDpi@@YAXPEAUtagDPIMETRICS@@H@Z @ 0x1402A6318 (-EnsureDpiMetricsForDpi@@YAXPEAUtagDPIMETRICS@@H@Z.c)
 */

void __fastcall RefreshDpiKMMetricsCacheNode(struct tagDpiKMMetricsCacheNode *a1)
{
  if ( *((_WORD *)a1 + 1) )
  {
    EnsureDpiMetricsForDpi((struct tagDpiKMMetricsCacheNode *)((char *)a1 + 16), *(unsigned __int16 *)a1);
    *((_WORD *)a1 + 1) = 0;
  }
}
