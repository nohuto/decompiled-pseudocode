/*
 * XREFs of ?HasBufferedOutput@CInteractionRoot@@UEAA_NIW4InputType@@@Z @ 0x180226FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CInteractionRoot::HasBufferedOutput(__int64 a1, unsigned int a2, unsigned int a3)
{
  return CInteractionProcessor::HasBufferedOutput(a1 + 24, a2, a3);
}
