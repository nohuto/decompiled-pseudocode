/*
 * XREFs of PsGetProcessCreateTimeQuadPart @ 0x14047A0F0
 * Callers:
 *     NtTerminateProcess @ 0x140B812E0 (NtTerminateProcess.c)
 * Callees:
 *     <none>
 */

LONGLONG __stdcall PsGetProcessCreateTimeQuadPart(PEPROCESS Process)
{
  return (LONGLONG)Process[1].ThreadListHead.Flink;
}
