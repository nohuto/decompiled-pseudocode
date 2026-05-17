/*
 * XREFs of RtlQueryThreadProfiling @ 0x1801391C0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18015F3E0 (ZwQueryInformationThread.c)
 */

__int64 __fastcall RtlQueryThreadProfiling(__int64 a1, __int64 a2)
{
  return ZwQueryInformationThread(a1, 32LL, a2, 1LL, 0LL);
}
