/*
 * XREFs of HvpSetRangeProtection @ 0x1408BF43C
 * Callers:
 *     HvpResetPageProtection @ 0x1408BF0B4 (HvpResetPageProtection.c)
 *     HvpPerformLogFileRecovery @ 0x140AEE1B4 (HvpPerformLogFileRecovery.c)
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x140B10798 (HvpApplyLogEntryDataToFileBackedHive.c)
 *     HvpAddBin @ 0x140B87980 (HvpAddBin.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HvpMapEntryGetFreeBin @ 0x1408BF5C0 (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryIsPoolBacked @ 0x1408BF824 (HvpMapEntryIsPoolBacked.c)
 *     HvpViewMapSealRange @ 0x1408BF858 (HvpViewMapSealRange.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x1408BF948 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpProtectBinPartial @ 0x1408BFB2C (HvpProtectBinPartial.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140C5E6F0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140C5E710 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140C5EAA0 (HvpGetBinContextInitialize.c)
 */

char __fastcall HvpSetRangeProtection(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        int a4)
{
  unsigned int v7; // ebx
  bool v8; // cl
  __int64 CellMap; // rax
  __int64 FreeBin; // rax
  _DWORD *v12; // rcx
  int v13; // r11d
  __int64 v14; // rax
  __int64 v15; // r10
  int v16; // r11d
  unsigned int v17; // ebp
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r10
  ULONG_PTR v21; // rcx
  __int64 BinAddress; // rax
  __int64 v23; // rcx
  int v24; // edx
  int v25; // r8d
  int v26; // r11d
  BOOL v27; // eax
  __int16 v28; // [rsp+50h] [rbp+8h] BYREF

  v28 = 0;
  v7 = BugCheckParameter3;
  HvpGetBinContextInitialize(&v28);
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x11) == 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !a3 )
          return 1;
        CellMap = HvpGetCellMap(BugCheckParameter2, v7);
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x445uLL);
        if ( (*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
          break;
        v7 += 4096;
        a3 -= 4096;
      }
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      v13 = FreeBin ? v7 - *(_DWORD *)(FreeBin + 20) : *v12;
      v14 = HvpGetCellMap(BugCheckParameter2, v7 - v13);
      v17 = a3;
      if ( a3 >= *(_DWORD *)(v14 + 16) - v16 )
        v17 = *(_DWORD *)(v14 + 16) - v16;
      if ( (unsigned __int8)HvpMapEntryIsPoolBacked(v15) )
        break;
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) == 0 )
        goto LABEL_15;
      v21 = BugCheckParameter2 + 224;
      if ( a4 == 2 )
      {
        HvpViewMapSealRange(v21, v7, v17);
        goto LABEL_15;
      }
      if ( (int)HvpViewMapCOWAndUnsealRange(v21, v7, v17) < 0 )
      {
        v8 = 0;
LABEL_19:
        if ( a4 == 4 )
          return v8;
      }
LABEL_15:
      a3 -= v17;
      v7 += v17;
    }
    BinAddress = HvpMapEntryGetBinAddress(v18, v20, &v28, v19);
    HvpMapEntryReleaseBinAddress(v23, BinAddress, &v28);
    v27 = (int)HvpProtectBinPartial(BugCheckParameter2, v24, v25, v26, v17, a4 == 4) >= 0;
    v8 = v27;
    if ( v27 )
      goto LABEL_15;
    goto LABEL_19;
  }
  return 1;
}
