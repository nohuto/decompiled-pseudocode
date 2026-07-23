/*
 * XREFs of AccelpQatSetCompressionWorkspace @ 0x1406E51AC
 * Callers:
 *     AccelpQatOperationHandler @ 0x1406E3C44 (AccelpQatOperationHandler.c)
 * Callees:
 *     AccelpCacheCompressionHeaderFooterInformation @ 0x1406E3964 (AccelpCacheCompressionHeaderFooterInformation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall AccelpQatSetCompressionWorkspace(
        unsigned int *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  __int64 result; // rax

  memset_0(a1, 0, a2);
  a1[3] = a5;
  a1[4] = a6;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  result = AccelpCacheCompressionHeaderFooterInformation((__int64)a1, a6);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)a1 + 8) = 0LL;
    if ( a7 )
      *((_QWORD *)a1 + 8) = a1 + 22;
    *((_QWORD *)a1 + 9) = 0LL;
    return 0LL;
  }
  return result;
}
