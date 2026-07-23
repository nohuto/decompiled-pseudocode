/*
 * XREFs of RtlIsCurrentProcess @ 0x1800D5910
 * Callers:
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800D57A0 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlpWow64SuspendProcess @ 0x180138A38 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     NtCompareObjects @ 0x180160210 (NtCompareObjects.c)
 */

BOOLEAN __cdecl RtlIsCurrentProcess(HANDLE ProcessHandle)
{
  return ProcessHandle == (HANDLE)-1LL || NtCompareObjects((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandle) >= 0;
}
