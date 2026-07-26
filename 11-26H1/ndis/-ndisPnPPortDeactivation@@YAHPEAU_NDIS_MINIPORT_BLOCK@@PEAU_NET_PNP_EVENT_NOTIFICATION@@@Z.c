/*
 * XREFs of ?ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140081DC0
 * Callers:
 *     NdisMNetPnPEvent @ 0x14006B000 (NdisMNetPnPEvent.c)
 * Callees:
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14000A5B0 (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x14004CB00 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z @ 0x1400AACBC (-ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x140157970 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

__int64 __fastcall ndisPnPPortDeactivation(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  struct _NET_PNP_EVENT_NOTIFICATION *v2; // r15
  unsigned int v3; // esi
  int v4; // r13d
  _DWORD *Buffer; // r14
  unsigned int v7; // ebp
  KIRQL v8; // di
  unsigned __int64 *p_Lock; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned int v13; // edx
  _LIST_ENTRY *Flink; // rcx
  __int64 v16; // rcx
  int v17; // edx
  struct _GUID *v18; // [rsp+20h] [rbp-118h]
  __int64 v19; // [rsp+30h] [rbp-108h]
  __int64 v20; // [rsp+38h] [rbp-100h]
  KIRQL v21; // [rsp+40h] [rbp-F8h]
  _DWORD *v22; // [rsp+48h] [rbp-F0h]
  struct _NET_PNP_EVENT_NOTIFICATION v23; // [rsp+50h] [rbp-E8h] BYREF

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
      24,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1);
  }
  Buffer = v2->NetPnPEvent.Buffer;
  v7 = v2->NetPnPEvent.BufferLength >> 2;
  v22 = Buffer;
  if ( !Buffer || !v7 )
  {
    v3 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        23,
        25,
        (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
        (char)a1);
    }
    if ( (byte_14011D044 & 0x40) == 0 )
      goto LABEL_41;
    LODWORD(v20) = 0;
    LODWORD(v19) = 0;
LABEL_22:
    LODWORD(v18) = a1->IfIndex;
    McTemplateK0jqxqq_EtwWriteTransfer(
      (__int64)a1,
      &PnPPortDeactivationFailed,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      (__int64)v18,
      a1->NetLuid.Value,
      v19,
      v20);
    goto LABEL_41;
  }
  v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v21 = v8;
  a1->MiniportThread = KeGetCurrentThread();
  if ( (a1->PnPFlags & 0x80u) == 0 || *Buffer )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v13 = *Buffer;
      if ( !*Buffer )
        break;
      Flink = a1->PortList.Flink;
      if ( Flink == &a1->PortList )
      {
LABEL_29:
        v3 = -1071448019;
        ndisRollbackPortDeactivation(a1, (unsigned int *)v2->NetPnPEvent.Buffer, v12);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v19) = v22[v12];
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x17u,
            0x1Eu,
            (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
            (char)a1,
            v19);
        }
        if ( (byte_14011D044 & 0x40) != 0 )
        {
          LODWORD(v20) = v22[v12];
          LODWORD(v19) = 3;
          LODWORD(v18) = a1->IfIndex;
          McTemplateK0jqxqq_EtwWriteTransfer(
            (unsigned int)v20,
            &PnPPortDeactivationFailed,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            (__int64)v18,
            a1->NetLuid.Value,
            v19,
            v20);
        }
        a1->MiniportThread = 0LL;
        goto LABEL_49;
      }
      while ( HIDWORD(Flink[1].Blink) != v13 )
      {
        if ( HIDWORD(Flink[1].Blink) <= v13 )
        {
          Flink = Flink->Flink;
          if ( Flink != &a1->PortList )
            continue;
        }
        goto LABEL_29;
      }
      if ( LODWORD(Flink[1].Flink) != 4 )
      {
        v3 = -1071448018;
        ndisRollbackPortDeactivation(a1, (unsigned int *)v2->NetPnPEvent.Buffer, v12);
        v4 = 0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v19) = v22[v12];
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x17u,
            0x1Fu,
            (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
            (char)a1,
            v19);
        }
        if ( (byte_14011D044 & 0x40) != 0 )
        {
          LODWORD(v20) = v22[v12];
          LODWORD(v19) = 7;
          goto LABEL_48;
        }
LABEL_39:
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v21);
        if ( v4 )
        {
          *(_QWORD *)&v23.NetPnPEvent.NetEvent = 11LL;
          v23.Header = (_NDIS_OBJECT_HEADER)11272832;
          v23.PortNumber = v2->PortNumber;
          v23.NetPnPEvent.Buffer = v2->NetPnPEvent.Buffer;
          v23.NetPnPEvent.BufferLength = v2->NetPnPEvent.BufferLength;
          memset(&v23.NetPnPEvent.BufferLength + 1, 0, 148);
          ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, &v23);
        }
        goto LABEL_41;
      }
      ++v4;
      --a1->NumberOfActivePorts;
      HIDWORD(Flink[1].Flink) = Flink[1].Flink;
      LODWORD(Flink[1].Flink) = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        LODWORD(v19) = *Buffer;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x17u,
          0x20u,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1,
          v19);
      }
      v12 = (unsigned int)(v12 + 1);
      ++Buffer;
      if ( (unsigned int)v12 >= v7 )
        goto LABEL_39;
    }
    v3 = -1071448019;
    ndisRollbackPortDeactivation(a1, (unsigned int *)v2->NetPnPEvent.Buffer, v12);
    v4 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v17,
        23,
        29,
        (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
        (char)a1);
    }
    if ( (byte_14011D044 & 0x40) == 0 )
      goto LABEL_39;
    LODWORD(v20) = 0;
    LODWORD(v19) = 5;
LABEL_48:
    LODWORD(v18) = a1->IfIndex;
    McTemplateK0jqxqq_EtwWriteTransfer(
      v16,
      &PnPPortDeactivationFailed,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      (__int64)v18,
      a1->NetLuid.Value,
      v19,
      v20);
    a1->MiniportThread = 0LL;
LABEL_49:
    KeReleaseSpinLock(&a1->Lock, v21);
    goto LABEL_41;
  }
  p_Lock = &a1->Lock;
  if ( v7 > 1 )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        23,
        26,
        (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
        (char)a1);
    }
    if ( (byte_14011D044 & 0x40) != 0 )
    {
      LODWORD(v20) = 0;
      LODWORD(v19) = 5;
      LODWORD(v18) = a1->IfIndex;
      McTemplateK0jqxqq_EtwWriteTransfer(
        v10,
        &PnPPortDeactivationFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v18,
        a1->NetLuid.Value,
        v19,
        v20);
    }
    v3 = -1071448019;
    goto LABEL_41;
  }
  if ( (a1->Flags & 0x10000) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFFEFFFF);
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v8);
    ndisMSetMiniportReadyForBinding(a1, 0, Reason_DefaultPortNotActive, RunSynchronous);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        23,
        28,
        (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
        (char)a1);
    }
    if ( byte_14011D041 < 0 )
    {
      LODWORD(v19) = 65537;
      LODWORD(v18) = a1->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        v11,
        (__int64)&DefaultPortDeactivated,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v18,
        a1->NetLuid.Value,
        v19);
    }
    goto LABEL_41;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(p_Lock, v8);
  v3 = -1071448018;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      23,
      27,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1);
  }
  if ( (byte_14011D044 & 0x40) != 0 )
  {
    LODWORD(v20) = 0;
    LODWORD(v19) = 6;
    goto LABEL_22;
  }
LABEL_41:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      23,
      33,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1);
  }
  return v3;
}
