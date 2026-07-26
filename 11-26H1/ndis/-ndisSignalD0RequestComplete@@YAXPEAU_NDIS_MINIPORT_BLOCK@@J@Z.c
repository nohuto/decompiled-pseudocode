/*
 * XREFs of ?ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140045170
 * Callers:
 *     ndisWdfDevicePowerOn @ 0x140082F10 (ndisWdfDevicePowerOn.c)
 *     ?ndisSignalD0CompleteWorkItem@@YAXPEAU_NDIS_D0_SIGNAL_WORK_ITEM@@PEAX@Z @ 0x1400ABA40 (-ndisSignalD0CompleteWorkItem@@YAXPEAU_NDIS_D0_SIGNAL_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z @ 0x1400C6C20 (-ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1401847E0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400452E0 (-ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140045330 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 */

void __fastcall ndisSignalD0RequestComplete(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  KIRQL v4; // al
  int LastD0Reason; // esi
  __int64 v6; // rcx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rdi
  __int64 v8; // rbx
  ULONGLONG v9; // kr00_8
  unsigned __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  LastD0Reason = (unsigned __int16)a1->LastD0Reason;
  a1->SyncFlags &= ~2u;
  a1->LastD0Reason = NdisMEvent_Unknown;
  a1->MiniportThread = 0LL;
  a1->LastD0CompleteStatus = a2;
  KeReleaseSpinLock(&a1->Lock, v4);
  if ( (byte_14011D043 & 4) != 0 )
  {
    LODWORD(v12) = a2;
    LODWORD(v11) = a1->IfIndex;
    McTemplateK0jqxd_EtwWriteTransfer(
      v6,
      (__int64)&DevicePowerOnComplete,
      (__int64)&a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      v11,
      a1->NetLuid.Value,
      v12);
  }
  if ( LastD0Reason == 5 )
  {
    if ( !a2 )
      ndisPowerSaveClearStop(a1, 6LL);
  }
  else if ( LastD0Reason == 6 || LastD0Reason == 7 || LastD0Reason == 20 )
  {
    ndisNicActiveRequestComplete(a1, a2);
  }
  KeSetEvent(&a1->PowerD0CompleteEvent, 0, 0);
  AoAc = a1->AoAc;
  if ( AoAc )
  {
    ++*((_DWORD *)AoAc + 272);
    v8 = *((_QWORD *)AoAc + 137);
    v9 = KeQueryUnbiasedInterruptTime() + 5000 - v8;
    v10 = *((_QWORD *)AoAc + 139);
    *((_QWORD *)AoAc + 138) = v9 / 0x2710;
    if ( v10 <= v9 / 0x2710 )
      v10 = v9 / 0x2710;
    *((_QWORD *)AoAc + 140) += v9 / 0x2710;
    *((_QWORD *)AoAc + 139) = v10;
  }
}
