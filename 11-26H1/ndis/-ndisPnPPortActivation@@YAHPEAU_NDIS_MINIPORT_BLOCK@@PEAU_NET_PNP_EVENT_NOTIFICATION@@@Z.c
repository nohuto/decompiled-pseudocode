/*
 * XREFs of ?ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14006B110
 * Callers:
 *     NdisMNetPnPEvent @ 0x14006B000 (NdisMNetPnPEvent.c)
 * Callees:
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14000A5B0 (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14001B4C0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x14004CB00 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisRollbackPortActivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT@@1@Z @ 0x1400AABE0 (-ndisRollbackPortActivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT@@1@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x140157970 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

__int64 __fastcall ndisPnPPortActivation(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  struct _NET_PNP_EVENT_NOTIFICATION *v2; // r13
  unsigned int v3; // esi
  int v4; // ebp
  KIRQL v6; // r14
  struct _NDIS_PORT *Buffer; // rdi
  int v8; // edx
  __int64 v9; // rcx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  __int64 v13; // rcx
  unsigned int PortNumber; // edx
  _LIST_ENTRY *Flink; // rcx
  __int64 v17; // rcx
  int v18; // edx
  struct _GUID *v19; // [rsp+20h] [rbp-108h]
  __int64 v20; // [rsp+30h] [rbp-F8h]
  __int64 v21; // [rsp+38h] [rbp-F0h]
  struct _NET_PNP_EVENT_NOTIFICATION v22; // [rsp+40h] [rbp-E8h] BYREF

  v2 = a2;
  v3 = 0;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      23,
      14,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1);
  }
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  Buffer = (struct _NDIS_PORT *)v2->NetPnPEvent.Buffer;
  if ( !Buffer )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v6);
    v3 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        23,
        15,
        (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
        (char)a1);
    }
    if ( (byte_14011D043 & 0x20) == 0 )
      goto LABEL_47;
    LODWORD(v21) = 0;
    LODWORD(v20) = 0;
    goto LABEL_8;
  }
  if ( (a1->PnPFlags & 0x80u) != 0 && !Buffer->PortCharacteristics.PortNumber )
  {
    if ( Buffer->Next )
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v6);
      v3 = -1071448019;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v10,
          23,
          16,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1);
      }
      if ( (byte_14011D043 & 0x20) == 0 )
        goto LABEL_47;
      LODWORD(v21) = 0;
      LODWORD(v20) = 1;
    }
    else
    {
      if ( (a1->Flags & 0x10000) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x10000u);
        if ( (Buffer->PortCharacteristics.Flags & 1) == 0 )
        {
          a1->DefaultPortSendControlState = Buffer->PortCharacteristics.SendControlState;
          a1->DefaultPortRcvControlState = Buffer->PortCharacteristics.RcvControlState;
          a1->DefaultPortSendAuthorizationState = Buffer->PortCharacteristics.SendAuthorizationState;
          a1->DefaultPortRcvAuthorizationState = Buffer->PortCharacteristics.RcvAuthorizationState;
        }
        ndisIfSetInterfaceState(a1, 1, v6);
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v6);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v12,
            23,
            18,
            (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
            (char)a1);
        }
        if ( byte_14011D041 < 0 )
        {
          LODWORD(v20) = 65537;
          LODWORD(v19) = a1->IfIndex;
          McTemplateK0jqxd_EtwWriteTransfer(
            v13,
            (__int64)&DefaultPortActivated,
            (__int64)&a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            (__int64)v19,
            a1->NetLuid.Value,
            v20);
        }
        ndisMSetMiniportReadyForBinding(a1, 1, Reason_DefaultPortNotActive, RunAsynchronous);
        goto LABEL_47;
      }
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v6);
      v3 = -1071448018;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          23,
          17,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1);
      }
      if ( (byte_14011D043 & 0x20) == 0 )
        goto LABEL_47;
      LODWORD(v21) = 0;
      LODWORD(v20) = 2;
    }
LABEL_8:
    LODWORD(v19) = a1->IfIndex;
    McTemplateK0jqxqq_EtwWriteTransfer(
      v9,
      &PnPPortActivationFailed,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      (__int64)v19,
      a1->NetLuid.Value,
      v20,
      v21);
    goto LABEL_47;
  }
  while ( 1 )
  {
    PortNumber = Buffer->PortCharacteristics.PortNumber;
    if ( !PortNumber )
    {
      v3 = -1071448019;
      ndisRollbackPortActivation(a1, (struct _NDIS_PORT *)v2->NetPnPEvent.Buffer, Buffer);
      v4 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v18,
          23,
          19,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1);
      }
      if ( (byte_14011D043 & 0x20) == 0 )
        goto LABEL_45;
      LODWORD(v21) = 0;
      LODWORD(v20) = 1;
LABEL_54:
      LODWORD(v19) = a1->IfIndex;
      McTemplateK0jqxqq_EtwWriteTransfer(
        v17,
        &PnPPortActivationFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v19,
        a1->NetLuid.Value,
        v20,
        v21);
LABEL_55:
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v6);
      goto LABEL_47;
    }
    Flink = a1->PortList.Flink;
    if ( Flink == &a1->PortList )
    {
LABEL_33:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v20) = Buffer->PortCharacteristics.PortNumber;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x17u,
          0x14u,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1,
          v20);
      }
      if ( (byte_14011D043 & 0x20) != 0 )
      {
        LODWORD(v21) = Buffer->PortCharacteristics.PortNumber;
        LODWORD(v20) = 3;
        LODWORD(v19) = a1->IfIndex;
        McTemplateK0jqxqq_EtwWriteTransfer(
          (__int64)Flink,
          &PnPPortActivationFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v19,
          a1->NetLuid.Value,
          v20,
          v21);
      }
      v3 = -1071448019;
      ndisRollbackPortActivation(a1, (struct _NDIS_PORT *)v2->NetPnPEvent.Buffer, Buffer);
      goto LABEL_55;
    }
    while ( HIDWORD(Flink[1].Blink) != PortNumber )
    {
      if ( HIDWORD(Flink[1].Blink) <= PortNumber )
      {
        Flink = Flink->Flink;
        if ( Flink != &a1->PortList )
          continue;
      }
      goto LABEL_33;
    }
    if ( LODWORD(Flink[1].Flink) != 2 )
      break;
    ++a1->NumberOfActivePorts;
    HIDWORD(Flink[1].Flink) = Flink[1].Flink;
    Buffer->NdisReserved = Flink;
    LODWORD(Flink[1].Flink) = 4;
    *(_LIST_ENTRY *)((char *)Flink + 24) = *(_LIST_ENTRY *)&Buffer->PortCharacteristics.Header.Type;
    *(_LIST_ENTRY *)((char *)Flink + 40) = *(_LIST_ENTRY *)&Buffer->PortCharacteristics.MediaConnectState;
    *(_LIST_ENTRY *)((char *)Flink + 56) = *(_LIST_ENTRY *)&Buffer->PortCharacteristics.RcvLinkSpeed;
    *(_LIST_ENTRY *)((char *)Flink + 72) = *(_LIST_ENTRY *)&Buffer->PortCharacteristics.RcvControlState;
    if ( (Buffer->PortCharacteristics.Flags & 1) != 0 )
    {
      HIDWORD(Flink[4].Flink) = a1->DefaultSendControlState;
      LODWORD(Flink[4].Blink) = a1->DefaultRcvControlState;
      HIDWORD(Flink[4].Blink) = a1->DefaultSendAuthorizationState;
      LODWORD(Flink[5].Flink) = a1->DefaultRcvAuthorizationState;
    }
    ++v4;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      LODWORD(v20) = Buffer->PortCharacteristics.PortNumber;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0x17u,
        0x16u,
        (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
        (char)a1,
        v20);
    }
    Buffer = Buffer->Next;
    if ( !Buffer )
      goto LABEL_45;
  }
  v3 = -1071448018;
  ndisRollbackPortActivation(a1, (struct _NDIS_PORT *)v2->NetPnPEvent.Buffer, Buffer);
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v20) = Buffer->PortCharacteristics.PortNumber;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x17u,
      0x15u,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1,
      v20);
  }
  if ( (byte_14011D043 & 0x20) != 0 )
  {
    LODWORD(v21) = Buffer->PortCharacteristics.PortNumber;
    LODWORD(v20) = 4;
    goto LABEL_54;
  }
LABEL_45:
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v6);
  if ( v4 )
  {
    *(_QWORD *)&v22.NetPnPEvent.NetEvent = 10LL;
    v22.Header = (_NDIS_OBJECT_HEADER)11272832;
    v22.PortNumber = v2->PortNumber;
    v22.NetPnPEvent.Buffer = v2->NetPnPEvent.Buffer;
    v22.NetPnPEvent.BufferLength = v2->NetPnPEvent.BufferLength;
    memset(&v22.NetPnPEvent.BufferLength + 1, 0, 148);
    ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, &v22);
  }
LABEL_47:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v20) = v3;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x17u,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1,
      v20);
  }
  return v3;
}
