/*
 * XREFs of ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140178D10
 * Callers:
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140157D40 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1400077C0 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140024850 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_DqqZZ @ 0x1400635C0 (WPP_RECORDER_SF_DqqZZ.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14009C1A0 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x140155470 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x140155860 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1401564C0 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z @ 0x140164C30 (-ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z.c)
 */

void __fastcall ndisPauseFilterInner(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  struct _NDIS_FILTER_BLOCK *v3; // rcx
  KIRQL v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // r9
  int v9; // eax
  struct NDISWATCHDOG__ *v10; // rbx
  struct _NDIS_FILTER_BLOCK *v11; // rcx
  KIRQL v12; // r8
  int v13; // [rsp+20h] [rbp-A8h]
  int v14; // [rsp+28h] [rbp-A0h]
  struct NDISWATCHDOG__ *v15; // [rsp+50h] [rbp-78h] BYREF
  __int128 v16; // [rsp+58h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-60h] BYREF
  struct _NDIS_FILTER_PAUSE_PARAMETERS v18; // [rsp+80h] [rbp-48h] BYREF

  Miniport = a1->Miniport;
  v16 = 0LL;
  memset(&Event, 0, sizeof(Event));
  *(_QWORD *)&v18.Header.Type = 0LL;
  v18.PauseReason = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      10,
      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
      (char)a1);
  if ( a1->State == NdisFilterRunning )
  {
    KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = KeGetCurrentThread();
    FILTER_CLEAR_ALL_STATE_FLAGS(a1);
    FILTER_SET_FLAG(v3, 2);
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DqqZZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        v6,
        v7,
        v13,
        v14,
        (char)Miniport,
        (char)a1,
        &a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName.Length,
        &Miniport->pAdapterInstanceName->Length);
    a1->State = NdisFilterPausing;
    if ( (byte_14011D043 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        5,
        1,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    FilterDriver = a1->FilterDriver;
    a1->AsyncOpContext = (_FILTER_PAUSE_RESTART_CONTEXT *)&v16;
    v18.Header = (_NDIS_OBJECT_HEADER)786842;
    v18.PauseReason = 1;
    ndisMakeWatchdog(
      &v15,
      (__int64)a1,
      17,
      (__int64)FilterDriver->DefaultFilterCharacteristics.PauseHandler,
      ndisWatchdogPnPTimeout,
      0LL);
    v9 = ndisFInvokePause(a1, &v18);
    v10 = v15;
    if ( v9 == 259 )
      ndisWaitForEventThenDisarmWatchdog(v15, &Event);
    if ( v10 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(v10);
    a1->AsyncOpContext = 0LL;
    KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = KeGetCurrentThread();
    FILTER_CLEAR_ALL_STATE_FLAGS(a1);
    FILTER_SET_FLAG(v11, 4);
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v12);
    a1->State = NdisFilterPaused;
    if ( (byte_14011D043 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        2,
        2,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      12,
      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
      (char)a1);
}
