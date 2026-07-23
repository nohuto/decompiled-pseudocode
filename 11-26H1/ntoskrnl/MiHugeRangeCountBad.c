/*
 * XREFs of MiHugeRangeCountBad @ 0x1406F1010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHugeRangeCountBad(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = a2 + ((unsigned __int64)(*(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) & 0x3FFFFF) << 18);
  v7 = a2 + a3;
  while ( v3 < v7 )
  {
    v8 = v6 & 0xFFFFFFFFFFFFFLL;
    if ( _bittest64(*(const signed __int64 **)(v5 + 8), v3) )
      v8 |= 0x8000000000000000uLL;
    v9 = v8 | 0x4000000000000000LL;
    if ( !*(_DWORD *)(a1 + 40) )
      v9 = v8;
    **(_QWORD **)a1 = v9;
    *(_QWORD *)a1 += 8LL;
    if ( ++*(_QWORD *)(a1 + 24) == v4 )
      return 3221225489LL;
    ++v6;
    ++v3;
  }
  return 0LL;
}
