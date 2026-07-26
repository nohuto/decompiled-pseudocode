/*
 * XREFs of ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1400069D0
 * Callers:
 *     ?ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140005C30 (-ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@.c)
 *     NdisMIdleNotificationCompleteEx @ 0x14006E2D0 (NdisMIdleNotificationCompleteEx.c)
 * Callees:
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1400070C0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x140007740 (McTemplateK0jqx_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qZ @ 0x14000D3F0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

void __fastcall ndisAoAcScheduleWakeWorkItem(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_MINIPORT_EVENT a2)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v5; // bp
  int v6; // edx
  __int64 v7; // rcx

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  if ( !*((_BYTE *)AoAc + 288) && ndisReferenceMiniport(a1, MPREF_AOAC_REFWAKE) )
  {
    *((_BYTE *)AoAc + 288) = 1;
    *((_WORD *)AoAc + 145) = a2;
    if ( a2 == NdisMEventD0_AoAcWake )
      *((_DWORD *)AoAc + 97) |= 1u;
    if ( (byte_14011D043 & 4) != 0 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))McTemplateK0jqx_EtwWriteTransfer)(
        v7,
        &DeviceWaitWakeComplete,
        &a1->InterfaceGuid,
        &a1->InterfaceGuid,
        a1->IfIndex,
        (_NET_LUID_LH)a1->NetLuid.Value);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        9,
        35,
        (struct _GUID *)&WPP_64b491f4d22c35747c5821aad1f382d9_Traceguids,
        (char)a1,
        (__int64)a1->pAdapterInstanceName);
    ndisScheduleWorkItemInternal((struct _NDIS_WORK_ITEM *)((char *)AoAc + 296));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v5);
}
