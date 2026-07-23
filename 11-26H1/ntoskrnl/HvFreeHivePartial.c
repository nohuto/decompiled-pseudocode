/*
 * XREFs of HvFreeHivePartial @ 0x1408BE014
 * Callers:
 *     HvpTruncateBins @ 0x1408BEFE0 (HvpTruncateBins.c)
 *     HvpPerformLogFileRecovery @ 0x140AEE1B4 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HvpViewMapShrinkStorage @ 0x140862EC8 (HvpViewMapShrinkStorage.c)
 *     HvpFreeBin @ 0x1408BDE7C (HvpFreeBin.c)
 *     HvpFreeMap @ 0x1408BDF90 (HvpFreeMap.c)
 *     HvpMapEntryGetFreeBin @ 0x1408BF5C0 (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryIsPoolBacked @ 0x1408BF824 (HvpMapEntryIsPoolBacked.c)
 *     CmpReleaseGlobalQuota @ 0x1408CEAE4 (CmpReleaseGlobalQuota.c)
 *     HvpAdjustHiveFreeDisplay @ 0x140A88570 (HvpAdjustHiveFreeDisplay.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x140AFCC90 (CmpUpdateSystemHiveHysteresis.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 */

__int64 __fastcall HvFreeHivePartial(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  __int64 v5; // r15
  unsigned int v7; // edi
  __int64 result; // rax
  int v9; // esi
  unsigned int v10; // r13d
  __int64 CellMap; // rax
  unsigned int v12; // r10d
  __int64 v13; // rbx
  _QWORD *FreeBin; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r10d
  unsigned int v20; // r8d
  ULONG v21; // r14d
  ULONG v22; // ebx
  int v23; // ebx
  unsigned int v24; // [rsp+68h] [rbp+10h]

  v5 = 632LL * (int)a3;
  v7 = a2;
  result = *(unsigned int *)(v5 + BugCheckParameter2 + 280);
  v24 = result;
  if ( a2 != (_DWORD)result )
  {
    v9 = a3 << 31;
    do
    {
      v10 = v7;
      CellMap = HvpGetCellMap(BugCheckParameter2, v9 + v7);
      v13 = CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v12, 0x165uLL);
      FreeBin = (_QWORD *)HvpMapEntryGetFreeBin(CellMap);
      v15 = (__int64)FreeBin;
      if ( FreeBin )
      {
        v16 = *FreeBin;
        if ( *(_QWORD **)(*FreeBin + 8LL) != FreeBin || (v17 = (_QWORD *)FreeBin[1], *v17 != v15) )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        guard_dispatch_icall_no_overrides(v15, 24LL);
      }
      if ( (unsigned __int8)HvpMapEntryIsPoolBacked(v13) )
        HvpFreeBin(BugCheckParameter2, *(_DWORD *)(v13 + 16), *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
      else
        CmpReleaseGlobalQuota(*(unsigned int *)(v13 + 16));
      v7 += *(_DWORD *)(v13 + 16);
      do
      {
        v18 = HvpGetCellMap(BugCheckParameter2, v9 + v10);
        if ( !v18 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v19, 0x19EuLL);
        v10 += 4096;
        *(_OWORD *)v18 = 0LL;
        *(_QWORD *)(v18 + 16) = 0LL;
      }
      while ( v10 < v7 );
    }
    while ( v7 < v24 );
    if ( a2 )
      v20 = (a2 - 1) >> 21;
    else
      v20 = -1;
    HvpFreeMap(
      BugCheckParameter2,
      *(_QWORD *)(v5 + BugCheckParameter2 + 288),
      v20 + 1,
      (unsigned int)((*(_DWORD *)(v5 + BugCheckParameter2 + 280) >> 12) - 1) >> 9);
    if ( !a3 )
    {
      CmpUpdateSystemHiveHysteresis(
        BugCheckParameter2,
        a2 & 0x7FFFFFFF,
        *(unsigned int *)(v5 + BugCheckParameter2 + 280));
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 && a2 < *(_DWORD *)(BugCheckParameter2 + 232) - 4096 )
        HvpViewMapShrinkStorage(BugCheckParameter2 + 224, a2 & 0x7FFFFFFF);
    }
    *(_DWORD *)(v5 + BugCheckParameter2 + 280) = a2 & 0x7FFFFFFF;
    if ( !a3 )
    {
      v21 = a2 >> 9;
      v22 = *(_DWORD *)(BugCheckParameter2 + 88) - v21;
      RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 88), v21, v22);
      RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 112), v21, v22);
      *(_QWORD *)(BugCheckParameter2 + 96) = *(_QWORD *)(BugCheckParameter2 + 96);
      *(_DWORD *)(BugCheckParameter2 + 88) = v21;
      *(_QWORD *)(BugCheckParameter2 + 120) = *(_QWORD *)(BugCheckParameter2 + 120);
      *(_DWORD *)(BugCheckParameter2 + 112) = v21;
      v23 = *(_DWORD *)(BugCheckParameter2 + 104);
      *(_DWORD *)(BugCheckParameter2 + 104) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
      *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
      _InterlockedAdd(&CmpDirtySectorCount, *(_DWORD *)(BugCheckParameter2 + 104) - v23);
    }
    return HvpAdjustHiveFreeDisplay(BugCheckParameter2, *(unsigned int *)(v5 + BugCheckParameter2 + 280), a3);
  }
  return result;
}
