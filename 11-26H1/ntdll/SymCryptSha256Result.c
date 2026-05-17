/*
 * XREFs of SymCryptSha256Result @ 0x1800FE014
 * Callers:
 *     SymCryptSha256 @ 0x1800FDF8C (SymCryptSha256.c)
 * Callees:
 *     SymCryptSha256AppendBlocks_ul1 @ 0x1800FE130 (SymCryptSha256AppendBlocks_ul1.c)
 *     SymCryptWipeAsm @ 0x180137990 (SymCryptWipeAsm.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
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
    SymCryptWipeAsm((char *)a1 + v6 + 32, (unsigned int)(64 - v6));
    ((void (__fastcall *)(__int64 *, unsigned int *, __int64, __int64 *))SymCryptSha256AppendBlocks_ul1)(
      v5,
      a1 + 8,
      64LL,
      &v11);
    v6 = 0LL;
  }
  SymCryptWipeAsm((char *)a1 + v6 + 32, (unsigned int)(64 - v6));
  *((_QWORD *)a1 + 11) = _byteswap_uint64(8LL * *((_QWORD *)a1 + 2));
  ((void (__fastcall *)(__int64 *, unsigned int *, __int64, __int64 *))SymCryptSha256AppendBlocks_ul1)(
    v5,
    a1 + 8,
    64LL,
    &v11);
  v7 = v5;
  v8 = 4LL;
  do
  {
    v9 = *v7++;
    *a2++ = _byteswap_uint64(__ROL8__(v9, 32));
    --v8;
  }
  while ( v8 );
  result = SymCryptWipeAsm(a1, 128LL);
  *(_OWORD *)v5 = xmmword_180183500;
  *((_OWORD *)v5 + 1) = xmmword_180183510;
  return result;
}
