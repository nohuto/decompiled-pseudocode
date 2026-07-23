/*
 * XREFs of KiSaveExtendedAndSupervisorState @ 0x1403D7100
 * Callers:
 *     KeSaveExtendedProcessorState @ 0x1403D7090 (KeSaveExtendedProcessorState.c)
 *     KeSaveExtendedAndSupervisorState @ 0x140508024 (KeSaveExtendedAndSupervisorState.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     RtlXSaveS @ 0x1403D757C (RtlXSaveS.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall KiSaveExtendedAndSupervisorState(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v8; // r8
  unsigned __int8 v9; // r12
  __int64 SparePtr; // rcx
  ULONG_PTR v11; // rsi
  unsigned int *v12; // rdi
  unsigned int v13; // edi
  _GENERAL_LOOKASIDE *P; // r13
  _DWORD *Pool2; // rcx
  struct _KPRCB *v16; // r13
  unsigned __int64 v17; // rcx
  ULONG_PTR v21; // r8
  int v22; // r8d
  struct _KPRCB *CurrentPrcb; // rdi
  struct _KPRCB *v24; // [rsp+78h] [rbp+20h]
  _GENERAL_LOOKASIDE *L; // [rsp+78h] [rbp+20h]

  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, CurrentIrql, 0LL, 0LL);
  v8 = KeFeatureBits & 0x800000;
  if ( (_DWORD)v8 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      if ( (~(KeEnabledSupervisorXStateFeatures | MEMORY[0xFFFFF780000003D8]) & BugCheckParameter3) == 0 )
        goto LABEL_10;
LABEL_38:
      KeBugCheckEx(0x131u, 0LL, v8, (unsigned int)BugCheckParameter3, HIDWORD(BugCheckParameter3));
    }
    if ( (~MEMORY[0xFFFFF780000003D8] & BugCheckParameter3) != 0 )
      goto LABEL_38;
  }
  else if ( (BugCheckParameter3 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    goto LABEL_38;
  }
  if ( !CurrentIrql && (CurrentThread->ApcState.InProgressFlags & 1) == 0 )
  {
    v9 = 0;
    goto LABEL_11;
  }
LABEL_10:
  v9 = CurrentIrql + 1;
LABEL_11:
  SparePtr = (__int64)CurrentThread->WaitBlock[1].SparePtr;
  v11 = (MEMORY[0xFFFFF780000003D8] | BugCheckParameter3) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( SparePtr )
  {
    a2 = *(unsigned __int8 *)(SparePtr + 16);
    if ( (unsigned __int8)a2 > v9 )
      KeBugCheckEx(0x131u, 2uLL, *(unsigned __int8 *)(SparePtr + 16), v9, 0LL);
    v21 = *(_QWORD *)(SparePtr + 8);
    if ( (struct _KTHREAD *)v21 != CurrentThread )
      KeBugCheckEx(0x131u, 3uLL, v21, (ULONG_PTR)CurrentThread, 0LL);
  }
  if ( !v11 )
  {
    *(_DWORD *)(v4 + 32) = 0;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_QWORD *)(v4 + 40) = 0LL;
LABEL_25:
    *(_QWORD *)(v4 + 8) = CurrentThread;
    *(_BYTE *)(v4 + 16) = v9;
    *(_QWORD *)(v4 + 24) = v11;
    if ( !CurrentIrql )
      --CurrentThread->SpecialApcDisable;
    *(_QWORD *)v4 = CurrentThread->WaitBlock[1].SparePtr;
    if ( !v11 )
      goto LABEL_32;
    goto LABEL_28;
  }
  if ( CurrentIrql >= 2u && (!SparePtr || *(_BYTE *)(SparePtr + 16) != v9) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    memset_0(&CurrentPrcb->ExtendedState->Header, 0, sizeof(CurrentPrcb->ExtendedState->Header));
    *(_DWORD *)(v4 + 32) = KeXStateLength;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_QWORD *)(v4 + 40) = CurrentPrcb->ExtendedState;
    *(_QWORD *)(v4 + 8) = CurrentThread;
    *(_BYTE *)(v4 + 16) = v9;
    *(_QWORD *)(v4 + 24) = v11;
    *(_QWORD *)v4 = CurrentThread->WaitBlock[1].SparePtr;
LABEL_28:
    if ( (KeFeatureBits & 0x800000) != 0 )
    {
      if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)(v4 + 40) + 520LL) = v11;
        RtlXSaveS(*(_QWORD *)(v4 + 40), v11);
        CurrentThread->WaitBlock[1].SparePtr = (PVOID)v4;
        CurrentThread->LastXStateSaveDebugInfo = v4 & 0xFFFFF | (a3 << 20);
        return 0LL;
      }
      _R9 = *(_DWORD **)(v4 + 40);
      a2 = HIDWORD(v11);
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
        __asm { xsavec  byte ptr [r9] }
      }
      else if ( (v11 & 6) == 4 )
      {
        v22 = _R9[6];
        SparePtr = (unsigned int)_R9[7];
        _xsave(_R9, v11);
        _R9[6] = v22;
        _R9[7] = SparePtr;
      }
      else
      {
        _xsave(_R9, v11);
      }
    }
LABEL_32:
    CurrentThread->WaitBlock[1].SparePtr = (PVOID)v4;
    CurrentThread->LastXStateSaveDebugInfo = v4 & 0xFFFFF | (a3 << 20);
    if ( !CurrentIrql
      && CurrentThread->SpecialApcDisable++ == -1
      && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(SparePtr, a2);
    }
    return 0LL;
  }
  if ( CurrentIrql != 2 || (v12 = (unsigned int *)0xFFFFF78000000600LL, (MEMORY[0xFFFFF780000003EC] & 2) == 0) )
    v12 = (unsigned int *)0xFFFFF780000003E8LL;
  v13 = *v12;
  *(_BYTE *)(v4 + 36) = 0;
  if ( v13 < 0x240 )
    v13 = 576;
  if ( v13 == MEMORY[0xFFFFF780000003E8] )
  {
    v24 = KeGetCurrentPrcb();
    P = v24->PPLookasideList[9].P;
    ++P->TotalAllocates;
    Pool2 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( Pool2 )
    {
      v16 = v24;
    }
    else
    {
      ++P->AllocateMisses;
      v16 = v24;
      L = v24->PPLookasideList[9].L;
      ++L->TotalAllocates;
      Pool2 = RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( !Pool2 )
      {
        ++L->AllocateMisses;
        Pool2 = (_DWORD *)guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size);
        if ( !Pool2 )
          goto LABEL_22;
      }
    }
    *Pool2 = v16->Number;
LABEL_22:
    *(_BYTE *)(v4 + 36) |= 1u;
    goto LABEL_23;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(0x42uLL);
LABEL_23:
  *(_QWORD *)(v4 + 48) = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(v4 + 32) = v13;
    v17 = ((unsigned __int64)Pool2 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
    *(_QWORD *)(v4 + 40) = v17;
    memset_0((void *)(v17 + 512), 0, 0x40uLL);
    goto LABEL_25;
  }
  return 3221225495LL;
}
