/*
 * XREFs of RtlIsCurrentProcess @ 0x1800D8950
 * Callers:
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800D87E0 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlpWow64SuspendProcess @ 0x180138CC8 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     NtCompareObjects @ 0x180160310 (NtCompareObjects.c)
 */

bool __fastcall RtlIsCurrentProcess(__int64 a1)
{
  return a1 == -1 || (int)NtCompareObjects(-1LL, a1) >= 0;
}
