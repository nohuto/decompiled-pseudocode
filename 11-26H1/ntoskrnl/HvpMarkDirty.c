/*
 * XREFs of HvpMarkDirty @ 0x1408E1510
 * Callers:
 *     HvMarkDirtyForFlush @ 0x1404B5320 (HvMarkDirtyForFlush.c)
 *     CmpTransMgrPrepare @ 0x1408B52AC (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1408B57AC (CmpTransMgrSyncHive.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D74A0 (CmpUpdateKeyNodeAccessBits.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     CmpAddToLeaf @ 0x1408D7CDC (CmpAddToLeaf.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     CmpCheckValueList @ 0x1408DFC60 (CmpCheckValueList.c)
 *     HvpFindFreeCell @ 0x1408E1930 (HvpFindFreeCell.c)
 *     HvMarkCellDirty @ 0x1408E1C90 (HvMarkCellDirty.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408E23B0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCells @ 0x1408E2BC0 (HvpEnlistFreeCells.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140AEE648 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpAddBin @ 0x140B87980 (HvpAddBin.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140260E90 (RtlCaptureStackBackTrace.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     CmpArmLazyWriter @ 0x140468450 (CmpArmLazyWriter.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HvpMapEntryGetFreeBin @ 0x1408BF5C0 (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryIsPoolBacked @ 0x1408BF824 (HvpMapEntryIsPoolBacked.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x1408BF948 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpProtectBinPartial @ 0x1408BFB2C (HvpProtectBinPartial.c)
 *     CmpLogHiveDirtyEvent @ 0x140ABC160 (CmpLogHiveDirtyEvent.c)
 *     CmpForceFlushForCoalescing @ 0x140AE1394 (CmpForceFlushForCoalescing.c)
 *     CmpIssueNewDirtyCallback @ 0x140AFA6A0 (CmpIssueNewDirtyCallback.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140C5E6F0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140C5E710 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140C5EAA0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpMarkDirty(ULONG_PTR BugCheckParameter2, int a2, int a3, unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // r12d
  unsigned int v9; // r9d
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v12; // r10d
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // r9d
  unsigned int v16; // eax
  bool v17; // cf
  unsigned int v18; // esi
  unsigned int v19; // eax
  unsigned int v20; // ebx
  ULONG v22; // r9d
  unsigned int v23; // esi
  char v24; // r8
  BOOL v25; // eax
  int v26; // r15d
  unsigned __int32 i; // edx
  signed __int32 v28; // ecx
  signed __int32 v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int v33; // r12d
  unsigned int v34; // r15d
  __int64 CellMap; // rax
  __int64 FreeBin; // rax
  unsigned int *v37; // rcx
  unsigned int v38; // r11d
  __int64 v39; // rax
  __int64 v40; // r10
  int v41; // r11d
  unsigned int v42; // r13d
  __int64 v43; // rcx
  __int64 v44; // r9
  __int64 v45; // r10
  __int64 BinAddress; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // r8
  unsigned int v50; // r11d
  ULONG v51; // [rsp+30h] [rbp-48h]
  __int64 v52; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v53; // [rsp+98h] [rbp+20h]

  v53 = a4;
  v4 = *(_DWORD *)(BugCheckParameter2 + 164);
  v5 = a4;
  if ( (v4 & 1) != 0 )
    return 3221225506LL;
  if ( (v4 & 2) == 0 || a4 == 2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) == 0 && a2 >= 0 )
    {
      v9 = *(_DWORD *)(BugCheckParameter2 + 136);
      v10 = (unsigned int)(a2 + a3 - 1) >> 9;
      if ( v9 <= 1 )
      {
        v12 = (unsigned int)a2 >> 9;
      }
      else
      {
        v11 = ~(v9 - 1);
        v12 = ((unsigned int)a2 >> 9) & v11;
        v10 = (v11 & (v9 + v10)) - 1;
      }
      v13 = (v12 + 8) & 0xFFFFFFF8;
      v14 = ((v10 + 16) & 0xFFFFFFF8) - 9;
      v15 = v13 - 8;
      if ( !v13 )
        v15 = 0;
      v16 = *(_DWORD *)(BugCheckParameter2 + 280) >> 9;
      v17 = v14 < v16;
      v51 = v15;
      v18 = v16 - 1;
      v19 = v15;
      if ( v17 )
        v18 = v14;
      v20 = 0;
      if ( v15 <= v18 )
      {
        do
        {
          if ( !_bittest64(*(const signed __int64 **)(BugCheckParameter2 + 96), v19) )
            ++v20;
          ++v19;
        }
        while ( v19 <= v18 );
        if ( v20 )
        {
          LOWORD(v52) = 0;
          HvpGetBinContextInitialize(&v52);
          v23 = v18 - v22;
          if ( (v24 & 0x11) != 0 )
          {
            LOBYTE(v25) = 1;
          }
          else
          {
            v33 = v22 << 9;
            v34 = (v23 + 1) << 9;
            while ( v34 )
            {
              CellMap = HvpGetCellMap(BugCheckParameter2, v33);
              if ( !CellMap )
                KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v33, 0x445uLL);
              if ( (*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
              {
                FreeBin = HvpMapEntryGetFreeBin(CellMap);
                if ( FreeBin )
                  v38 = v33 - *(_DWORD *)(FreeBin + 20);
                else
                  v38 = *v37;
                v39 = HvpGetCellMap(BugCheckParameter2, v33 - v38);
                v42 = v34;
                if ( v34 >= *(_DWORD *)(v39 + 16) - v41 )
                  v42 = *(_DWORD *)(v39 + 16) - v41;
                if ( HvpMapEntryIsPoolBacked(v40) )
                {
                  BinAddress = HvpMapEntryGetBinAddress(v43, v45, &v52, v44);
                  HvpMapEntryReleaseBinAddress(v47, BinAddress, &v52);
                  v25 = (int)HvpProtectBinPartial(BugCheckParameter2, v48, v49, v50, v42, 1) >= 0;
                  if ( !v25 )
                    goto LABEL_47;
                }
                else if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0
                       && (int)HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 224, v33, v42) < 0 )
                {
                  v5 = v53;
                  v22 = v51;
                  LOBYTE(v25) = 0;
                  goto LABEL_22;
                }
                v34 -= v42;
                v33 += v42;
              }
              else
              {
                v33 += 4096;
                v34 -= 4096;
              }
            }
            LOBYTE(v25) = 1;
LABEL_47:
            v5 = v53;
            v22 = v51;
          }
LABEL_22:
          if ( !v25 )
            return 3221225853LL;
          v26 = *(_DWORD *)(BugCheckParameter2 + 104);
          *(_DWORD *)(BugCheckParameter2 + 104) = v26 + v20;
          RtlSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88), v22, v23 + 1);
          for ( i = *(_DWORD *)(BugCheckParameter2 + 2960); ; i = v29 )
          {
            v28 = 0;
            if ( i + 1 < *(_DWORD *)(BugCheckParameter2 + 2964) )
              v28 = i + 1;
            v29 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 2960), v28, i);
            if ( i == v29 )
              break;
          }
          v30 = 9LL * i;
          *(_QWORD *)(BugCheckParameter2 + 8 * v30 + 2968) = KeGetCurrentThread();
          *(_DWORD *)(BugCheckParameter2 + 8 * v30 + 2976) = 0;
          *(_DWORD *)(BugCheckParameter2 + 8 * v30 + 2980) = a2;
          *(_DWORD *)(BugCheckParameter2 + 8 * v30 + 2984) = a3;
          RtlCaptureStackBackTrace(1u, 6u, (PVOID *)(BugCheckParameter2 + 2992 + 72LL * i), 0LL);
          CmpLogHiveDirtyEvent(BugCheckParameter2, v5);
          if ( !v26 )
          {
            v31 = MEMORY[0xFFFFF780000003B0];
            v32 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
            *(_QWORD *)(BugCheckParameter2 + 4144) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
            CmpIssueNewDirtyCallback(v31, v32, 0xFFFFF780000003B0uLL, 0xFFFFF78000000008uLL);
          }
          if ( (int)(v20 + _InterlockedExchangeAdd(&CmpDirtySectorCount, v20)) >= 0x8000 )
            CmpForceFlushForCoalescing();
        }
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 2) == 0 )
      {
        v52 = *(_QWORD *)(BugCheckParameter2 + 4144) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
        CmpArmLazyWriter(0, (unsigned __int64 *)&v52, 0);
      }
    }
    return 0LL;
  }
  return 3221225865LL;
}
