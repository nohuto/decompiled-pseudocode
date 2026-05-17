/*
 * XREFs of RtlIdnToNameprepUnicode @ 0x180148240
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x1800AECB0 (RtlpNameprepAsciiWorker.c)
 */

__int64 __fastcall RtlIdnToNameprepUnicode(int a1, unsigned __int16 *a2, int a3, void *a4, int *a5)
{
  return RtlpNameprepAsciiWorker(a1, a2, a3, a4, a5, 0);
}
