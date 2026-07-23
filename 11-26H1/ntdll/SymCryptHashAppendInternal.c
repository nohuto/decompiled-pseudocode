/*
 * XREFs of SymCryptHashAppendInternal @ 0x180022EFC
 * Callers:
 *     ImportTablepHashCanonicalLists @ 0x180022944 (ImportTablepHashCanonicalLists.c)
 *     SymCryptMd5Append @ 0x180022C90 (SymCryptMd5Append.c)
 *     MD5Update_0 @ 0x180022D20 (MD5Update_0.c)
 *     SymCryptSha1Append @ 0x180024260 (SymCryptSha1Append.c)
 *     MD4Update @ 0x180158890 (MD4Update.c)
 *     SymCryptMd4Append @ 0x18015E1C0 (SymCryptMd4Append.c)
 * Callees:
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

size_t __fastcall SymCryptHashAppendInternal(__int64 a1, unsigned int *a2, char *a3, size_t a4)
{
  size_t v4; // rdi
  char *v5; // r14
  __int64 v8; // rsi
  size_t result; // rax
  size_t v10; // r15
  size_t v11; // rax
  size_t v12; // [rsp+30h] [rbp-48h] BYREF

  *((_QWORD *)a2 + 2) += a4;
  v4 = a4;
  v5 = a3;
  v12 = 0LL;
  if ( *((_QWORD *)a2 + 2) < a4 )
    ++*((_QWORD *)a2 + 3);
  v8 = *a2;
  if ( (_DWORD)v8 )
  {
    v10 = (unsigned int)(*(_DWORD *)(a1 + 48) - v8);
    if ( a4 >= v10 )
    {
      memmove((char *)a2 + v8 + 32, a3, (unsigned int)v10);
      v5 += v10;
      v4 -= v10;
      (*(void (__fastcall **)(char *, unsigned int *, _QWORD, size_t *))(a1 + 24))(
        (char *)a2 + *(unsigned int *)(a1 + 52),
        a2 + 8,
        *(unsigned int *)(a1 + 48),
        &v12);
      LODWORD(v8) = 0;
    }
  }
  result = *(unsigned int *)(a1 + 48);
  if ( v4 >= result )
  {
    (*(void (__fastcall **)(char *, char *, size_t, size_t *))(a1 + 24))(
      (char *)a2 + *(unsigned int *)(a1 + 52),
      v5,
      v4,
      &v12);
    v11 = v4;
    v4 = v12;
    result = v11 - v12;
    v5 += result;
  }
  if ( v4 )
  {
    result = (size_t)memmove((char *)a2 + (unsigned int)v8 + 32, v5, v4);
    LODWORD(v8) = v4 + v8;
  }
  *a2 = v8;
  return result;
}
