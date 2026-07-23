/*
 * XREFs of SymCryptSha256Result @ 0x140557200
 * Callers:
 *     SymCryptSha256 @ 0x1405558C0 (SymCryptSha256.c)
 *     HashpFinalizeHash @ 0x1408B25F8 (HashpFinalizeHash.c)
 * Callees:
 *     SymCryptSha256AppendBlocks @ 0x140555A30 (SymCryptSha256AppendBlocks.c)
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptSha256Result(unsigned int *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a1;
  v11 = 0LL;
  *((_BYTE *)a1 + v2 + 32) = 0x80;
  v5 = (__int64 *)(a1 + 24);
  v6 = (unsigned int)(v2 + 1);
  if ( (unsigned int)v6 > 0x38 )
  {
    SymCryptWipe((char *)a1 + v6 + 32, (unsigned int)(64 - v6));
    SymCryptSha256AppendBlocks((__int64)v5, (__int64)(a1 + 8), 64LL, (__int64)&v11);
    v6 = 0LL;
  }
  SymCryptWipe((char *)a1 + v6 + 32, (unsigned int)(64 - v6));
  *((_QWORD *)a1 + 11) = _byteswap_uint64(8LL * *((_QWORD *)a1 + 2));
  SymCryptSha256AppendBlocks((__int64)v5, (__int64)(a1 + 8), 64LL, (__int64)&v11);
  v7 = v5;
  v8 = 4LL;
  do
  {
    v9 = *v7++;
    *a2++ = _byteswap_uint64(__ROL8__(v9, 32));
    --v8;
  }
  while ( v8 );
  result = SymCryptWipe(a1, 128LL);
  *(_OWORD *)v5 = xmmword_140023A98;
  *((_OWORD *)v5 + 1) = xmmword_140023AA8;
  return result;
}
