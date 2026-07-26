/*
 * XREFs of ?ndisEnumeratePorts@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT_ARRAY@@KPEAI2@Z @ 0x1400AA9B8
 * Callers:
 *     ?ndisOidPreEnumeratePorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BDEF0 (-ndisOidPreEnumeratePorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisEnumeratePorts(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PORT_ARRAY *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int v6; // esi
  struct _NDIS_PORT_ARRAY *v8; // rdi
  bool v10; // cl
  unsigned int NumberOfActivePorts; // ebp
  unsigned int v12; // r12d
  unsigned int v13; // edx
  _NDIS_PORT_CHARACTERISTICS *Ports; // rdi
  _LIST_ENTRY *i; // rax
  KIRQL v16; // dl
  KIRQL NewIrql; // [rsp+80h] [rbp+18h] BYREF

  v6 = 0;
  NewIrql = 0;
  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      23,
      34,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1);
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  *a4 = 0;
  v10 = (a1->Flags & 0x10000) != 0;
  NumberOfActivePorts = a1->NumberOfActivePorts + 1;
  if ( (a1->Flags & 0x10000) == 0 )
    NumberOfActivePorts = a1->NumberOfActivePorts;
  v12 = (NumberOfActivePorts << 6) + 16;
  *a5 = v12;
  if ( v12 <= a3 )
  {
    v8->Header = (_NDIS_OBJECT_HEADER)5243264;
    v8->ElementSize = 64;
    v13 = 0;
    v8->NumberOfPorts = NumberOfActivePorts;
    v8->OffsetFirstPort = 16;
    Ports = v8->Ports;
    if ( v10 )
    {
      memset(Ports, 0, sizeof(_NDIS_PORT_CHARACTERISTICS));
      Ports->Header = (_NDIS_OBJECT_HEADER)4194688;
      v13 = 1;
      Ports->MediaConnectState = a1->MediaConnectState;
      Ports->XmitLinkSpeed = a1->XmitLinkSpeed;
      Ports->RcvLinkSpeed = a1->RcvLinkSpeed;
      Ports->Direction = a1->IfBlock->DirectionType;
      Ports->SendControlState = a1->DefaultPortSendControlState;
      Ports->RcvControlState = a1->DefaultPortRcvControlState;
      Ports->SendAuthorizationState = a1->DefaultPortSendAuthorizationState;
      Ports->RcvAuthorizationState = a1->DefaultPortRcvAuthorizationState;
      ++Ports;
    }
    for ( i = a1->PortList.Flink; i != &a1->PortList && v13 < NumberOfActivePorts; i = i->Flink )
    {
      if ( LODWORD(i[1].Flink) == 4 )
      {
        *(_LIST_ENTRY *)&Ports->Header.Type = *(_LIST_ENTRY *)((char *)i + 24);
        *(_LIST_ENTRY *)&Ports->MediaConnectState = *(_LIST_ENTRY *)((char *)i + 40);
        *(_LIST_ENTRY *)&Ports->RcvLinkSpeed = *(_LIST_ENTRY *)((char *)i + 56);
        *(_LIST_ENTRY *)&Ports->RcvControlState = *(_LIST_ENTRY *)((char *)i + 72);
        ++Ports;
        ++v13;
      }
    }
    *a4 = v12;
  }
  else
  {
    v6 = -1073676266;
  }
  v16 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x23u,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1,
      v6);
  return v6;
}
