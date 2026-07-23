/*
 * XREFs of SymCryptParallelSha256Result1 @ 0x140558030
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 */

char __fastcall SymCryptParallelSha256Result1(__int64 a1, unsigned int *a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rax
  unsigned int v8; // ebx
  char v9; // al
  char result; // al

  v4 = *a2;
  *((_BYTE *)a2 + v4 + 32) = 0x80;
  v8 = v4 + 1;
  SymCryptWipe((char *)a2 + v8 + 32, 64 - v8);
  *(_QWORD *)(a3 + 40) = 64LL;
  *(_QWORD *)(a3 + 32) = a2 + 8;
  if ( v8 <= 0x38 )
  {
    *((_QWORD *)a2 + 11) = _byteswap_uint64(8LL * *((_QWORD *)a2 + 2));
    v9 = 4;
  }
  else
  {
    v9 = 3;
  }
  *(_BYTE *)(a3 + 8) = v9;
  result = 1;
  *a4 = 1;
  return result;
}
