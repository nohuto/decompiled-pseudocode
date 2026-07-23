/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x14080A53C
 * Callers:
 *     RtlAssert @ 0x14061CB00 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x14094A334 (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, 3221225473LL);
}
