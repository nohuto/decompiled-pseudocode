/*
 * XREFs of MiFindLargeNodePage @ 0x1403C99D4
 * Callers:
 *     MiFindContiguousPagesLarge @ 0x1403C97BC (MiFindContiguousPagesLarge.c)
 *     MiPartitionTransferAllocateLargePages @ 0x14087CA30 (MiPartitionTransferAllocateLargePages.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x14028B290 (MiGetPfnPageSizeIndex.c)
 *     MiUpdateLargePageBitMap @ 0x1403C5418 (MiUpdateLargePageBitMap.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1403C7FF0 (MiGetLargePageDemoteAsNeeded.c)
 */

__int64 __fastcall MiFindLargeNodePage(
        __int64 a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        unsigned __int16 a5,
        char a6,
        __int64 a7)
{
  __int64 v9; // rdi
  __int64 v10; // rbp
  int v11; // r15d
  unsigned int v12; // ebx
  __int64 LargePageDemoteAsNeeded; // rax
  __int64 v14; // rsi
  int PfnPageSizeIndex; // eax

  if ( a2 >= (unsigned __int16)KeNumberNodes )
  {
    a2 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 34644);
    v9 = qword_140E2D690 + 4LL * a2 * (unsigned __int16)KeNumberNodes;
    v10 = v9 + 4LL * (unsigned __int16)KeNumberNodes;
  }
  else
  {
    v9 = 0LL;
    v10 = 4LL;
  }
  v11 = ((a5 & 1) == 0 ? 0x30 : 0) | 1;
  if ( KeGetCurrentIrql() != 2 )
    v11 = (a5 & 1) == 0 ? 0x30 : 0;
  v12 = (a2 & 0x3F | ((a3 & 3 | (4 * (a6 & 3))) << 7)) << 9;
  while ( 1 )
  {
    LargePageDemoteAsNeeded = MiGetLargePageDemoteAsNeeded(a1, v12, v11, a4, 0LL, a7);
    v14 = LargePageDemoteAsNeeded;
    if ( LargePageDemoteAsNeeded )
      break;
    if ( ((a5 | (unsigned __int16)v12) & 0x8000) != 0 )
    {
      v9 += 4LL;
      if ( v9 == v10 )
        return 0LL;
      v12 &= ~0x8000u;
    }
    else
    {
      v12 |= 0x8000u;
    }
  }
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(LargePageDemoteAsNeeded);
  MiUpdateLargePageBitMap(a1, (v14 + 0x220000000000LL) / 48, MiPageSizes[PfnPageSizeIndex], 3);
  return v14;
}
