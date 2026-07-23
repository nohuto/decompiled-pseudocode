/*
 * XREFs of SymCryptKeccakExtract @ 0x140577E84
 * Callers:
 *     SymCryptShake256Extract @ 0x140573BD8 (SymCryptShake256Extract.c)
 *     SymCryptShake256 @ 0x140573C10 (SymCryptShake256.c)
 *     SymCryptShake256Result @ 0x140573CC4 (SymCryptShake256Result.c)
 * Callees:
 *     SymCryptKeccakApplyPadding @ 0x140577E1C (SymCryptKeccakApplyPadding.c)
 *     SymCryptKeccakExtractLanes @ 0x140577FC0 (SymCryptKeccakExtractLanes.c)
 *     SymCryptKeccakPermute @ 0x140578070 (SymCryptKeccakPermute.c)
 *     SymCryptKeccakReset @ 0x1405786A8 (SymCryptKeccakReset.c)
 */

__int64 __fastcall SymCryptKeccakExtract(__int64 a1, _BYTE *a2, unsigned __int64 a3, char a4)
{
  __int64 result; // rax
  unsigned int v9; // r8d
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned int v12; // r8d
  __int64 v13; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( !*(_BYTE *)(a1 + 209) )
    result = SymCryptKeccakApplyPadding(a1);
  if ( a3 )
  {
    result = *(unsigned int *)(a1 + 200);
    if ( *(_DWORD *)(a1 + 204) == (_DWORD)result )
    {
      result = SymCryptKeccakPermute(a1);
      *(_DWORD *)(a1 + 204) = 0;
    }
    do
    {
      v9 = *(_DWORD *)(a1 + 204);
      if ( (v9 & 7) == 0 )
        break;
      result = v9 + 1;
      v10 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)v9 >> 3)) >> (8 * (v9 & 7));
      *(_DWORD *)(a1 + 204) = result;
      *a2++ = v10;
      --a3;
    }
    while ( a3 );
  }
  v11 = a3 >> 3;
  if ( a3 >> 3 )
  {
    SymCryptKeccakExtractLanes(a1, a2, a3 >> 3);
    result = 8 * v11;
    a2 += 8 * v11;
    a3 -= 8 * v11;
  }
  for ( ; a3; --a3 )
  {
    v12 = *(_DWORD *)(a1 + 204);
    if ( v12 == *(_DWORD *)(a1 + 200) )
    {
      SymCryptKeccakPermute(a1);
      v12 = 0;
      *(_DWORD *)(a1 + 204) = 0;
    }
    result = v12 + 1;
    v13 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)v12 >> 3)) >> (8 * (v12 & 7));
    *(_DWORD *)(a1 + 204) = result;
    *a2++ = v13;
  }
  if ( a4 )
    return SymCryptKeccakReset(a1);
  return result;
}
