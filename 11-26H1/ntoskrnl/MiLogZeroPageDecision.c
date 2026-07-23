/*
 * XREFs of MiLogZeroPageDecision @ 0x14048B1AC
 * Callers:
 *     MiBackgroundZeroComplete @ 0x14049EACC (MiBackgroundZeroComplete.c)
 *     MiWakeZeroingThreads @ 0x140713A28 (MiWakeZeroingThreads.c)
 * Callees:
 *     MiZeroPageLogEntriesMergable @ 0x14048B2D8 (MiZeroPageLogEntriesMergable.c)
 */

void __fastcall MiLogZeroPageDecision(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int16 a5,
        char a6)
{
  unsigned int *v6; // r10
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int *v10; // r11
  unsigned int v11; // eax
  unsigned int v12; // eax
  char v13; // cl
  char v14; // al
  __int64 v15; // r11

  v6 = *(unsigned int **)(a1 + 496);
  if ( v6 )
  {
    v8 = *v6;
    ++v6[1];
    v9 = v6[2];
    if ( v9 < v8 || (v9 = 1, v6[2] = 1, v8 > 1) )
    {
      v10 = &v6[4 * v9];
      v11 = a3 | 1;
      if ( a3 < 0x100000000LL )
        v11 = a3 & 0xFFFFFFFE;
      *v10 = v11;
      v12 = a4 | 1;
      if ( a4 < 0x100000000LL )
        v12 = a4 & 0xFFFFFFFE;
      v10[1] = v12;
      *((_WORD *)v10 + 4) = a5;
      *((_WORD *)v10 + 5) = *(_WORD *)(a1 + 12);
      v13 = *((_BYTE *)v10 + 12) ^ (a6 ^ *((_BYTE *)v10 + 12)) & 0xF;
      *((_BYTE *)v10 + 12) = v13;
      v14 = v13 & 0xF ^ (16 * *(_BYTE *)a1);
      *((_BYTE *)v10 + 13) = 0;
      *((_WORD *)v10 + 7) = 1;
      *((_BYTE *)v10 + 12) = (a2 << 6) | v14 & 0x3F;
      if ( v6[2] == 1 || !(unsigned int)MiZeroPageLogEntriesMergable(v10, v10 - 4) || *(_WORD *)(v15 - 2) == 0xFFFF )
      {
        ++*(_DWORD *)(a1 + 320);
        ++v6[2];
      }
      else
      {
        ++*(_DWORD *)(a1 + 316);
        ++*(_WORD *)(v15 - 2);
      }
    }
  }
}
