/*
 * XREFs of ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140177930
 * Callers:
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1401572B0 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 * Callees:
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1400077C0 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140024850 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x14004A920 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x14005AC10 (WPP_RECORDER_SF_qqZZ.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14009C1A0 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisFInvokeRestart@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_RESTART_PARAMETERS@@@Z @ 0x140166440 (-ndisFInvokeRestart@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_RESTART_PARAMETERS@@@Z.c)
 */

__int64 __fastcall ndisRestartFilterInner(struct _NDIS_FILTER_BLOCK *a1, struct NDIS_RESTART_INFORMATION *a2)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  struct NDIS_RESTART_INFORMATION *v3; // rsi
  KIRQL v5; // al
  struct _NDIS_FILTER_BLOCK *v6; // rcx
  KIRQL v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  _NDIS_FILTER_BLOCK *LowerFilter; // rcx
  unsigned int v11; // edi
  struct _NDIS_FILTER_BLOCK *v12; // rcx
  KIRQL v13; // r8
  _NDIS_MINIPORT_BLOCK *v15; // rcx
  struct _NDIS_FILTER_BLOCK *v16; // rcx
  KIRQL v17; // dl
  char v18[8]; // [rsp+30h] [rbp-49h]
  __int128 v19; // [rsp+50h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-19h] BYREF
  struct _NDIS_FILTER_RESTART_PARAMETERS v21; // [rsp+78h] [rbp-1h] BYREF
  unsigned __int8 v22; // [rsp+E0h] [rbp+67h] BYREF

  Miniport = a1->Miniport;
  *((_DWORD *)&v21.MiniportPhysicalMediaType + 1) = 0;
  *(&v21.LowerIfIndex + 1) = 0;
  v3 = a2;
  *(_QWORD *)&v21.Flags = 0LL;
  v19 = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      15,
      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
      (char)a1);
  }
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->LockThread = KeGetCurrentThread();
  v22 = v5;
  FILTER_CLEAR_ALL_STATE_FLAGS(a1);
  FILTER_SET_FLAG(v6, 32);
  a1->LockThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v7);
  a1->State = NdisFilterRestarting;
  if ( (byte_14011D043 & 1) != 0 )
    McTemplateK0juqjzzz_EtwWriteTransfer(
      (__int64)&a1->Miniport->InterfaceGuid,
      (__int64)a1->FilterInstanceName.__ptr_.__value_,
      (__int64)&a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      3,
      3,
      (__int64)&a1->Miniport->InterfaceGuid,
      a1->Miniport->pAdapterInstanceName->Buffer,
      a1->FilterInstanceName.__ptr_.__value_->Buffer,
      a1->FilterFriendlyName->Buffer);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  LowerFilter = a1->LowerFilter;
  a1->AsyncOpContext = (_FILTER_PAUSE_RESTART_CONTEXT *)&v19;
  v21.Header = (_NDIS_OBJECT_HEADER)3146139;
  v21.RestartAttributes = &v3->Attributes;
  if ( LowerFilter )
  {
    v21.MiniportMediaType = LowerFilter->MediaType;
    v21.MiniportPhysicalMediaType = LowerFilter->PhysicalMediaType;
    v21.LowerIfIndex = LowerFilter->IfIndex;
    v21.LowerIfNetLuid.Value = LowerFilter->IfBlock->NetLuid.Value;
  }
  else
  {
    v15 = a1->Miniport;
    v21.MiniportMediaType = v15->MiniportMediaType;
    v21.MiniportPhysicalMediaType = v15->MiniportPhysicalMediumType;
    v21.LowerIfIndex = v15->IfIndex;
    v21.LowerIfNetLuid.Value = v15->NetLuid.Value;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      v9,
      0x10u,
      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
      (char)Miniport,
      (char)a1,
      &a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName.Length,
      &Miniport->pAdapterInstanceName->Length);
  v11 = ndisFInvokeRestart(a1, &v21);
  if ( v11 == 259 )
  {
    ndisWaitForKernelObject(&Event);
    v11 = DWORD2(v19);
  }
  a1->AsyncOpContext = 0LL;
  if ( v11 )
  {
    a1->State = NdisFilterPaused;
    if ( (byte_14011D043 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        2,
        4,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &v22);
    FILTER_CLEAR_ALL_STATE_FLAGS(a1);
    FILTER_SET_FLAG(v16, 4);
    v17 = v22;
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v17);
  }
  else
  {
    a1->IfBlock->AccessType = v3->General.AccessType;
    a1->IfBlock->ConnectionType = v3->General.ConnectionType;
    a1->IfBlock->ifMtu = v3->General.MtuSize;
    KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = KeGetCurrentThread();
    FILTER_CLEAR_ALL_STATE_FLAGS(a1);
    FILTER_SET_FLAG(v12, 16);
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v13);
    a1->State = NdisFilterRunning;
    if ( (byte_14011D043 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        4,
        5,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v18 = v11;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x11u,
      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
      (char)a1,
      *(_QWORD *)v18);
  }
  return v11;
}
