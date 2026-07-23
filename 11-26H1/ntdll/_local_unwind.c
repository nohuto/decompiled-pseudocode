/*
 * XREFs of _local_unwind @ 0x180127F80
 * Callers:
 *     LdrAddDllDirectory @ 0x180099440 (LdrAddDllDirectory.c)
 *     EvtIntReportEventWorker @ 0x1800E5CD0 (EvtIntReportEventWorker.c)
 * Callees:
 *     RtlUnwind @ 0x1800B18E0 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
