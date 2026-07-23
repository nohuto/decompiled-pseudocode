/*
 * XREFs of AccelpCacheCompressionHeaderFooterInformation @ 0x1406E3964
 * Callers:
 *     AccelpSiovIaaSetCompressionWorkspace @ 0x1406E4798 (AccelpSiovIaaSetCompressionWorkspace.c)
 *     AccelpQatSetCompressionWorkspace @ 0x1406E51AC (AccelpQatSetCompressionWorkspace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AccelpCacheCompressionHeaderFooterInformation(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  int v3; // edx

  v2 = 0;
  *(_QWORD *)(a1 + 20) = 0LL;
  if ( a2 )
  {
    v3 = a2 - 2;
    if ( v3 )
    {
      if ( v3 != 1 )
        return (unsigned int)-1073741811;
      *(_DWORD *)(a1 + 20) = 24;
      *(_QWORD *)(a1 + 28) = 67668767LL;
      *(_DWORD *)(a1 + 36) = 786432;
      *(_DWORD *)(a1 + 40) = 547409;
    }
    else
    {
      *(_DWORD *)(a1 + 20) = 10;
      *(_QWORD *)(a1 + 28) = 559903LL;
      *(_WORD *)(a1 + 36) = 0;
    }
    *(_DWORD *)(a1 + 24) = 8;
  }
  return v2;
}
