/*
 * XREFs of NdisMSendResourcesAvailable @ 0x1400DD960
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400437C0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x14007FE50 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 */

void __fastcall NdisMSendResourcesAvailable(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      3,
      10,
      (struct _GUID *)&WPP_51ab2d8c499231d359effe6bcd859c62_Traceguids,
      (char)a1);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
  _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
  a1->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  if ( a1->FirstPendingPacket )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
    ndisMQueueWorkItem(a1, 1, 0LL);
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      3,
      11,
      (struct _GUID *)&WPP_51ab2d8c499231d359effe6bcd859c62_Traceguids,
      (char)a1);
}
