/*
 * XREFs of FsRtlpNotifyOplockBreakComplete @ 0x14078EBD0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 */

void __fastcall FsRtlpNotifyOplockBreakComplete(__int64 a1, IRP *a2)
{
  IofCompleteRequest(a2, 1);
}
