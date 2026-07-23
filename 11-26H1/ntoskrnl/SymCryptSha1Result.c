/*
 * XREFs of SymCryptSha1Result @ 0x140563E60
 * Callers:
 *     HashpFinalizeHash @ 0x1408B25F8 (HashpFinalizeHash.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptSha1AppendBlocks @ 0x140562C20 (SymCryptSha1AppendBlocks.c)
 *     SymCryptSha1Init @ 0x140563E30 (SymCryptSha1Init.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SymCryptSha1Result(unsigned int *a1, _QWORD *a2)
{
  __int64 v2; // rax
  int *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v10 = 0LL;
  *((_BYTE *)a1 + v2 + 32) = 0x80;
  v5 = (int *)(a1 + 24);
  v6 = (unsigned int)(v2 + 1);
  if ( (unsigned int)v6 > 0x38 )
  {
    memset_0((char *)a1 + v6 + 32, 0, (unsigned int)(64 - v6));
    SymCryptSha1AppendBlocks(v5, (__int64)(a1 + 8), 0x40uLL, &v10);
    v6 = 0LL;
  }
  memset_0((char *)a1 + v6 + 32, 0, (unsigned int)(64 - v6));
  *((_QWORD *)a1 + 11) = _byteswap_uint64(8LL * *((_QWORD *)a1 + 2));
  SymCryptSha1AppendBlocks(v5, (__int64)(a1 + 8), 0x40uLL, &v10);
  v7 = 2LL;
  do
  {
    v8 = *(_QWORD *)v5;
    v5 += 2;
    *a2++ = _byteswap_uint64(__ROL8__(v8, 32));
    --v7;
  }
  while ( v7 );
  *(_DWORD *)a2 = _byteswap_ulong(*v5);
  SymCryptWipe((__int64)a1, 0x80uLL);
  return SymCryptSha1Init((__int64)a1);
}
