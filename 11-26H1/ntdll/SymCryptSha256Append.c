/*
 * XREFs of SymCryptSha256Append @ 0x180120F44
 * Callers:
 *     SymCryptSha256 @ 0x1800FD6DC (SymCryptSha256.c)
 * Callees:
 *     SymCryptSha256AppendBlocks_ul1 @ 0x1800FD880 (SymCryptSha256AppendBlocks_ul1.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall SymCryptSha256Append(__m128i *a1, char *a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  char *v5; // rbp
  unsigned __int64 v7; // r14
  __int64 result; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // [rsp+20h] [rbp-38h] BYREF

  v3 = a1->m128i_u32[0];
  v4 = a3;
  a1[1].m128i_i64[0] += a3;
  v5 = a2;
  v10 = 0LL;
  if ( (_DWORD)v3 )
  {
    v7 = (unsigned int)(64 - v3);
    if ( a3 >= v7 )
    {
      memmove(&a1[2].m128i_i8[v3], a2, (unsigned int)v7);
      v5 += v7;
      v4 -= v7;
      result = SymCryptSha256AppendBlocks_ul1(a1 + 6, (__int64)a1[2].m128i_i64, 0x40uLL, &v10);
      LODWORD(v3) = 0;
    }
  }
  if ( v4 >= 0x40 )
  {
    SymCryptSha256AppendBlocks_ul1(a1 + 6, (__int64)v5, v4, &v10);
    v9 = v4;
    v4 = v10;
    result = v9 - v10;
    v5 += result;
  }
  if ( v4 )
  {
    result = (__int64)memmove(&a1[2].m128i_i8[(unsigned int)v3], v5, v4);
    LODWORD(v3) = v4 + v3;
  }
  a1->m128i_i32[0] = v3;
  return result;
}
