/*
 * XREFs of RtlpHpLargeAllocationDestroy @ 0x14063D8E0
 * Callers:
 *     RtlpHpHeapDestroy @ 0x14063B6F8 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x140352258 (RtlpHpFreeVA.c)
 *     RtlpHpMetadataFree @ 0x140354540 (RtlpHpMetadataFree.c)
 */

__int64 __fastcall RtlpHpLargeAllocationDestroy(__int64 a1, __int128 *a2)
{
  unsigned __int64 v4; // rcx
  __int128 v5; // xmm0
  __int64 v6; // r9
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *a2;
  v6 = ((v4 >> 12) + ((v4 >> 1) & 1)) << 12;
  v9 = (1LL << ((unsigned __int8)v4 >> 2))
     - (((1LL << ((unsigned __int8)v4 >> 2)) - 1) & (v6 + (1LL << ((unsigned __int8)v4 >> 2)) - 1))
     + v6
     - 1;
  v8 = v5;
  RtlpHpFreeVA(&v10, (unsigned __int64 *)&v9, 0x8000LL, &v8);
  v8 = *a2;
  return RtlpHpMetadataFree(a1, &v8);
}
