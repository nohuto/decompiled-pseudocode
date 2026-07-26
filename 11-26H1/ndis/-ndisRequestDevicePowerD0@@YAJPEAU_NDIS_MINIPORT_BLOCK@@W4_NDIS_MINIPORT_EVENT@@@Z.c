/*
 * XREFs of ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140047EA0
 * Callers:
 *     ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1400460E0 (-ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1400463F0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140046620 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1400AAF30 (-ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ?ndisMediaDisconnectComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1400AB1D0 (-ndisMediaDisconnectComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ?ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B9364 (-ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C63CC (-ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x140006B10 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140007140 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x140007740 (McTemplateK0jqx_EtwWriteTransfer.c)
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x140048D80 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14008DF80 (-ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 */

__int64 __fastcall ndisRequestDevicePowerD0(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_MINIPORT_EVENT a2)
{
  KIRQL v4; // al
  KIRQL v5; // bp
  unsigned int SyncFlags; // ecx
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // esi
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v12; // dl
  PKSPIN_LOCK v13; // rcx
  PVOID Context; // [rsp+20h] [rbp-28h]

  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v5 = v4;
  SyncFlags = a1->SyncFlags;
  a1->MiniportThread = KeGetCurrentThread();
  if ( (SyncFlags & 2) != 0 )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v4);
    return 259LL;
  }
  else
  {
    a1->LastD0Reason = a2;
    a1->SyncFlags = SyncFlags | 2;
    KeClearEvent(&a1->PowerD0CompleteEvent);
    v8 = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v5);
    ndisLogMiniportEvent(a1, a2);
    if ( (byte_14011D043 & 4) != 0 )
    {
      LODWORD(Context) = a1->IfIndex;
      McTemplateK0jqx_EtwWriteTransfer(
        v9,
        (__int64)&DevicePowerOnRequested,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)Context,
        a1->NetLuid.Value);
    }
    _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 2u);
    if ( (a1->Flags & 0x80u) != 0 )
    {
      v10 = 0;
    }
    else
    {
      v10 = PoRequestPowerIrp(a1->PhysicalDeviceObject, 2u, (POWER_STATE)1, 0LL, 0LL, 0LL);
      if ( v10 != 259 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xEu,
            0x94u,
            (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
            v10,
            a1);
        ndisScheduleD0CompleteSignalWorkItem(a1, v10);
      }
    }
    AoAc = a1->AoAc;
    if ( AoAc )
    {
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
      if ( *((_BYTE *)AoAc + 1081) )
        v8 = MEMORY[0xFFFFF78000000008];
      *((_QWORD *)AoAc + 105) = v8;
      ndisAoAcStartRefTimeStats(AoAc);
      KeReleaseSpinLock(v13, v12);
    }
    return v10;
  }
}
