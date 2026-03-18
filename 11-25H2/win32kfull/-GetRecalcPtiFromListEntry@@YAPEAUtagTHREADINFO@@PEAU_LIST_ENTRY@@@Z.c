/*
 * XREFs of ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x14027CD00
 * Callers:
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x14005E470 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x140151AA8 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     zzzReattachThreads @ 0x14023FD24 (zzzReattachThreads.c)
 * Callees:
 *     ?IsPackedQueueRecalc@@YAHXZ @ 0x14005E5D4 (-IsPackedQueueRecalc@@YAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct _LIST_ENTRY *__fastcall GetRecalcPtiFromListEntry(struct _LIST_ENTRY *a1, __int64 a2)
{
  struct _LIST_ENTRY *Flink; // rbx

  if ( IsPackedQueueRecalc((__int64)a1, a2) )
    Flink = a1[1].Flink;
  else
    Flink = (struct _LIST_ENTRY *)((char *)a1 - 776);
  if ( Flink && !Flink[31].Flink )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11125);
  return Flink;
}
