/*
 * XREFs of MiZeroWithUltraSpace @ 0x1402A0430
 * Callers:
 *     MiZeroChainWorker @ 0x1402A02A0 (MiZeroChainWorker.c)
 *     MiZeroLargePage @ 0x1402A0F54 (MiZeroLargePage.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiWriteLargePte @ 0x1402A0630 (MiWriteLargePte.c)
 *     AccelFillMemory @ 0x1402A0F14 (AccelFillMemory.c)
 *     KeZeroPages @ 0x1407353B0 (KeZeroPages.c)
 */

unsigned __int64 __fastcall MiZeroWithUltraSpace(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int PfnPageSizeIndex; // edi
  __int64 v9; // r12
  __int64 v10; // rbp
  unsigned __int64 UltraMapping; // rbx
  int v12; // ecx
  int v13; // r9d
  __int64 v14; // rbp
  unsigned __int64 result; // rax
  unsigned __int64 v16; // rbx
  unsigned int v17; // esi
  unsigned __int64 v18; // rbp
  _QWORD *v19; // rcx
  __int64 v20; // rcx

  PfnPageSizeIndex = 3;
  if ( (*(_QWORD *)(a3 + 40) & 0x10000000000LL) != 0 )
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(a3);
  v9 = PfnPageSizeIndex;
  v10 = MiPageSizes[v9];
  UltraMapping = MiGetUltraMapping(a1 + 32LL * PfnPageSizeIndex, PfnPageSizeIndex, v10, a4);
  v12 = 4;
  if ( (*(_DWORD *)(a3 + 32) & 0xC00000) != 0 )
  {
    if ( (*(_DWORD *)(a3 + 32) & 0xC00000) == 0x800000 )
      v12 = 28;
  }
  else
  {
    v12 = 12;
  }
  v13 = -1543503872;
  if ( PfnPageSizeIndex > 1 )
    v13 = -1610612736;
  MiWriteLargePte(UltraMapping, (a3 + 0x220000000000LL) / 48, PfnPageSizeIndex, v12 | (unsigned int)v13);
  v14 = v10 << 12;
  if ( !a2 )
    goto LABEL_9;
  if ( (int)AccelFillMemory(a2, UltraMapping, v14, 0, 3LL) < 0 )
  {
    _InterlockedIncrement(&dword_140EF4DEC);
LABEL_9:
    KeZeroPages(UltraMapping, v14);
  }
  result = 0xFFFFF68000000000uLL;
  v16 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( PfnPageSizeIndex <= 1 )
  {
    v20 = 2 - PfnPageSizeIndex;
    do
    {
      result = 0xFFFFF68000000000uLL;
      v16 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v20;
    }
    while ( v20 );
  }
  v17 = 0;
  v18 = MiPtesToSupportLargePageSizes[v9];
  if ( v18 )
  {
    result = 0LL;
    do
    {
      v19 = (_QWORD *)(v16 + 8 * result);
      if ( *v19 )
      {
        if ( PfnPageSizeIndex <= 1 )
          MiRewritePteWithLockBit(0LL, 0, (unsigned __int64)v19, *(__int64 *)&CLFS_LSN_NULL_EXT);
        else
          *v19 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
      result = ++v17;
    }
    while ( v17 < v18 );
  }
  return result;
}
