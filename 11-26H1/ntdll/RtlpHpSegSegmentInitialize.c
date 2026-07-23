/*
 * XREFs of RtlpHpSegSegmentInitialize @ 0x1800E2038
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x1800715F0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x1800E1F08 (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x180070DFC (RtlpHpVaMgrCtxQuery.c)
 */

__int64 __fastcall RtlpHpSegSegmentInitialize(_BYTE *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r8d
  __int64 v7; // rdx
  unsigned int v8; // edi
  unsigned __int8 *v9; // rcx
  unsigned __int8 v10; // al
  unsigned int v11; // ecx
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int128 v14; // [rsp+30h] [rbp-18h]

  if ( (a1[13] & 7) != 0 )
  {
    v13 = 0LL;
    v14 = 0LL;
    RtlpHpVaMgrCtxQuery((__int64)&unk_1801C6958, a2 & 0xFFFFFFFFFFE00000uLL, (__int64)&v13);
    *(_QWORD *)(a2 + 24) = v14;
  }
  v6 = a3;
  v7 = a2 + 32LL * (unsigned __int8)a1[10];
  *(_BYTE *)(v7 + 31) = -a1[10];
  *(_BYTE *)(v7 + 24) |= 2u;
  v8 = 1 << a1[9];
  if ( a3 )
  {
    v9 = (unsigned __int8 *)(v7 + 25);
    do
    {
      v10 = v8;
      if ( v6 < v8 )
        v10 = v6;
      *v9 = v10;
      v9 += 32;
      v6 -= v10;
    }
    while ( v6 );
  }
  v11 = *(unsigned __int8 *)(v7 + 31) - 1;
  *(_WORD *)(v7 + 28) = ~(_WORD)a3;
  result = 32LL * v11;
  *(_BYTE *)(result + v7 + 26) = v11;
  *(_DWORD *)v7 = -857879331;
  return result;
}
