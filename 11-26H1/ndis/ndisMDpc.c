/*
 * XREFs of ndisMDpc @ 0x1400DC554
 * Callers:
 *     ndis5InterruptDpc @ 0x1400DC410 (ndis5InterruptDpc.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1400DC4B0 (ndis5QueuedMiniportDpcWorkItem.c)
 * Callees:
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14001BD40 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400437C0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1400756A0 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A02B0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMDpc(__int64 a1, __int64 a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx
  __int64 Clock; // r14
  void (__fastcall *v5)(void *); // r15
  char v6; // bp
  KSPIN_LOCK *p_Lock; // rsi
  PKINTERRUPT *p_InterruptObject; // rcx
  KSYNCHRONIZE_ROUTINE *EnableInterruptHandler; // rdx
  __int64 v10; // rax

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)(a2 + 104);
  Clock = 0LL;
  v5 = *(void (__fastcall **)(void *))(a2 + 32);
  if ( HIBYTE(dword_14011EFA0) )
  {
    v6 = 1;
    ndisTraceDpcStart(v2, 1);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v6 = 0;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(v2);
  if ( *(_BYTE *)(a2 + 8) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
    p_Lock = &v2->Lock;
  }
  else
  {
    while ( v2->LockAcquired )
    {
      v2->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&v2->Lock);
      KeStallExecutionProcessor(1u);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(v2);
    }
    v2->LockAcquired = 1;
    p_Lock = &v2->Lock;
    v2->LockThread = KeGetCurrentThread();
    v2->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&v2->Lock);
    v5(v2->MiniportAdapterContext);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(v2);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF) == 1 && *(_BYTE *)(a2 + 8) )
      KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
    p_InterruptObject = &v2->Interrupt->InterruptObject;
    if ( p_InterruptObject )
    {
      EnableInterruptHandler = (KSYNCHRONIZE_ROUTINE *)v2->EnableInterruptHandler;
      if ( EnableInterruptHandler )
        KeSynchronizeExecution(*p_InterruptObject, EnableInterruptHandler, v2->MiniportAdapterContext);
    }
    ndisMProcessDeferred(v2);
    v2->LockAcquired = 0;
    v2->LockThread = 0LL;
  }
  v2->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(p_Lock);
  if ( v6 )
  {
    v10 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v2, 1, v10 - Clock);
  }
}
