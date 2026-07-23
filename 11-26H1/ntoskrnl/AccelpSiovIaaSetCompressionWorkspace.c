/*
 * XREFs of AccelpSiovIaaSetCompressionWorkspace @ 0x1406E4798
 * Callers:
 *     AccelpSiovIaaOperationHandler @ 0x1406E4274 (AccelpSiovIaaOperationHandler.c)
 * Callees:
 *     AccelpCacheCompressionHeaderFooterInformation @ 0x1406E3964 (AccelpCacheCompressionHeaderFooterInformation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall AccelpSiovIaaSetCompressionWorkspace(
        unsigned int *a1,
        unsigned int a2,
        _OWORD *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9)
{
  unsigned int v13; // ebp
  __int64 result; // rax
  int v15; // r9d
  int v16; // r10d
  __int64 v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1

  v13 = 88;
  memset_0(a1, 0, a2);
  a1[1] = a5;
  a1[2] = a6;
  a1[3] = a7;
  a1[4] = a8;
  *a1 = a2;
  result = AccelpCacheCompressionHeaderFooterInformation((__int64)a1, a8);
  if ( (int)result >= 0 )
  {
    if ( v16 != 1 || v15 != 1 )
    {
      v13 = 17688;
      *((_QWORD *)a1 + 10) = a1 + 22;
      if ( a3 )
      {
        if ( a4 < 0x400 )
          return 3221225485LL;
        v17 = 8LL;
        v18 = a1 + 3176;
        do
        {
          *v18 = *a3;
          v18[1] = a3[1];
          v18[2] = a3[2];
          v18[3] = a3[3];
          v18[4] = a3[4];
          v18[5] = a3[5];
          v18[6] = a3[6];
          v18 += 8;
          v19 = a3[7];
          a3 += 8;
          *(v18 - 1) = v19;
          --v17;
        }
        while ( v17 );
      }
    }
    *((_QWORD *)a1 + 8) = 0LL;
    if ( a9 )
    {
      *((_QWORD *)a1 + 8) = (char *)a1 + v13;
      v13 += a9;
    }
    *((_QWORD *)a1 + 9) = ((unsigned __int64)a1 + v13 + 31) & 0xFFFFFFFFFFFFFFE0uLL;
    return 0LL;
  }
  return result;
}
