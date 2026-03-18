/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x140804A9C
 * Callers:
 *     RtlAssert @ 0x140619AB0 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x14095690C (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, 3221225473LL);
}
