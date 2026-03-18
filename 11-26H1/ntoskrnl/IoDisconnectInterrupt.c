/*
 * XREFs of IoDisconnectInterrupt @ 0x140A986C0
 * Callers:
 *     DifIoDisconnectInterruptWrapper @ 0x14065BBB0 (DifIoDisconnectInterruptWrapper.c)
 *     IopConnectLineBasedInterrupt @ 0x140A97D7C (IopConnectLineBasedInterrupt.c)
 *     IoDisconnectInterruptEx @ 0x140A97F80 (IoDisconnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x140A990F0 (IopConnectMessageBasedInterrupt.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeRemoveQueueDpc @ 0x140423350 (KeRemoveQueueDpc.c)
 *     KeDisconnectInterrupt @ 0x140423CA0 (KeDisconnectInterrupt.c)
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 *     KeFreeInterrupt @ 0x1404D4B34 (KeFreeInterrupt.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1407A3BB8 (IopDestroyPassiveInterruptBlock.c)
 *     IopDestroyActiveConnectBlock @ 0x140A98D4C (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x140A98EA4 (IopInitializeActiveConnectBlock.c)
 *     PnpTraceInterruptConnection @ 0x140A98FBC (PnpTraceInterruptConnection.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __stdcall IoDisconnectInterrupt(PKINTERRUPT InterruptObject)
{
  __int64 v2; // rdx
  PVOID v3; // rcx
  char v4; // bp
  struct _KTHREAD *CurrentThread; // rax
  PSLIST_ENTRY *p_InternalState; // rsi
  __int64 v7; // rdx
  int *v8; // r8
  struct _KTHREAD *v9; // rax
  ULONG_PTR v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  struct _KTHREAD *v14; // r10
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
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  if ( LOBYTE(InterruptObject[1].Type) )
  {
    v14 = KeGetCurrentThread();
    LOBYTE(v7) = 0;
    if ( v4 <= 0 )
      goto LABEL_22;
    v8 = &InterruptObject[1].InternalState;
    v15 = (unsigned __int8)v4;
    do
    {
      v16 = *(_QWORD *)v8;
      v8 += 2;
      v7 = (unsigned __int8)v7;
      if ( *(struct _KTHREAD **)(v16 + 152) == v14 )
        v7 = 1LL;
      --v15;
    }
    while ( v15 );
    if ( !(_BYTE)v7 )
LABEL_22:
      KeWaitForSingleObject(&InterruptObject[1].InterruptListEntry, Executive, 0, 0, 0LL);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, (__int64)v8);
  v10 = *(_QWORD *)&InterruptObject[1].Number;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 312);
    v12 = *(_QWORD *)(v11 + 40);
    if ( !v12 || (*(_DWORD *)(v12 + 396) & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock(*(_QWORD *)&InterruptObject[1].Number, (PVOID)*(unsigned __int16 *)(v10 + 2));
      v17 = *(_QWORD *)(v10 + 8);
      if ( v17 )
      {
        IoAddTriageDumpDataBlock(v17, (PVOID)(unsigned int)*(__int16 *)(v17 + 2));
        v18 = (_WORD *)(*(_QWORD *)(v10 + 8) + 56LL);
        if ( *v18 )
        {
          IoAddTriageDumpDataBlock((ULONG)v18, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v10 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v10 + 8) + 56LL));
        }
      }
      v19 = *(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL);
      if ( v19 )
      {
        v20 = (unsigned __int16 *)(v19 + 40);
        IoAddTriageDumpDataBlock(v19, (PVOID)0x388);
        if ( *v20 )
        {
          IoAddTriageDumpDataBlock((ULONG)v20, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v20 + 1), (PVOID)*v20);
        }
        v21 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL) + 56LL);
        if ( *v21 )
        {
          IoAddTriageDumpDataBlock((ULONG)v21, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL) + 56LL));
        }
        v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL) + 16LL);
        if ( v22 && *(_WORD *)(v22 + 56) )
        {
          IoAddTriageDumpDataBlock(v22 + 56, (PVOID)2);
          v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v23 + 64), (PVOID)*(unsigned __int16 *)(v23 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v10, 0LL, 0LL);
    }
    _InterlockedAdd((volatile signed __int32 *)(v11 + 96), 0xFFFFFFFF);
    *(_QWORD *)&InterruptObject[1].Number = 0LL;
    ObfDereferenceObjectWithTag((PVOID)v10, 0x54706E50u);
  }
  if ( v4 > 0 )
  {
    v13 = (unsigned __int8)v4;
    do
    {
      KeFreeInterrupt(*p_InternalState);
      *p_InternalState++ = 0LL;
      --v13;
    }
    while ( v13 );
  }
  IopDestroyActiveConnectBlock(v24);
  ExFreePoolWithTag(&InterruptObject[-1].IsrDpcStats, 0);
  PnpTraceInterruptConnection(0LL);
}
