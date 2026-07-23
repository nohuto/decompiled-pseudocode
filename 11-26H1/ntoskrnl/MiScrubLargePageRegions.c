/*
 * XREFs of MiScrubLargePageRegions @ 0x140AC8350
 * Callers:
 *     MiScrubNode @ 0x140AC8020 (MiScrubNode.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     MiScrubInterrupted @ 0x1404C3F28 (MiScrubInterrupted.c)
 *     MiScrubLargePage @ 0x14071116C (MiScrubLargePage.c)
 *     MiScrubActiveLargePage @ 0x14088418C (MiScrubActiveLargePage.c)
 */

__int64 __fastcall MiScrubLargePageRegions(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  ULONG_PTR v13; // rbp
  __int64 v14; // rsi
  __int64 *v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // r14
  unsigned __int8 v18; // al
  unsigned __int64 LeafVa; // rax

  v3 = a3;
  v4 = a2;
  v7 = (unsigned __int128)((a2 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = ((unsigned __int64)v7 >> 63) + (v7 >> 3);
  v9 = ((v7 < 0) + (unsigned __int8)(v7 >> 3)) & 0xF;
  if ( (((v7 < 0) + (unsigned __int8)(v7 >> 3)) & 0xF) != 0 )
  {
    v10 = 16 - v9;
    if ( 16 - v9 >= a3 )
      return 0LL;
    v8 += v10;
    v4 += 48 * v10;
    v3 = a3 - v10;
  }
  v11 = v3 & 0xF;
  if ( (v3 & 0xF) != 0 )
  {
    if ( v11 >= v3 )
      return 0LL;
    v3 -= v11;
  }
  v12 = 48 * v3 + v4;
  v13 = v3 + v8;
LABEL_8:
  while ( v3 )
  {
    v14 = 0LL;
    v15 = MiPageSizes;
    while ( ((*v15 - 1) & v13) != 0 )
    {
      v14 = (unsigned int)(v14 + 1);
      ++v15;
      if ( (unsigned int)v14 >= 2 )
      {
        if ( (unsigned int)v14 <= 2 )
          break;
LABEL_16:
        v3 -= 16LL;
        v12 -= 768LL;
        v13 -= 16LL;
        goto LABEL_8;
      }
    }
    while ( 1 )
    {
      v16 = MiPageSizes[v14];
      if ( v16 <= v3 && (unsigned int)MiGetPfnPageSizeIndex(v12 - 48 * v16) == (_DWORD)v14 )
        break;
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 > 2 )
        goto LABEL_16;
    }
    _mm_lfence();
    v17 = MiPageSizes[v14];
    v13 -= v17;
    v12 += -48 * v17;
    v18 = *(_BYTE *)(v12 + 34) & 7;
    if ( v18 > 1u )
    {
      if ( v18 == 6
        && (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
        && (unsigned __int16)*(_DWORD *)(v12 + 32) == 2 )
      {
        LeafVa = MiGetLeafVa(*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL);
        if ( MmIsUserAddress(LeafVa) )
          MiScrubActiveLargePage(a1, v13, v14);
      }
    }
    else if ( (int)MiScrubLargePage(a1, v13, v14, 0) < 0 )
    {
      return v17 + (v12 - a2) / 48;
    }
    if ( MiScrubInterrupted((__int64)a1) )
      return v17 + (v12 - a2) / 48;
    v3 -= v17;
  }
  return 0LL;
}
