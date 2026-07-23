/*
 * XREFs of MiPurgePartitionStandby @ 0x140461F1C
 * Callers:
 *     MiTrimAllSystemPagableMemory @ 0x14044EF98 (MiTrimAllSystemPagableMemory.c)
 *     MiPartitionTrimmedEnough @ 0x1404BB97C (MiPartitionTrimmedEnough.c)
 *     MiMirrorPurgePartitionPages @ 0x1406F4AD0 (MiMirrorPurgePartitionPages.c)
 *     MmPerformMemoryListCommand @ 0x140C12670 (MmPerformMemoryListCommand.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402DC490 (MiRemoveLowestPriorityStandbyPage.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDetermineNewPfnHeatState @ 0x1404911B4 (MiDetermineNewPfnHeatState.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiPurgePartitionStandby(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // esi
  __int64 v5; // rbp
  unsigned int v7; // eax
  __int64 v8; // r13
  unsigned __int8 CurrentIrql; // bl
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG_PTR v12; // rax
  ULONG_PTR v13; // r14
  __int64 v14; // rdi
  unsigned int v15; // esi
  unsigned int v17; // eax
  unsigned int v18; // [rsp+68h] [rbp+10h]

  v18 = a2;
  v4 = a4;
  v5 = 0LL;
  v7 = a2;
  v8 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
LABEL_13:
    v7 = v18;
  }
  while ( 1 )
  {
    v12 = MiRemoveLowestPriorityStandbyPage(v8, v7, 0x400200u);
    v13 = v12;
    if ( v12 == -1LL )
      break;
    v14 = 48 * v12 - 0x220000000000LL;
    if ( v4
      && LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 3
      && v12 < *(_QWORD *)&stru_140E2ED08.WaitBlockFill11[64]
      && _bittest64((const signed __int64 *)&stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (v12 >> 6), v12 & 0x3F) )
    {
      v17 = MiPageToNode(v12);
      MiDetermineNewPfnHeatState(0LL, 3LL, *(_QWORD *)(v8 + 16) + 56320LL * v17);
    }
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v15);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    *(_QWORD *)(v14 + 24) |= 0x4000000000000000uLL;
    MiInsertPageInFreeOrZeroedList(v13);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v5;
    if ( a3 && v5 == a3 )
      goto LABEL_28;
    v7 = v18;
    v4 = a4;
    if ( (v5 & 0x3F) == 0 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v11 = KeGetCurrentIrql();
      if ( (_BYTE)v11 != 2 )
        __writecr8(2uLL);
      v7 = v18;
      v4 = a4;
      if ( KiIrqlFlags )
      {
        LOBYTE(v10) = 2;
        KiRaiseIrqlProcessIrqlFlags(v11, v10);
        goto LABEL_13;
      }
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
LABEL_28:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v5;
}
