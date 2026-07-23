/*
 * XREFs of PsResumeThread @ 0x140AAF270
 * Callers:
 *     <none>
 * Callees:
 *     PsMultiResumeThread @ 0x1404F76A8 (PsMultiResumeThread.c)
 */

__int64 __fastcall PsResumeThread(__int64 a1, unsigned int *a2)
{
  return PsMultiResumeThread(a1, a2, 1LL);
}
