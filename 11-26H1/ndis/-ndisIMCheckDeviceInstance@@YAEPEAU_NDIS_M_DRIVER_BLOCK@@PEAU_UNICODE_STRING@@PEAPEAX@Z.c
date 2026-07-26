/*
 * XREFs of ?ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z @ 0x140090250
 * Callers:
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400053C0 (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x14009B660 (NdisIMCancelInitializeDeviceInstance.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x14000D3F0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x14005AB70 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     WPP_RECORDER_SF_qZq @ 0x14009BC2C (WPP_RECORDER_SF_qZq.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140155960 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140156F10 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140156F50 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisIMCheckDeviceInstance(struct _NDIS_M_DRIVER_BLOCK *a1, struct _UNICODE_STRING *a2, wchar_t **a3)
{
  unsigned __int8 v6; // di
  _NDIS_PENDING_IM_INSTANCE **p_PendingDeviceList; // r14
  UNICODE_STRING *v8; // rbx
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // r9d
  _NDIS_PROTOCOL_BLOCK *AssociatedProtocol; // rbx
  unsigned int v13; // eax
  int v15; // [rsp+20h] [rbp-E0h]
  struct _KEVENT Event; // [rsp+40h] [rbp-C0h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v17; // [rsp+60h] [rbp-A0h] BYREF

  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      1u,
      0x33u,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      &a2->Length);
  ndisWaitForKernelObject(&a1->IMStartRemoveMutex);
  p_PendingDeviceList = &a1->PendingDeviceList;
  a1->IMStartRemoveMutexOwnerThread = KeGetCurrentThread();
  while ( 1 )
  {
    v8 = (UNICODE_STRING *)*p_PendingDeviceList;
    if ( !*p_PendingDeviceList )
      break;
    if ( RtlEqualUnicodeString(v8 + 1, a2, 1u) )
    {
      if ( a3 )
        *a3 = v8->Buffer;
      *p_PendingDeviceList = *(_NDIS_PENDING_IM_INSTANCE **)&v8->Length;
      ExFreePoolWithTag(v8, 0);
      v6 = 1;
      break;
    }
    p_PendingDeviceList = (_NDIS_PENDING_IM_INSTANCE **)v8;
  }
  a1->IMStartRemoveMutexOwnerThread = 0LL;
  KeReleaseMutex(&a1->IMStartRemoveMutex, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZq(*((_QWORD *)WPP_GLOBAL_Control + 8), v9, v10, v11, v15, (char)a1, (__int64)a2, (char)a3);
  if ( !v6 )
  {
    if ( a3 )
    {
      AssociatedProtocol = a1->AssociatedProtocol;
      if ( AssociatedProtocol )
      {
        if ( AssociatedProtocol->MajorNdisVersion >= 6u )
          goto LABEL_21;
        if ( AssociatedProtocol->PnPEventHandler )
        {
          memset(&Event, 0, sizeof(Event));
          memset(&v17, 0, 152);
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v17.Header = (_NDIS_OBJECT_HEADER)4;
          *(_QWORD *)&v17.NetPnPEvent.BufferLength = &Event;
          WAIT_FOR_PROTO_MUTEX(AssociatedProtocol);
          if ( AssociatedProtocol->PnPEventHandler(0LL, (_NET_PNP_EVENT *)&v17) == 259 )
            ndisWaitForKernelObject(&Event);
          RELEASE_PROT_MUTEX(AssociatedProtocol);
        }
        if ( AssociatedProtocol->MajorNdisVersion >= 6u )
        {
LABEL_21:
          memset(&v17, 0, sizeof(v17));
          memset(&Event, 0, sizeof(Event));
          ndisInitializeNetPnPEvent(&v17, &Event);
          v13 = a2->Length + 16;
          v17.NetPnPEvent.NetEvent = NetEventIMReEnableDevice;
          v17.NetPnPEvent.BufferLength = v13;
          v17.NetPnPEvent.Buffer = a2;
          WAIT_FOR_PROTO_MUTEX(AssociatedProtocol);
          ndisDeliverNetPnPEventSynchronously(AssociatedProtocol, 0LL, &v17);
          RELEASE_PROT_MUTEX(AssociatedProtocol);
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      1u,
      0x35u,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      &a2->Length);
  return v6;
}
