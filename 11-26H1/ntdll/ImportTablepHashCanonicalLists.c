/*
 * XREFs of ImportTablepHashCanonicalLists @ 0x180022944
 * Callers:
 *     RtlComputeImportTableHash @ 0x180121820 (RtlComputeImportTableHash.c)
 * Callees:
 *     SymCryptMd5Result @ 0x180022A30 (SymCryptMd5Result.c)
 *     SymCryptHashAppendInternal @ 0x180022EFC (SymCryptHashAppendInternal.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall ImportTablepHashCanonicalLists(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rax
  _BYTE v10[96]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v11; // [rsp+80h] [rbp-28h]

  memset_thunk_772440563353939046(v10, 0, 0x70uLL);
  v11 = xmmword_1801767C8;
  while ( a1 )
  {
    v4 = (_QWORD *)a1[2];
    v5 = -1LL;
    v6 = a1[1];
    do
      ++v5;
    while ( *(_BYTE *)(v6 + v5) );
    SymCryptHashAppendInternal(SymCryptMd5Algorithm_default, v10, v6, (unsigned int)v5);
    while ( v4 )
    {
      v7 = v4[1];
      v8 = -1LL;
      do
        ++v8;
      while ( *(_BYTE *)(v7 + v8) );
      SymCryptHashAppendInternal(SymCryptMd5Algorithm_default, v10, v7, (unsigned int)v8);
      v4 = (_QWORD *)*v4;
    }
    a1 = (_QWORD *)*a1;
  }
  SymCryptMd5Result(v10, a2);
  return 0LL;
}
