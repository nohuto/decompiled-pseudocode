/*
 * XREFs of SymCryptKeccakApplyPadding @ 0x140577E1C
 * Callers:
 *     SymCryptKeccakExtract @ 0x140577E84 (SymCryptKeccakExtract.c)
 * Callees:
 *     SymCryptKeccakPermute @ 0x140578070 (SymCryptKeccakPermute.c)
 */

__int64 __fastcall SymCryptKeccakApplyPadding(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 204) >> 3)) ^= (unsigned __int64)*(unsigned __int8 *)(a1 + 208) << (8 * (*(_DWORD *)(a1 + 204) & 7u));
  *(_QWORD *)(a1 + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 200) >> 3) - 8) ^= 0x8000000000000000uLL;
  result = SymCryptKeccakPermute(a1);
  *(_DWORD *)(a1 + 204) = 0;
  *(_BYTE *)(a1 + 209) = 1;
  return result;
}
