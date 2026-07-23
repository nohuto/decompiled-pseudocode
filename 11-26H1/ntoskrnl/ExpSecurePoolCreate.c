/*
 * XREFs of ExpSecurePoolCreate @ 0x1406D506C
 * Callers:
 *     ExCreatePool @ 0x1406CFA90 (ExCreatePool.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x1403542D4 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x140354540 (RtlpHpMetadataFree.c)
 */

__int64 __fastcall ExpSecurePoolCreate(int a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int128 v3; // xmm6
  _OWORD *v4; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 == 2 && a2 )
  {
    v6 = 0LL;
    *(_WORD *)((char *)&v6 + 1) = 1;
    LOBYTE(v6) = 3;
    v3 = v6;
    v4 = (_OWORD *)RtlpHpMetadataAlloc(0x10uLL, 0x10uLL, 0, &v6);
    if ( v4 )
    {
      v6 = v3;
      *v4 = 0LL;
      *(_DWORD *)v4 = -1381122884;
      v2 = -1073741637;
      RtlpHpMetadataFree((__int64)v4, &v6);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
