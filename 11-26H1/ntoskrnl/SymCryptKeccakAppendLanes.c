/*
 * XREFs of SymCryptKeccakAppendLanes @ 0x1405758E0
 * Callers:
 *     SymCryptKeccakAppend @ 0x1405757DC (SymCryptKeccakAppend.c)
 * Callees:
 *     SymCryptKeccakPermute @ 0x140575BC0 (SymCryptKeccakPermute.c)
 */

__int64 __fastcall SymCryptKeccakAppendLanes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r9
  unsigned __int64 i; // rdi
  __int64 result; // rax

  if ( a3 )
  {
    v4 = *(_DWORD *)(a1 + 204) >> 3;
    for ( i = 0LL; i < a3; ++i )
    {
      *(_QWORD *)(a1 + 8 * v4) ^= *(_QWORD *)(a2 + 8 * i);
      v4 = (unsigned int)(v4 + 1);
      *(_DWORD *)(a1 + 204) += 8;
      result = *(unsigned int *)(a1 + 204);
      if ( (_DWORD)result == *(_DWORD *)(a1 + 200) )
      {
        result = SymCryptKeccakPermute(a1);
        v4 = 0LL;
        *(_DWORD *)(a1 + 204) = 0;
      }
    }
  }
  return result;
}
