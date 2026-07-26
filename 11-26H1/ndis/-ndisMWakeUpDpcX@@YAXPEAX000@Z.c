/*
 * XREFs of ?ndisMWakeUpDpcX@@YAXPEAX000@Z @ 0x14007ABE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14001BD40 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140057C30 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1400756A0 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     Feature_CFHCancelTimerFix__private_IsEnabledDeviceUsageNoInline @ 0x140092D98 (Feature_CFHCancelTimerFix__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall ndisMWakeUpDpcX(
        PVOID SystemSpecific1,
        struct _NDIS_MINIPORT_BLOCK *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  char v4; // bp
  char v6; // di
  __int64 Clock; // r15
  char v8; // r14
  WORK_QUEUE_TYPE v9; // edx
  __int64 v10; // rax

  v4 = 0;
  v6 = 1;
  Clock = 0LL;
  if ( HIBYTE(dword_14011EFA0) )
  {
    v8 = 1;
    ndisTraceDpcStart(FunctionContext, 4);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v8 = 0;
  }
  KeAcquireSpinLockAtDpcLevel(&FunctionContext->Lock);
  if ( (FunctionContext->Flags & 0x80000000) != 0 || (FunctionContext->PnPFlags & 0x20080000) != 0 )
  {
    FunctionContext->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
  }
  else
  {
    FunctionContext->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
    if ( (unsigned __int8)ndisReferenceMiniport(FunctionContext, 0x53u) )
    {
      if ( _InterlockedCompareExchange(&FunctionContext->CFHWorkItemQueued, 1, 0) )
      {
        ndisDereferenceMiniport(FunctionContext, 0x53u);
        v6 = 0;
      }
      else
      {
        if ( FunctionContext->MajorNdisVersion > 6u
          || FunctionContext->MajorNdisVersion == 6 && FunctionContext->MinorNdisVersion >= 0x50u )
        {
          v9 = CustomPriorityWorkQueue|NormalWorkQueue;
        }
        else
        {
          v9 = CustomPriorityWorkQueue|RealTimeWorkQueue|0x8;
        }
        ExQueueWorkItem(&FunctionContext->CFHWorkItem, v9);
        v6 = 0;
      }
    }
    else
    {
      v4 = 1;
    }
  }
  if ( (unsigned int)Feature_CFHCancelTimerFix__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v6 && !v4 )
      goto LABEL_32;
    KeAcquireSpinLockAtDpcLevel(&FunctionContext->Lock);
    FunctionContext->MiniportThread = KeGetCurrentThread();
    if ( v6 )
      KeSetEvent(&FunctionContext->CFHCompletedEvent, 0, 0);
    if ( !v4 )
      goto LABEL_31;
    goto LABEL_28;
  }
  if ( v6 )
    KeSetEvent(&FunctionContext->CFHCompletedEvent, 0, 0);
  if ( v4 )
  {
    KeAcquireSpinLockAtDpcLevel(&FunctionContext->Lock);
    FunctionContext->MiniportThread = KeGetCurrentThread();
LABEL_28:
    if ( (FunctionContext->Flags & 0x80000000) == 0 && (FunctionContext->PnPFlags & 0x20080000) == 0 )
      ndisSetWakeUpTimer(FunctionContext);
LABEL_31:
    FunctionContext->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
  }
LABEL_32:
  if ( v8 )
  {
    v10 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(FunctionContext, 4, v10 - Clock);
  }
}
