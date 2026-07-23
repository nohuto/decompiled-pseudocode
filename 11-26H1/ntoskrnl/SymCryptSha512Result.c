/*
 * XREFs of SymCryptSha512Result @ 0x140562AC0
 * Callers:
 *     SymCryptSha384Result @ 0x140561388 (SymCryptSha384Result.c)
 *     HashpFinalizeHash @ 0x1408B25F8 (HashpFinalizeHash.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptSha512AppendBlocks_ull @ 0x140561500 (SymCryptSha512AppendBlocks_ull.c)
 */

__int64 __fastcall SymCryptSha512Result(_QWORD *a1, char *a2)
{
  __int64 v2; // rax
  __int64 *v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  signed __int64 v9; // rdx
  __int64 result; // rax
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned int *)a1;
  v11 = 0LL;
  *((_BYTE *)a1 + v2 + 32) = 0x80;
  v5 = a1 + 20;
  v6 = (unsigned int)(v2 + 1);
  if ( (unsigned int)v6 > 0x70 )
  {
    SymCryptWipe((__int64)a1 + v6 + 32, (unsigned int)(128 - v6));
    SymCryptSha512AppendBlocks_ull(v5, (__int64)(a1 + 4), 0x80uLL, &v11);
    v6 = 0LL;
  }
  SymCryptWipe((__int64)a1 + v6 + 32, (unsigned int)(128 - v6));
  v7 = 8LL * a1[2];
  a1[18] = _byteswap_uint64((a1[2] >> 61) + 8LL * a1[3]);
  a1[19] = _byteswap_uint64(v7);
  SymCryptSha512AppendBlocks_ull(v5, (__int64)(a1 + 4), 0x80uLL, &v11);
  v8 = 8LL;
  v9 = (char *)a1 - a2;
  do
  {
    *(_QWORD *)a2 = _byteswap_uint64(*(_QWORD *)&a2[v9 + 160]);
    a2 += 8;
    --v8;
  }
  while ( v8 );
  result = SymCryptWipe((__int64)a1, 0xE0uLL);
  *(_OWORD *)v5 = SymCryptSha512InitialState;
  *((_OWORD *)v5 + 1) = xmmword_1400245A0;
  *((_OWORD *)v5 + 2) = xmmword_1400245B0;
  *((_OWORD *)v5 + 3) = xmmword_1400245C0;
  return result;
}
