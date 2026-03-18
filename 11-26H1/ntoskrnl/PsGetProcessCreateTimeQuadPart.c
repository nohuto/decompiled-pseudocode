/*
 * XREFs of PsGetProcessCreateTimeQuadPart @ 0x1404807B0
 * Callers:
 *     NtTerminateProcess @ 0x1409566C0 (NtTerminateProcess.c)
 * Callees:
 *     <none>
 */

LONGLONG __stdcall PsGetProcessCreateTimeQuadPart(PEPROCESS Process)
{
  return (LONGLONG)Process[1].ThreadListHead.Flink;
}
