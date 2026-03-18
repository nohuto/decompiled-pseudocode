/*
 * XREFs of MiGetNextPageTable @ 0x140318050
 * Callers:
 *     MiWalkVaRange @ 0x1402D3560 (MiWalkVaRange.c)
 *     MiCloneVad @ 0x14030A8F8 (MiCloneVad.c)
 *     MiComputePageCommitment @ 0x140311CE0 (MiComputePageCommitment.c)
 *     MiMakeHyperRangeAccessible @ 0x140316870 (MiMakeHyperRangeAccessible.c)
 *     MiSplitPrivatePage @ 0x1403173FC (MiSplitPrivatePage.c)
 *     MiWalkPtesForWriteWatchState @ 0x1403178F8 (MiWalkPtesForWriteWatchState.c)
 *     MiIsCfgBitMapPageShared @ 0x140317EC0 (MiIsCfgBitMapPageShared.c)
 *     NtLockVirtualMemory @ 0x140318600 (NtLockVirtualMemory.c)
 *     MiMoveDirtyBitsToPfns @ 0x140319470 (MiMoveDirtyBitsToPfns.c)
 *     MiDecommitLockNewPageTable @ 0x1403615D8 (MiDecommitLockNewPageTable.c)
 *     MiFlushDirtyBitsToPfn @ 0x14045C544 (MiFlushDirtyBitsToPfn.c)
 *     MiCloneCaptureVadCommit @ 0x1404D9798 (MiCloneCaptureVadCommit.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406E3E20 (MiCheckCommitReleaseFromVad.c)
 *     MiGetNextNonGapPfnPage @ 0x1406E9108 (MiGetNextNonGapPfnPage.c)
 *     MiQueryVaPhysicalContiguity @ 0x1407004D4 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14070B50C (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiFastLockLeafPageTable @ 0x1402ED250 (MiFastLockLeafPageTable.c)
 *     MiWalkPageTables @ 0x140326A80 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MiGetNextPageTable(__int64 a1, __int64 a2, char a3, char a4, _DWORD *a5)
{
  __int64 v9; // rdx
  ULONG_PTR v10; // rbx
  __int64 v11; // rbp
  unsigned __int64 i; // rax
  int v13; // edx
  struct _LIST_ENTRY **p_Blink; // rdi
  int v15; // eax
  int v16; // r8d
  __int64 v17; // rdx
  __int64 result; // rax
  __int128 v19; // [rsp+20h] [rbp-E8h] BYREF
  int v20; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-D4h]
  char v22; // [rsp+39h] [rbp-CFh]
  struct _LIST_ENTRY **v23; // [rsp+50h] [rbp-B8h]
  ULONG_PTR v24; // [rsp+58h] [rbp-B0h]
  __int64 v25; // [rsp+60h] [rbp-A8h]
  __int64 (__fastcall *v26)(); // [rsp+E0h] [rbp-28h]
  __int128 *v27; // [rsp+E8h] [rbp-20h]

  v19 = 0LL;
  memset_0(&v20, 0, 0xC0uLL);
  v9 = 4145LL;
  v10 = a1 << 25 >> 16;
  v11 = a2 << 25 >> 16;
  if ( (a4 & 1) != 0 )
    v9 = 4209LL;
  v20 = v9;
  if ( (a4 & 2) != 0 )
  {
    LODWORD(v9) = v9 | 0x100;
    v20 = v9;
  }
  for ( i = v10; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
  {
    if ( i > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  if ( i < 0xFFFF800000000000uLL || i >= qword_140E2DE40 && i <= qword_140E2DE50 )
  {
    v13 = v20;
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  }
  else
  {
    p_Blink = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(2LL, v9);
  }
  if ( (a4 & 4) != 0 || (v20 = v13 | 4, (v15 = MiFastLockLeafPageTable((signed __int64)p_Blink, v10, 0)) == 0) )
  {
    v17 = *((_QWORD *)&v19 + 1);
    v16 = v19;
  }
  else
  {
    v16 = v15 - 1;
    LODWORD(v19) = v15 - 1;
    v17 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v19 + 1) = v17;
  }
  if ( v17 )
  {
    result = v17;
    *a5 = v16;
  }
  else
  {
    v23 = p_Blink;
    v27 = &v19;
    v22 = a3;
    v24 = v10;
    v21 = v21 & 0xFFFFFE3F | 0x40;
    v26 = MiGetNextPageTableTail;
    v25 = v11;
    MiWalkPageTables(&v20);
    *a5 = v19;
    return *((_QWORD *)&v19 + 1);
  }
  return result;
}
