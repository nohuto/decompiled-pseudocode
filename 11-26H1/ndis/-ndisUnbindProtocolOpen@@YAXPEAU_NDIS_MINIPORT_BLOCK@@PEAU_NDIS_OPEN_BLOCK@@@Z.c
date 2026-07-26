/*
 * XREFs of ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140186160
 * Callers:
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x140166840 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001A8C0 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1400513F0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140058130 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x14005B870 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x14005C6F0 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x14008EEA0 (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x140155470 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z @ 0x1401557E0 (-ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1401564C0 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140156F10 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140156F50 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisInvokeUnbindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_BIND_CONTEXT@@@Z @ 0x1401674F0 (-ndisInvokeUnbindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_BIND_CONT.c)
 *     NdisCloseAdapter @ 0x140176E20 (NdisCloseAdapter.c)
 */

void __fastcall ndisUnbindProtocolOpen(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rsi
  bool v3; // r15
  struct _NDIS_OPEN_BLOCK *v4; // rdi
  KIRQL v6; // al
  KIRQL v7; // r13
  _KEVENT *WaitNetPnpEvent; // rbx
  bool v9; // zf
  struct NDISWATCHDOG__ *ArmedWatchdog; // rbx
  void *ProtocolBindingContext; // rdx
  __int64 v12; // rcx
  int v13; // edx
  int v14; // edx
  int v15; // r9d
  char v16; // [rsp+28h] [rbp-D8h]
  struct _KEVENT v17; // [rsp+30h] [rbp-D0h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-B8h] BYREF
  struct _KEVENT v19; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v20[5]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v21; // [rsp+D0h] [rbp-30h]
  struct _KEVENT v22[4]; // [rsp+E0h] [rbp-20h] BYREF
  bool v23; // [rsp+150h] [rbp+50h]
  int v24; // [rsp+158h] [rbp+58h] BYREF

  ProtocolHandle = a2->ProtocolHandle;
  v24 = 0;
  memset(v20, 0, sizeof(v20));
  v3 = 0;
  v4 = a2;
  v21 = 0LL;
  memset(v22, 0, 48);
  memset(&Event, 0, sizeof(Event));
  memset(&v19, 0, sizeof(v19));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      14,
      (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
      v16);
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v23 = ndisReferenceProtocol(ProtocolHandle, 6u);
  WAIT_FOR_PROTO_MUTEX(ProtocolHandle);
  v6 = KeAcquireSpinLockRaiseToDpc(&ProtocolHandle->Ref.SpinLock);
  KeReleaseSpinLock(&ProtocolHandle->Ref.SpinLock, v6);
  v7 = KeAcquireSpinLockRaiseToDpc(&v4->SpinLock);
  v4->OpenFlags |= 0x10000u;
  if ( (v4->OpenFlags & 0x10) != 0 )
  {
    KeInitializeEvent(&v19, NotificationEvent, 0);
    v4->WaitNetPnpEvent = &v19;
  }
  WaitNetPnpEvent = v4->WaitNetPnpEvent;
  if ( v4->ProtocolHandle->MajorNdisVersion < 6u )
    v3 = (v4->OpenFlags & 0x40000000) != 0;
  v4->CloseCompleteEvent = &Event;
  KeReleaseSpinLock(&v4->SpinLock, v7);
  if ( WaitNetPnpEvent )
    ndisWaitForKernelObject(WaitNetPnpEvent);
  if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x20000) != 0 )
  {
    memset(&v17, 0, sizeof(v17));
    KeInitializeEvent(&v17, NotificationEvent, 0);
    v9 = v4->PendingAfNotifications == 0;
    v4->AfNotifyCompleteEvent = &v17;
    if ( !v9 )
      ndisWaitForKernelObject(&v17);
    v4->AfNotifyCompleteEvent = 0LL;
  }
  KeInitializeEvent(v22, NotificationEvent, 0);
  a1->ProcessingOpen = v4;
  ArmedWatchdog = (struct NDISWATCHDOG__ *)-1LL;
  if ( v3 )
  {
    DWORD2(v21) = 0;
    v4->UnsolicitedUnbindEvent = v22;
    v4->PendingLegacyUnbind = 1;
    NdisCloseAdapter(&v24, (__int64)v4);
  }
  else if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    ProtocolBindingContext = v4->ProtocolBindingContext;
    v4->PendingLegacyUnbind = 1;
    ProtocolHandle->UnbindAdapterHandler(&v24, ProtocolBindingContext, v20);
  }
  else
  {
    ArmedWatchdog = ndisAllocateArmedWatchdog(
                      v4,
                      4u,
                      ProtocolHandle->UnbindAdapterHandlerEx,
                      ndisWatchdogPnPTimeout,
                      0LL);
    v24 = ndisInvokeUnbindAdapter(ProtocolHandle, v4, (struct _NDIS_BIND_CONTEXT *)v20);
  }
  if ( v24 == 259 )
  {
    ndisWaitForEventThenDisarmWatchdog(ArmedWatchdog, v22);
    v24 = DWORD2(v21);
  }
  a1->ProcessingOpen = 0LL;
  if ( ArmedWatchdog != (struct NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(ArmedWatchdog);
  ndisNotifyWmiBindUnbind(a1, ProtocolHandle, 0);
  if ( !MiniportSupportsReceiveThrottle(a1) )
  {
    if ( ProtocolHandle->IsIPv4 )
    {
      v13 = 3;
LABEL_28:
      ndisBindUnbindPeriodicReceives(v12, v13);
      goto LABEL_29;
    }
    if ( ProtocolHandle->IsIPv6 || ProtocolHandle->IsNdisTest6 )
    {
      v13 = 4;
      goto LABEL_28;
    }
  }
LABEL_29:
  ndisWaitForKernelObject(&Event);
  RELEASE_PROT_MUTEX(ProtocolHandle);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( v23 )
    ndisDereferenceProtocol(ProtocolHandle, 0, 6u, v15);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      6,
      15,
      (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids);
  }
}
