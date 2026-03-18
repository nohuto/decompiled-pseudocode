/*
 * XREFs of ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x14005ACF8
 * Callers:
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x14005AB28 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x14005ABD0 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     zzzReattachThreads @ 0x140277664 (zzzReattachThreads.c)
 * Callees:
 *     ?IsPackedQueueRecalc@@YAHXZ @ 0x14005AD58 (-IsPackedQueueRecalc@@YAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct _LIST_ENTRY *__fastcall GetRecalcPtiFromListEntry(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rbx

  if ( (unsigned int)IsPackedQueueRecalc() )
    Flink = a1[1].Flink;
  else
    Flink = a1 - 48;
  if ( Flink && !Flink[30].Blink )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11094LL);
  return Flink;
}
