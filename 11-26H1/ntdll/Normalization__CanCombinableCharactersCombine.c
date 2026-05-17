/*
 * XREFs of Normalization__CanCombinableCharactersCombine @ 0x1800B0530
 * Callers:
 *     Normalization__IsNormalized @ 0x1800ADD10 (Normalization__IsNormalized.c)
 *     Normalization__NormalizeCharacter @ 0x1800AF2CC (Normalization__NormalizeCharacter.c)
 *     NormBuffer__RecheckStartCombinations @ 0x1800B06A0 (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__LastStartBasePair @ 0x1800B08B8 (NormBuffer__LastStartBasePair.c)
 *     Normalization__CanCombineWithStartFirstPair @ 0x1800B0B28 (Normalization__CanCombineWithStartFirstPair.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Normalization__CanCombinableCharactersCombine(__int64 a1, int a2, int a3)
{
  int v5; // edx
  __int64 v6; // rax
  unsigned __int16 i; // r8
  __int64 v8; // r9
  int v9; // esi

  if ( ((a2 & 0x1F0000) == 0) == ((a3 & 0x1F0000) == 0) && *(_DWORD *)(a1 + 88) )
  {
    v5 = (a2 + 12541 * a3) % *(_DWORD *)(a1 + 88);
    v6 = *(_QWORD *)(a1 + 96);
    for ( i = *(_WORD *)(v6 + 2LL * (unsigned __int16)v5); i < *(_WORD *)(v6 + 2LL * (unsigned __int16)v5 + 2); i += 3 )
    {
      v8 = *(_QWORD *)(a1 + 104);
      v9 = *(unsigned __int16 *)(v8 + 2LL * i);
      if ( a2 == v9 && a3 == *(unsigned __int16 *)(v8 + 2LL * i + 2) )
        return *(unsigned __int16 *)(v8 + 2LL * i + 4);
      if ( (unsigned __int16)(v9 + 10240) <= 0x7FFu )
      {
        if ( a2 > 0xFFFF
          && (_WORD)v9 == (unsigned __int16)((a2 - 0x10000) / 1024) - 10240
          && *(_WORD *)(v8 + 2LL * i + 2) == (unsigned __int16)((a2 - 0x10000) % 1024) - 9216
          && *(_WORD *)(v8 + 2LL * i + 4) == (unsigned __int16)((a3 - 0x10000) / 1024) - 10240
          && *(_WORD *)(v8 + 2LL * i + 6) == (unsigned __int16)((a3 - 0x10000) % 1024) - 9216 )
        {
          return *(unsigned __int16 *)(v8 + 2LL * i + 10)
               + (((unsigned int)*(unsigned __int16 *)(v8 + 2LL * i + 8) - 55287) << 10);
        }
        i += 3;
      }
    }
  }
  return 0LL;
}
