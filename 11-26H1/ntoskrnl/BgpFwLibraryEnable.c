/*
 * XREFs of BgpFwLibraryEnable @ 0x14071AB1C
 * Callers:
 *     BgLibraryEnable @ 0x14071A6F8 (BgLibraryEnable.c)
 *     BgpFwLibraryInitialize @ 0x140C5A5B8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     ResFwBackgroundTransition @ 0x140C5AF20 (ResFwBackgroundTransition.c)
 */

__int64 __fastcall BgpFwLibraryEnable(__int64 a1)
{
  int v2; // ecx
  bool v3; // al
  __int64 v4; // rsi
  char v5; // al
  unsigned int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rsi
  unsigned int v13; // eax
  int v14; // eax

  v2 = *(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0xC00;
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 2) == 0 )
  {
    v3 = v2 == 3072;
    goto LABEL_5;
  }
  v3 = v2 == 3072;
  if ( v2 == 3072 )
  {
LABEL_5:
    v4 = 0LL;
    if ( !*(_BYTE *)a1 || *(_BYTE *)(a1 + 1) )
    {
      if ( v2 == 3072 )
      {
LABEL_32:
        gLoadedDiffHivesLock.Timer.TimerListEntry = *(_LIST_ENTRY *)a1;
        v14 = _mm_cvtsi128_si32(*(__m128i *)(a1 + 16));
        *(_OWORD *)&gLoadedDiffHivesLock.Timer.Dpc = *(_OWORD *)(a1 + 16);
        gLoadedDiffHivesLock.WaitBlock[0].WaitListEntry.Flink = *(struct _LIST_ENTRY **)(a1 + 32);
        if ( v14 == 1 )
        {
          *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] |= 8u;
          LODWORD(gLoadedDiffHivesLock.Timer.Dpc) = 5;
        }
        *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] |= 2u;
        return 0LL;
      }
    }
    else
    {
      if ( v3 )
      {
        if ( !gLoadedDiffHivesLock.WaitBlockFill4[8]
          || !gLoadedDiffHivesLock.WaitBlockFill4[9]
          || *(_DWORD *)(a1 + 16) != *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[24]
          || *(_QWORD *)(a1 + 4) != *(_QWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[12]
          || *(_DWORD *)(a1 + 12) != gLoadedDiffHivesLock.WaitBlock[0].SpareLong
          || *(_QWORD *)(a1 + 32) != MmGetPhysicalAddress(gLoadedDiffHivesLock.WaitBlock[0].SparePtr) )
        {
          return 3221225659LL;
        }
        *(_BYTE *)(a1 + 1) = 1;
        *(_QWORD *)(a1 + 32) = gLoadedDiffHivesLock.WaitBlock[0].SparePtr;
        goto LABEL_32;
      }
      v5 = *(_BYTE *)(a1 + 2);
      if ( v5 == 1 || v5 == 3 )
        v6 = *(_DWORD *)(a1 + 8) * *(_DWORD *)(a1 + 12);
      else
        v6 = *(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 12);
      v7 = *(_QWORD *)(a1 + 32);
      v8 = ((*(_DWORD *)(a1 + 16) != 4) + 3LL) * v6;
      v9 = MmMapIoSpaceEx(v7, v8, 0x404u);
      *(_QWORD *)(a1 + 32) = v9;
      if ( !v9 )
      {
        v10 = MmMapIoSpaceEx(v7, v8, 0x204u);
        *(_QWORD *)(a1 + 32) = v10;
        if ( !v10 )
          return 3221225626LL;
      }
      *(_BYTE *)(a1 + 1) = 1;
      if ( gLoadedDiffHivesLock.WaitBlockFill4[8] && gLoadedDiffHivesLock.WaitBlockFill4[9] )
      {
        LOBYTE(v4) = *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[24] != 4;
        v12 = v4 + 3;
        if ( ((gLoadedDiffHivesLock.WaitBlockFill4[10] - 1) & 0xFD) != 0 )
          v13 = *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[12] * gLoadedDiffHivesLock.WaitBlock[0].SpareLong;
        else
          v13 = gLoadedDiffHivesLock.WaitBlock[0].SpareLong * *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[16];
        MiUnmapContiguousMemory((unsigned __int64)gLoadedDiffHivesLock.WaitBlock[0].SparePtr, v12 * v13, 1);
      }
      *(_OWORD *)&gLoadedDiffHivesLock.WaitBlockFill10[8] = *(_OWORD *)a1;
      *(_OWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[24] = *(_OWORD *)(a1 + 16);
      gLoadedDiffHivesLock.WaitBlock[0].SparePtr = *(PVOID *)(a1 + 32);
    }
    ResFwBackgroundTransition(0LL);
    goto LABEL_32;
  }
  return 0LL;
}
