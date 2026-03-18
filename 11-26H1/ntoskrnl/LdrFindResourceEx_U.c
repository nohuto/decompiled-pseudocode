/*
 * XREFs of LdrFindResourceEx_U @ 0x140801C50
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x140A86DB4 (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrFindResourceEx_U(int a1, int a2, int a3, int a4, __int64 a5)
{
  return LdrpSearchResourceSection_U(a2, a3, a4, a1, a5);
}
