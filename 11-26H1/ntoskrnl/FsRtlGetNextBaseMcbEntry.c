/*
 * XREFs of FsRtlGetNextBaseMcbEntry @ 0x14041C170
 * Callers:
 *     FsRtlGetNextLargeMcbEntry @ 0x14041C100 (FsRtlGetNextLargeMcbEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlGetNextBaseMcbEntry(
        PBASE_MCB Mcb,
        ULONG RunIndex,
        PLONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCount)
{
  __int64 v7; // r10
  int v8; // r11d
  __int64 v9; // r8
  int v10; // edx
  int v11; // edx

  v7 = RunIndex;
  if ( RunIndex >= Mcb->PairCount )
    return 0;
  v8 = 0;
  v9 = RunIndex - 1;
  if ( RunIndex )
    v10 = *((_DWORD *)Mcb->Mapping + 2 * v9);
  else
    v10 = 0;
  *(_DWORD *)Vbn = v10;
  *((_DWORD *)Vbn + 1) = (v10 != -1) - 1;
  v11 = *((_DWORD *)Mcb->Mapping + 2 * v7 + 1);
  *(_DWORD *)Lbn = v11;
  *((_DWORD *)Lbn + 1) = (v11 != -1) - 1;
  if ( (_DWORD)v7 )
    v8 = *((_DWORD *)Mcb->Mapping + 2 * v9);
  *SectorCount = (unsigned int)(*((_DWORD *)Mcb->Mapping + 2 * v7) - v8);
  return 1;
}
