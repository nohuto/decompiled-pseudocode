/*
 * XREFs of MiReleaseFaultState @ 0x14038FB40
 * Callers:
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MiTradeForPageTablePage @ 0x14033D4EC (MiTradeForPageTablePage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038D338 (MiWaitForCollidedFaultComplete.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiInPagePageTable @ 0x1403A69D0 (MiInPagePageTable.c)
 *     MiFaultGetFileExtents @ 0x14050664C (MiFaultGetFileExtents.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiKernelWriteToExecutableMemory @ 0x14070424C (MiKernelWriteToExecutableMemory.c)
 *     MiSoftFaultClusterTradeReleaseLocks @ 0x14071747C (MiSoftFaultClusterTradeReleaseLocks.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiAddWorkingSetEntries @ 0x1402CDB00 (MiAddWorkingSetEntries.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1402FDB40 (MiCheckProcessShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1404F5510 (MiDeleteDeferredCloneDescriptors.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     FirstEntrySList @ 0x140735850 (FirstEntrySList.c)
 */

__int64 __fastcall MiReleaseFaultState(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // rsi
  _BYTE *v6; // rdi
  char v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  struct _KPRCB *CurrentPrcb; // rdx
  char v13; // cl
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  volatile signed __int32 *v18; // rcx
  unsigned __int64 v19; // rdx
  int v20; // ebx
  __int64 *v21; // r14
  int v22; // r12d
  _DWORD *v23; // r14
  __int64 v24; // rbp
  volatile LONG *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // r8
  _KPROCESS *Process; // rbx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)a1;
  v6 = (_BYTE *)a3;
  if ( v4 )
  {
    if ( *(_WORD *)(a1 + 10) )
    {
      v9 = *(_BYTE *)(a1 + 13) & 2;
      v10 = ((unsigned __int64)*(unsigned __int16 *)(a1 + 8) << 12) + (v4 << 25 >> 16 << 25 >> 16);
      if ( v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v9 |= 5u;
      }
      else if ( (*(_DWORD *)(v5 + 184) & 0xF) == 0 )
      {
        v9 |= 4u;
      }
      MiAddWorkingSetEntries(v5, v10, *(unsigned __int16 *)(a1 + 10), v9);
      *(_WORD *)(a1 + 10) = 0;
    }
    v11 = *(_QWORD *)(a1 + 16);
    if ( v11 == 0xFFFFF6FB7DBEDF68uLL )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = *(_DWORD *)(v5 + 184) & 0xF;
      if ( v13 )
      {
        if ( v13 == 7 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
        }
        else
        {
          v14 = 3LL;
          if ( v13 == 5 )
            v14 = 0LL;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v14]);
        }
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[2]);
      }
    }
    else
    {
      a3 = 0xFFFFF6FB7DBED000uLL;
      a4 = 0xFFFFF6FB7DBEDFFFuLL;
      if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0
        || v11 < 0xFFFFF6FB7DBED000uLL
        || v11 > 0xFFFFF6FB7DBEDFFFuLL
        || (v15 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
      {
        if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 && v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v19 = 2 * (unsigned int)((__int64)(v11 + 0x90482413000LL) >> 3);
          _InterlockedAnd(
            (volatile signed __int32 *)&stru_140E2DAB0.PriorityFloorCounts[4 * (v19 >> 5) + 4],
            ~(2 << (v19 & 0x1F)) & ~(1 << (v19 & 0x1F)));
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v11, 0xCFFFFFFFFFFFFFFFuLL);
        }
      }
      else
      {
        v16 = (v11 >> 3) & 0x1FF;
        v17 = *(_DWORD *)(v15 + 4 * v16);
        v18 = (volatile signed __int32 *)(v15 + 4 * v16);
        if ( (v17 & 0x3FFFFFFF) != 0 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd(v18, 0xBFFFFFFF);
            _InterlockedDecrement(v18);
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v18, retaddr);
          }
        }
        else
        {
          if ( v17 >= 0 )
            KeBugCheckEx(0x10u, (ULONG_PTR)v18, 0x100uLL, 0LL, 0LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            *v18 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v18, retaddr);
        }
      }
    }
    *(_BYTE *)(a1 + 13) |= 4u;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( v6 )
    *v6 = *(_BYTE *)(a1 + 12);
  else
    a2 = *(_BYTE *)(a1 + 12);
  if ( (*(_BYTE *)(a1 + 13) & 1) == 0 )
    goto LABEL_67;
  v20 = *(_DWORD *)(v5 + 184);
  v21 = &qword_140E37980;
  if ( (v20 & 0xF) != 1 )
    v21 = (__int64 *)(v5 + 192);
  v22 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000;
  MiCheckProcessShadow(v5, 2u, a3, a4);
  v23 = (_DWORD *)*v21;
  v24 = 3LL;
  v25 = v23 + 16;
  do
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v25);
    v25 += 16;
    --v24;
  }
  while ( v24 );
  if ( a2 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v23 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v23, retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v23 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v23, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
    __writecr8(a2);
  }
  if ( (v20 & 0xF) == 0 )
  {
    if ( *(_QWORD *)(v5 + 16) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[2].ActiveProcessors != (volatile _KAFFINITY_EX *)-896LL )
      {
        if ( FirstEntrySList((PSLIST_HEADER)&Process[2].ActiveProcessors[4].StaticBitmap[19]) )
          MiDeleteDeferredCloneDescriptors((ULONG_PTR)Process);
      }
    }
  }
  if ( !v22 && (unsigned __int16)*(_DWORD *)(v5 + 188) )
  {
    if ( a2 == 17 )
      MiLockWorkingSetSharedAtDpc(v5);
    else
      MiLockWorkingSetShared(v5, v26, v27);
LABEL_67:
    MiUnlockWorkingSetShared(v5, a2);
  }
  return v4;
}
