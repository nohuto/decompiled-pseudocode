/*
 * XREFs of IoDisconnectInterrupt @ 0x140A9C840
 * Callers:
 *     DifIoDisconnectInterruptWrapper @ 0x14065F790 (DifIoDisconnectInterruptWrapper.c)
 *     IopConnectLineBasedInterrupt @ 0x140A9BEFC (IopConnectLineBasedInterrupt.c)
 *     IoDisconnectInterruptEx @ 0x140A9C100 (IoDisconnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x140A9D270 (IopConnectMessageBasedInterrupt.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeRemoveQueueDpc @ 0x140430440 (KeRemoveQueueDpc.c)
 *     KeDisconnectInterrupt @ 0x140430D90 (KeDisconnectInterrupt.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KeFreeInterrupt @ 0x1404CE3A4 (KeFreeInterrupt.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1407A66F8 (IopDestroyPassiveInterruptBlock.c)
 *     IopDestroyActiveConnectBlock @ 0x140A9CECC (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x140A9D024 (IopInitializeActiveConnectBlock.c)
 *     PnpTraceInterruptConnection @ 0x140A9D13C (PnpTraceInterruptConnection.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall IoDisconnectInterrupt(PKINTERRUPT InterruptObject)
{
  __int64 v2; // rdx
  PVOID v3; // rcx
  char v4; // bp
  struct _KTHREAD *CurrentThread; // rax
  PSLIST_ENTRY *p_InternalState; // rsi
  struct _KTHREAD *v7; // rax
  ULONG_PTR v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  struct _KTHREAD *v12; // r10
  char v13; // dl
  int *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  _WORD *v18; // rcx
  __int64 v19; // rcx
  unsigned __int16 *v20; // rdi
  _WORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  _BYTE v24[24]; // [rsp+30h] [rbp-68h] BYREF
  PVOID Object; // [rsp+48h] [rbp-50h]

  memset_0(v24, 0, 0x50uLL);
  KeRemoveQueueDpc((PRKDPC)&InterruptObject[1].MessageServiceRoutine);
  IopInitializeActiveConnectBlock(&InterruptObject[-1].IsrDpcStats.IsrCount, v24);
  v3 = Object;
  v4 = __popcnt(InterruptObject[-1].IsrDpcStats.IsrTimeStart);
  if ( Object )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(v3, Executive, 0, 0, 0LL);
  }
  p_InternalState = (PSLIST_ENTRY *)&InterruptObject[1].InternalState;
  LOBYTE(v2) = v4;
  KeDisconnectInterrupt(
    (__int64 *)&InterruptObject[1].InternalState,
    v2,
    (__int64)&InterruptObject[-1].IsrDpcStats.IsrCount);
  if ( Object )
  {
    KeSetEvent((PRKEVENT)Object, 0, 0);
    KeLeaveCriticalRegion();
  }
  if ( LOBYTE(InterruptObject[1].Type) )
    IopDestroyPassiveInterruptBlock(HIDWORD(InterruptObject[-1].IsrDpcStats.DpcTime));
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  if ( LOBYTE(InterruptObject[1].Type) )
  {
    v12 = KeGetCurrentThread();
    v13 = 0;
    if ( v4 <= 0 )
      goto LABEL_22;
    v14 = &InterruptObject[1].InternalState;
    v15 = (unsigned __int8)v4;
    do
    {
      v16 = *(_QWORD *)v14;
      v14 += 2;
      if ( *(struct _KTHREAD **)(v16 + 152) == v12 )
        v13 = 1;
      --v15;
    }
    while ( v15 );
    if ( !v13 )
LABEL_22:
      KeWaitForSingleObject(&InterruptObject[1].InterruptListEntry, Executive, 0, 0, 0LL);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v8 = *(_QWORD *)&InterruptObject[1].Number;
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 312);
    v10 = *(_QWORD *)(v9 + 40);
    if ( !v10 || (*(_DWORD *)(v10 + 396) & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock(*(_QWORD *)&InterruptObject[1].Number, (PVOID)*(unsigned __int16 *)(v8 + 2));
      v17 = *(_QWORD *)(v8 + 8);
      if ( v17 )
      {
        IoAddTriageDumpDataBlock(v17, (PVOID)(unsigned int)*(__int16 *)(v17 + 2));
        v18 = (_WORD *)(*(_QWORD *)(v8 + 8) + 56LL);
        if ( *v18 )
        {
          IoAddTriageDumpDataBlock((ULONG)v18, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v8 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v8 + 8) + 56LL));
        }
      }
      v19 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
      if ( v19 )
      {
        v20 = (unsigned __int16 *)(v19 + 40);
        IoAddTriageDumpDataBlock(v19, (PVOID)0x388);
        if ( *v20 )
        {
          IoAddTriageDumpDataBlock((ULONG)v20, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v20 + 1), (PVOID)*v20);
        }
        v21 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL) + 56LL);
        if ( *v21 )
        {
          IoAddTriageDumpDataBlock((ULONG)v21, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL) + 56LL));
        }
        v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL) + 16LL);
        if ( v22 && *(_WORD *)(v22 + 56) )
        {
          IoAddTriageDumpDataBlock(v22 + 56, (PVOID)2);
          v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v23 + 64), (PVOID)*(unsigned __int16 *)(v23 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v8, 0LL, 0LL);
    }
    _InterlockedAdd((volatile signed __int32 *)(v9 + 96), 0xFFFFFFFF);
    *(_QWORD *)&InterruptObject[1].Number = 0LL;
    ObfDereferenceObjectWithTag((PVOID)v8, 0x54706E50u);
  }
  if ( v4 > 0 )
  {
    v11 = (unsigned __int8)v4;
    do
    {
      KeFreeInterrupt(*p_InternalState);
      *p_InternalState++ = 0LL;
      --v11;
    }
    while ( v11 );
  }
  IopDestroyActiveConnectBlock(v24);
  ExFreePoolWithTag(&InterruptObject[-1].IsrDpcStats, 0);
  PnpTraceInterruptConnection(0LL);
}
