/*
 * XREFs of MiGetNextPageTable @ 0x14031A080
 * Callers:
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 *     MiCloneVad @ 0x1402EC978 (MiCloneVad.c)
 *     MiComputePageCommitment @ 0x140313D10 (MiComputePageCommitment.c)
 *     MiMakeHyperRangeAccessible @ 0x1403188A0 (MiMakeHyperRangeAccessible.c)
 *     MiSplitPrivatePage @ 0x14031942C (MiSplitPrivatePage.c)
 *     MiWalkPtesForWriteWatchState @ 0x140319928 (MiWalkPtesForWriteWatchState.c)
 *     MiIsCfgBitMapPageShared @ 0x140319EF0 (MiIsCfgBitMapPageShared.c)
 *     NtLockVirtualMemory @ 0x14031A630 (NtLockVirtualMemory.c)
 *     MiMoveDirtyBitsToPfns @ 0x14031B4A0 (MiMoveDirtyBitsToPfns.c)
 *     MiDecommitLockNewPageTable @ 0x140363378 (MiDecommitLockNewPageTable.c)
 *     MiFlushDirtyBitsToPfn @ 0x1404560EC (MiFlushDirtyBitsToPfn.c)
 *     MiCloneCaptureVadCommit @ 0x1404D2E78 (MiCloneCaptureVadCommit.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406E8AD0 (MiCheckCommitReleaseFromVad.c)
 *     MiGetNextNonGapPfnPage @ 0x1406EDDA8 (MiGetNextNonGapPfnPage.c)
 *     MiQueryVaPhysicalContiguity @ 0x1407051A4 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1407101BC (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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
  if ( i < 0xFFFF800000000000uLL || i >= qword_140E2DFC0 && i <= qword_140E2DFD0 )
  {
    v13 = v20;
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  }
  else
  {
    p_Blink = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(2LL, v9);
  }
  if ( (a4 & 4) != 0 || (v20 = v13 | 4, (v15 = MiFastLockLeafPageTable((__int64)p_Blink, v10, 0)) == 0) )
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
