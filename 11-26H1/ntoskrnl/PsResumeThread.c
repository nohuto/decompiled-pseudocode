/*
 * XREFs of PsResumeThread @ 0x140AB1280
 * Callers:
 *     <none>
 * Callees:
 *     PsMultiResumeThread @ 0x1404FE168 (PsMultiResumeThread.c)
 */

__int64 __fastcall PsResumeThread(__int64 a1, unsigned int *a2)
{
  return PsMultiResumeThread(a1, a2, 1LL);
}
