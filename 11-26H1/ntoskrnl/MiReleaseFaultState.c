/*
 * XREFs of MiReleaseFaultState @ 0x14038DD90
 * Callers:
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     MiTradeForPageTablePage @ 0x14033B46C (MiTradeForPageTablePage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038B588 (MiWaitForCollidedFaultComplete.c)
 *     MiIssueHardFault @ 0x14038D350 (MiIssueHardFault.c)
 *     MmAccessFault @ 0x1403A2390 (MmAccessFault.c)
 *     MiUserFault @ 0x1403A3140 (MiUserFault.c)
 *     MiInPagePageTable @ 0x1403A4C70 (MiInPagePageTable.c)
 *     MiFaultGetFileExtents @ 0x14050CBDC (MiFaultGetFileExtents.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     MiKernelWriteToExecutableMemory @ 0x1406FF57C (MiKernelWriteToExecutableMemory.c)
 *     MiSoftFaultClusterTradeReleaseLocks @ 0x140712784 (MiSoftFaultClusterTradeReleaseLocks.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiCheckProcessShadow @ 0x1402B2E70 (MiCheckProcessShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiAddWorkingSetEntries @ 0x1402EBAC0 (MiAddWorkingSetEntries.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1403654E4 (MiLockWorkingSetSharedAtDpc.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1404FBFC4 (MiDeleteDeferredCloneDescriptors.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     FirstEntrySList @ 0x140730C80 (FirstEntrySList.c)
 */

__int64 __fastcall MiReleaseFaultState(__int64 a1, unsigned __int8 a2, _BYTE *a3)
{
  __int64 v3; // r13
  __int64 v4; // rsi
  char v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  struct _KPRCB *CurrentPrcb; // rdx
  char v12; // cl
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  volatile signed __int32 *v17; // rcx
  unsigned __int64 v18; // rdx
  int v19; // ebx
  __int64 *v20; // r14
  int v21; // r12d
  _DWORD *v22; // r14
  __int64 v23; // rbp
  volatile LONG *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8
  _KPROCESS *Process; // rbx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)a1;
  if ( v3 )
  {
    if ( *(_WORD *)(a1 + 10) )
    {
      v8 = *(_BYTE *)(a1 + 13) & 2;
      v9 = ((unsigned __int64)*(unsigned __int16 *)(a1 + 8) << 12) + (v3 << 25 >> 16 << 25 >> 16);
      if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v8 |= 5u;
      }
      else if ( (*(_DWORD *)(v4 + 184) & 0xF) == 0 )
      {
        v8 |= 4u;
      }
      MiAddWorkingSetEntries(v4, v9, *(unsigned __int16 *)(a1 + 10), v8);
      *(_WORD *)(a1 + 10) = 0;
    }
    v10 = *(_QWORD *)(a1 + 16);
    if ( v10 == 0xFFFFF6FB7DBEDF68uLL )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = *(_DWORD *)(v4 + 184) & 0xF;
      if ( v12 )
      {
        if ( v12 == 7 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
        }
        else
        {
          v13 = 3LL;
          if ( v12 == 5 )
            v13 = 0LL;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v13]);
        }
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[2]);
      }
    }
    else if ( (*(_DWORD *)(v4 + 184) & 0xF) != 0
           || v10 < 0xFFFFF6FB7DBED000uLL
           || v10 > 0xFFFFF6FB7DBEDFFFuLL
           || (v14 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
    {
      if ( (*(_DWORD *)(v4 + 184) & 0xF) != 0 && v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v18 = 2 * (unsigned int)((__int64)(v10 + 0x90482413000LL) >> 3);
        _InterlockedAnd(
          (volatile signed __int32 *)&stru_140E2D930.PriorityFloorCounts[4 * (v18 >> 5) + 4],
          ~(2 << (v18 & 0x1F)) & ~(1 << (v18 & 0x1F)));
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)v10, 0xCFFFFFFFFFFFFFFFuLL);
      }
    }
    else
    {
      v15 = (v10 >> 3) & 0x1FF;
      v16 = *(_DWORD *)(v14 + 4 * v15);
      v17 = (volatile signed __int32 *)(v14 + 4 * v15);
      if ( (v16 & 0x3FFFFFFF) != 0 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        {
          _InterlockedAnd(v17, 0xBFFFFFFF);
          _InterlockedDecrement(v17);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v17, retaddr);
        }
      }
      else
      {
        if ( v16 >= 0 )
          KeBugCheckEx(0x10u, (ULONG_PTR)v17, 0x100uLL, 0LL, 0LL);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          *v17 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v17, retaddr);
      }
    }
    *(_BYTE *)(a1 + 13) |= 4u;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( a3 )
    *a3 = *(_BYTE *)(a1 + 12);
  else
    a2 = *(_BYTE *)(a1 + 12);
  if ( (*(_BYTE *)(a1 + 13) & 1) == 0 )
    goto LABEL_67;
  v19 = *(_DWORD *)(v4 + 184);
  v20 = &qword_140E37800;
  if ( (v19 & 0xF) != 1 )
    v20 = (__int64 *)(v4 + 192);
  v21 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000;
  MiCheckProcessShadow(v4, 2u);
  v22 = (_DWORD *)*v20;
  v23 = 3LL;
  v24 = v22 + 16;
  do
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v24);
    v24 += 16;
    --v23;
  }
  while ( v23 );
  if ( a2 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      *v22 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v22, retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      *v22 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v22, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
    __writecr8(a2);
  }
  if ( (v19 & 0xF) == 0 )
  {
    if ( *(_QWORD *)(v4 + 16) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[2].ActiveProcessors != (volatile _KAFFINITY_EX *)-896LL )
      {
        if ( FirstEntrySList((PSLIST_HEADER)&Process[2].ActiveProcessors[4].StaticBitmap[19]) )
          MiDeleteDeferredCloneDescriptors((ULONG_PTR)Process);
      }
    }
  }
  if ( !v21 && (unsigned __int16)*(_DWORD *)(v4 + 188) )
  {
    if ( a2 == 17 )
      MiLockWorkingSetSharedAtDpc(v4);
    else
      MiLockWorkingSetShared(v4, v25, v26);
LABEL_67:
    MiUnlockWorkingSetShared(v4, a2);
  }
  return v3;
}
