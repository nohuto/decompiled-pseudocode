/*
 * XREFs of ?ndisMediaDisconnectTimeout@@YAXPEAX000@Z @ 0x1400AB340
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400437C0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMediaDisconnectTimeout(
        PVOID SystemSpecific1,
        struct _NDIS_MINIPORT_BLOCK *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  unsigned int PnPFlags; // eax
  KSPIN_LOCK *p_Lock; // rcx
  int v7; // edx
  int v8; // edx
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  char v10; // [rsp+28h] [rbp-10h]

  v4 = FunctionContext;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = (char)FunctionContext;
    LOBYTE(FunctionContext) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)FunctionContext,
      14,
      23,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      v10);
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(v4);
  PnPFlags = v4->PnPFlags;
  p_Lock = &v4->Lock;
  v4->MiniportThread = 0LL;
  if ( (PnPFlags & 8) != 0 )
  {
    v4->PnPFlags = PnPFlags & 0xFFFFFFF7;
    KeReleaseSpinLockFromDpcLevel(p_Lock);
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 40LL, 1769423950LL);
    if ( Pool2 )
    {
      v4->PnPFlags |= 0x400u;
      Pool2->WorkerRoutine = ndisMediaDisconnectWorker;
      Pool2->Parameter = Pool2;
      Pool2->List.Flink = 0LL;
      Pool2[1].List.Flink = (_LIST_ENTRY *)v4;
      ExQueueWorkItem(Pool2, (WORK_QUEUE_TYPE)40);
    }
    else
    {
      ndisDereferenceMiniport(v4, 0xBu);
    }
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel(p_Lock);
    ndisDereferenceMiniport(v4, 0xBu);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      14,
      24,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)v4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      14,
      25,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)v4);
  }
}
