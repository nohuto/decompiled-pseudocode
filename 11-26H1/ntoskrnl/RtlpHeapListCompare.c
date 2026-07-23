/*
 * XREFs of RtlpHeapListCompare @ 0x1406290B0
 * Callers:
 *     RtlpHeapFindListLookupEntry @ 0x1405144B8 (RtlpHeapFindListLookupEntry.c)
 *     RtlpHeapAddListEntry @ 0x140629000 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x14062912C (RtlpHeapRemoveListEntry.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHeapListCompare(ULONG_PTR a1, __int64 a2, int a3, char a4)
{
  __int64 v5; // r8
  int v6; // edx
  int v9; // [rsp+38h] [rbp-10h]

  if ( a4 )
  {
    v5 = a2 - 16;
    v6 = *(_DWORD *)(a2 - 16 + 8);
    LOWORD(v9) = v6;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v9 = *(_DWORD *)(a1 + 136) ^ v6;
      if ( HIBYTE(v9) != ((unsigned __int8)v9 ^ (unsigned __int8)(BYTE1(v9) ^ BYTE2(v9))) )
        RtlpLogHeapFailure(3u, a1, v5, 0LL, 0LL, 0LL);
    }
    return (unsigned int)(a3 - (unsigned __int16)v9);
  }
  else
  {
    return (unsigned int)(a3 - *(_DWORD *)(a2 + 40));
  }
}
