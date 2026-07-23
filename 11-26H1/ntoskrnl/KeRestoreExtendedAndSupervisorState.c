/*
 * XREFs of KeRestoreExtendedAndSupervisorState @ 0x1403D60D8
 * Callers:
 *     KeRestoreExtendedProcessorState @ 0x1403D60C0 (KeRestoreExtendedProcessorState.c)
 *     DifKeRestoreExtendedProcessorStateWrapper @ 0x140667C30 (DifKeRestoreExtendedProcessorStateWrapper.c)
 *     PnprQuiesceProcessorDpc @ 0x140BF8260 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140C08EA0 (PopHandleNextState.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     KeFreeXStateContext @ 0x1403D6324 (KeFreeXStateContext.c)
 *     RtlXRestoreS @ 0x1403D7DE0 (RtlXRestoreS.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall KeRestoreExtendedAndSupervisorState(ULONG_PTR BugCheckParameter3)
{
  unsigned __int8 CurrentIrql; // r9
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 v4; // al
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rax
  ULONG_PTR SparePtr; // rax
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v12; // r11

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, CurrentIrql, 0LL, 0LL);
  if ( CurrentIrql || (CurrentThread->ApcState.InProgressFlags & 1) != 0 )
    v4 = CurrentIrql + 1;
  else
    v4 = 0;
  v5 = *(unsigned __int8 *)(BugCheckParameter3 + 16);
  if ( (_BYTE)v5 != v4 )
    KeBugCheckEx(0x131u, 4uLL, v5, v4, 0LL);
  v6 = *(_QWORD *)(BugCheckParameter3 + 8);
  if ( (struct _KTHREAD *)v6 != CurrentThread )
    KeBugCheckEx(0x131u, 3uLL, v6, (ULONG_PTR)CurrentThread, 0LL);
  if ( !CurrentIrql )
    --CurrentThread->SpecialApcDisable;
  SparePtr = (ULONG_PTR)CurrentThread->WaitBlock[1].SparePtr;
  if ( SparePtr != BugCheckParameter3 )
    KeBugCheckEx(0x131u, 7uLL, SparePtr, BugCheckParameter3, 0LL);
  v8 = *(_QWORD **)BugCheckParameter3;
  CurrentThread->WaitBlock[1].SparePtr = *(PVOID *)BugCheckParameter3;
  v9 = *(_QWORD *)(BugCheckParameter3 + 24);
  v10 = KeFeatureBits & 0x800000;
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      LOBYTE(v8) = (~(KeEnabledSupervisorXStateFeatures | MEMORY[0xFFFFF780000003D8]) & v9) != 0;
    }
    else
    {
      if ( (~MEMORY[0xFFFFF780000003D8] & v9) != 0 )
        goto LABEL_16;
      LOBYTE(v8) = 0;
    }
    v11 = (_BYTE)v8 == 0;
  }
  else
  {
    v11 = (v9 & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  }
  if ( !v11 )
LABEL_16:
    KeBugCheckEx(0x131u, 0LL, KeFeatureBits & 0x800000, (unsigned int)v9, HIDWORD(v9));
  if ( v9 && (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      LOBYTE(v8) = RtlXRestoreS(*(_QWORD *)(BugCheckParameter3 + 40));
      goto LABEL_22;
    }
    v12 = *(_QWORD *)(BugCheckParameter3 + 40);
    if ( *(__int64 *)(v12 + 520) >= 0 && (v9 & 6) == 4 )
    {
      v10 = *(unsigned int *)(v12 + 24);
      *(_DWORD *)(v12 + 24) = _mm_getcsr();
      v8 = (_QWORD *)v9;
      v9 >>= 32;
      _xrstor((void *)v12, (unsigned __int64)v8);
      *(_DWORD *)(v12 + 24) = v10;
    }
    else
    {
      v8 = *(_QWORD **)(BugCheckParameter3 + 24);
      v9 >>= 32;
      _xrstor((void *)v12, (unsigned __int64)v8);
    }
  }
  if ( !CurrentIrql )
  {
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 )
    {
      v8 = &CurrentThread->152;
      if ( (_QWORD *)*v8 != v8 )
        LOBYTE(v8) = KiCheckForKernelApcDelivery(v10, v9);
    }
  }
LABEL_22:
  if ( *(_QWORD *)(BugCheckParameter3 + 48) )
    LOBYTE(v8) = KeFreeXStateContext(BugCheckParameter3 + 24);
  return (char)v8;
}
