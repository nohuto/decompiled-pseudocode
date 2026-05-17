/*
 * XREFs of _local_unwind @ 0x180128210
 * Callers:
 *     LdrAddDllDirectory @ 0x18009A310 (LdrAddDllDirectory.c)
 *     EvtIntReportEventWorker @ 0x1800E7270 (EvtIntReportEventWorker.c)
 * Callees:
 *     RtlUnwind @ 0x1800B43C0 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
