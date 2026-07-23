/*
 * XREFs of PsIsWin32KFilterEnabled @ 0x140491650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool PsIsWin32KFilterEnabled()
{
  return ((__int64)KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink & 0x4000) != 0;
}
