/*
 * XREFs of SymCryptKeccakAppend @ 0x140577C8C
 * Callers:
 *     SymCryptShake128Append @ 0x140573BC0 (SymCryptShake128Append.c)
 *     SymCryptShake256 @ 0x140573C10 (SymCryptShake256.c)
 * Callees:
 *     SymCryptKeccakAppendLanes @ 0x140577D90 (SymCryptKeccakAppendLanes.c)
 *     SymCryptKeccakPermute @ 0x140578070 (SymCryptKeccakPermute.c)
 *     SymCryptKeccakReset @ 0x1405786A8 (SymCryptKeccakReset.c)
 */

__int64 __fastcall SymCryptKeccakAppend(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  int v7; // ecx
  __int64 v8; // rax
  __int64 result; // rax
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rcx

  v3 = 0LL;
  if ( *(_BYTE *)(a1 + 209) )
    SymCryptKeccakReset();
  for ( ; a3; --a3 )
  {
    v7 = *(_DWORD *)(a1 + 204) & 7;
    if ( !v7 )
      break;
    v8 = *a2++;
    *(_QWORD *)(a1 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 204))++ >> 3)) ^= v8 << (8 * (unsigned __int8)v7);
  }
  result = *(unsigned int *)(a1 + 200);
  if ( *(_DWORD *)(a1 + 204) == (_DWORD)result )
  {
    result = SymCryptKeccakPermute(a1);
    *(_DWORD *)(a1 + 204) = 0;
  }
  v10 = a3 >> 3;
  if ( a3 >> 3 )
  {
    SymCryptKeccakAppendLanes(a1, a2, a3 >> 3);
    result = 8 * v10;
    a2 += 8 * v10;
    a3 -= 8 * v10;
  }
  if ( a3 )
  {
    do
    {
      v11 = a2[v3];
      v12 = v3 + *(unsigned int *)(a1 + 204);
      ++v3;
      result = v11 << (8 * ((unsigned __int8)v12 & 7u));
      *(_QWORD *)(a1 + 8 * (v12 >> 3)) ^= result;
    }
    while ( v3 < a3 );
  }
  *(_DWORD *)(a1 + 204) += a3;
  return result;
}
