/*
 * XREFs of PsIsWin32KFilterAuditEnabled @ 0x1404B6BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool PsIsWin32KFilterAuditEnabled()
{
  return ((__int64)KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink & 0x8000) != 0;
}
