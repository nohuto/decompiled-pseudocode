/*
 * XREFs of ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x140092B40
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14001BD40 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400437C0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140057C30 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1400756A0 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x14007FE50 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A02B0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMWakeUpDpc(
        PVOID SystemSpecific1,
        struct _NDIS_MINIPORT_BLOCK *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  unsigned __int8 v5; // bp
  __int64 Clock; // r15
  char v7; // r14
  unsigned int *p_PnPFlags; // rdi
  unsigned int WSyncFlags; // eax
  unsigned __int16 CFHangXTicks; // cx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v12; // rdx
  char v13; // al
  __int64 v14; // rax

  v5 = 0;
  Clock = 0LL;
  if ( HIBYTE(dword_14011EFA0) )
  {
    v7 = 1;
    ndisTraceDpcStart(FunctionContext, 4);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v7 = 0;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(FunctionContext);
  p_PnPFlags = &FunctionContext->PnPFlags;
  if ( (FunctionContext->Flags & 0x80000000) == 0 && (*p_PnPFlags & 0x20080000) == 0 && !FunctionContext->LockAcquired )
  {
    FunctionContext->LockAcquired = 1;
    FunctionContext->LockThread = KeGetCurrentThread();
    if ( (FunctionContext->Flags & 0x300000) != 0 )
      goto LABEL_33;
    if ( FunctionContext->DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler )
    {
      FunctionContext->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
      v5 = FunctionContext->DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler(FunctionContext->MiniportAdapterContext);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(FunctionContext);
    }
    if ( (FunctionContext->Flags & 0x1000000) != 0 )
      goto LABEL_33;
    if ( v5 )
    {
      ++FunctionContext->MiniportResetCount;
LABEL_28:
      if ( (FunctionContext->Flags & 0x1000000) == 0
        && FunctionContext->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler )
      {
        ndisMQueueWorkItem(FunctionContext, 3, 0LL);
      }
      goto LABEL_32;
    }
    if ( (FunctionContext->Flags & 0x1000) == 0 )
    {
      WSyncFlags = FunctionContext->WSyncFlags;
      if ( (WSyncFlags & 1) != 0 )
      {
        if ( (WSyncFlags & 2) != 0 )
        {
          if ( FunctionContext->PendingOidRequest )
          {
LABEL_27:
            ++FunctionContext->InternalResetCount;
            goto LABEL_28;
          }
        }
        else
        {
          CFHangXTicks = FunctionContext->CFHangXTicks;
          if ( CFHangXTicks )
            FunctionContext->CFHangXTicks = CFHangXTicks - 1;
          else
            FunctionContext->WSyncFlags = WSyncFlags | 2;
        }
      }
    }
    if ( (FunctionContext->Flags & 0x800) != 0 )
      goto LABEL_32;
    Flink = FunctionContext->PacketList.Flink;
    v12 = Flink - 4;
    if ( Flink == &FunctionContext->PacketList )
      v12 = 0LL;
    if ( !v12 )
      goto LABEL_32;
    v13 = BYTE1(v12[2].Blink);
    if ( (v13 & 0x10) == 0 )
      goto LABEL_32;
    if ( (v13 & 1) == 0 )
    {
      BYTE1(v12[2].Blink) = v13 | 1;
LABEL_32:
      ndisMProcessDeferred(FunctionContext);
LABEL_33:
      FunctionContext->LockAcquired = 0;
      FunctionContext->LockThread = 0LL;
      goto LABEL_34;
    }
    goto LABEL_27;
  }
LABEL_34:
  KeSetEvent(&FunctionContext->CFHCompletedEvent, 0, 0);
  if ( (FunctionContext->Flags & 0x80000000) == 0 && (*p_PnPFlags & 0x20080000) == 0 )
    ndisSetWakeUpTimer(FunctionContext);
  if ( v7 )
  {
    v14 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(FunctionContext, 4, v14 - Clock);
  }
  FunctionContext->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
}
