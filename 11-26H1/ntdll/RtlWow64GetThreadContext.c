/*
 * XREFs of RtlWow64GetThreadContext @ 0x180138640
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18015F3E0 (ZwQueryInformationThread.c)
 */

__int64 __fastcall RtlWow64GetThreadContext(__int64 a1, __int64 a2)
{
  return ZwQueryInformationThread(a1, 29LL, a2, 716LL, 0LL);
}
