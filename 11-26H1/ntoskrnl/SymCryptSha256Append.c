/*
 * XREFs of SymCryptSha256Append @ 0x140555950
 * Callers:
 *     SymCryptSha256 @ 0x1405558C0 (SymCryptSha256.c)
 *     HashpHashBytes @ 0x1408B2664 (HashpHashBytes.c)
 * Callees:
 *     SymCryptSha256AppendBlocks @ 0x140555A30 (SymCryptSha256AppendBlocks.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall SymCryptSha256Append(unsigned int *a1, char *a2, size_t a3)
{
  __int64 v3; // rdi
  size_t v4; // rbx
  char *v5; // rbp
  size_t v7; // r14
  __int64 result; // rax
  size_t v9; // rax
  size_t v10; // [rsp+20h] [rbp-38h] BYREF

  v3 = *a1;
  v4 = a3;
  *((_QWORD *)a1 + 2) += a3;
  v5 = a2;
  v10 = 0LL;
  if ( (_DWORD)v3 )
  {
    v7 = (unsigned int)(64 - v3);
    if ( a3 >= v7 )
    {
      memmove((char *)a1 + v3 + 32, a2, (unsigned int)v7);
      v5 += v7;
      v4 -= v7;
      result = SymCryptSha256AppendBlocks(a1 + 24, a1 + 8, 64LL, &v10);
      LODWORD(v3) = 0;
    }
  }
  if ( v4 >= 0x40 )
  {
    SymCryptSha256AppendBlocks(a1 + 24, v5, v4, &v10);
    v9 = v4;
    v4 = v10;
    result = v9 - v10;
    v5 += result;
  }
  if ( v4 )
  {
    result = (__int64)memmove((char *)a1 + (unsigned int)v3 + 32, v5, v4);
    LODWORD(v3) = v4 + v3;
  }
  *a1 = v3;
  return result;
}
