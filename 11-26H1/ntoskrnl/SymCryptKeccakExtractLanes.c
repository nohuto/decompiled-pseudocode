/*
 * XREFs of SymCryptKeccakExtractLanes @ 0x140577FC0
 * Callers:
 *     SymCryptKeccakExtract @ 0x140577E84 (SymCryptKeccakExtract.c)
 * Callees:
 *     SymCryptKeccakPermute @ 0x140578070 (SymCryptKeccakPermute.c)
 */

void __fastcall SymCryptKeccakExtractLanes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // eax
  __int64 v6; // r9
  unsigned __int64 i; // rdi
  __int64 v9; // rcx

  if ( a3 )
  {
    v3 = *(_DWORD *)(a1 + 204);
    v6 = v3 >> 3;
    for ( i = 0LL; i < a3; ++i )
    {
      if ( v3 == *(_DWORD *)(a1 + 200) )
      {
        SymCryptKeccakPermute(a1);
        v6 = 0LL;
        *(_DWORD *)(a1 + 204) = 0;
      }
      v9 = *(_QWORD *)(a1 + 8 * v6);
      v6 = (unsigned int)(v6 + 1);
      *(_QWORD *)(a2 + 8 * i) = v9;
      *(_DWORD *)(a1 + 204) += 8;
      v3 = *(_DWORD *)(a1 + 204);
    }
  }
}
