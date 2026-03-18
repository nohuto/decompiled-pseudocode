/*
 * XREFs of NtCreateToken @ 0x140814940
 * Callers:
 *     DifNtCreateTokenWrapper @ 0x1406747F0 (DifNtCreateTokenWrapper.c)
 * Callees:
 *     NtCreateTokenEx @ 0x140A44080 (NtCreateTokenEx.c)
 */

__int64 __fastcall NtCreateToken(
        int a1,
        int a2,
        int a3,
        int a4,
        void *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  return NtCreateTokenEx(a1, a2, a3, a4, a5, a6, a7, a8, a9, 0LL, 0LL, 0LL, 0LL, a10, a11, a12, a13);
}
