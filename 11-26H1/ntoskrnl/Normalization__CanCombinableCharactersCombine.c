/*
 * XREFs of Normalization__CanCombinableCharactersCombine @ 0x14080D18C
 * Callers:
 *     NormBuffer__LastStartBasePair @ 0x14062220C (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x140622268 (NormBuffer__RecheckStartCombinations.c)
 *     Normalization__CanCombineWithStartBase @ 0x14080D2FC (Normalization__CanCombineWithStartBase.c)
 *     Normalization__CanCombineWithStartFirstPair @ 0x14080D348 (Normalization__CanCombineWithStartFirstPair.c)
 *     Normalization__IsNormalized @ 0x14080D734 (Normalization__IsNormalized.c)
 *     Normalization__NormalizeCharacter @ 0x14080DFB8 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Normalization__CanCombinableCharactersCombine(__int64 a1, int a2, int a3)
{
  int v6; // ecx
  int v7; // edx
  __int64 v8; // rax
  unsigned __int16 i; // r8
  __int64 v10; // r9
  int v11; // esi

  if ( ((a2 & 0x1F0000) == 0) == ((a3 & 0x1F0000) == 0) )
  {
    v6 = *(_DWORD *)(a1 + 88);
    if ( v6 )
    {
      v7 = (a2 + 12541 * a3) % v6;
      v8 = *(_QWORD *)(a1 + 96);
      for ( i = *(_WORD *)(v8 + 2LL * (unsigned __int16)v7); i < *(_WORD *)(v8 + 2LL * (unsigned __int16)v7 + 2); i += 3 )
      {
        v10 = *(_QWORD *)(a1 + 104);
        v11 = *(unsigned __int16 *)(v10 + 2LL * i);
        if ( a2 == v11 && a3 == *(unsigned __int16 *)(v10 + 2LL * i + 2) )
          return *(unsigned __int16 *)(v10 + 2LL * i + 4);
        if ( (unsigned __int16)(v11 + 10240) <= 0x7FFu )
        {
          if ( a2 > 0xFFFF
            && (_WORD)v11 == (unsigned __int16)((a2 - 0x10000) / 1024) - 10240
            && *(_WORD *)(v10 + 2LL * i + 2) == (unsigned __int16)((a2 - 0x10000) % 1024) - 9216
            && *(_WORD *)(v10 + 2LL * i + 4) == (unsigned __int16)((a3 - 0x10000) / 1024) - 10240
            && *(_WORD *)(v10 + 2LL * i + 6) == (unsigned __int16)((a3 - 0x10000) % 1024) - 9216 )
          {
            return *(unsigned __int16 *)(v10 + 2LL * i + 10)
                 + (((unsigned int)*(unsigned __int16 *)(v10 + 2LL * i + 8) - 55287) << 10);
          }
          i += 3;
        }
      }
    }
  }
  return 0LL;
}
