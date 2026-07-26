/*
 * XREFs of ?ndisGetPortList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_PORT@@@Z @ 0x140061630
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1401565F0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ndisGetPortList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PORT **a2)
{
  struct _NDIS_PORT **v2; // r14
  KIRQL v4; // al
  unsigned int NumberOfActivePorts; // edi
  KIRQL v6; // r15
  unsigned int v7; // edi
  __int64 Pool2; // rax
  struct _NDIS_PORT *v9; // rsi
  _QWORD *v10; // r9
  _LIST_ENTRY *Flink; // rdx
  _NET_IF_DIRECTION_TYPE DirectionType; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // edi
  _OWORD *v16; // r10

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      23,
      36,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1);
  }
  *v2 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  NumberOfActivePorts = a1->NumberOfActivePorts;
  v6 = v4;
  a1->MiniportThread = KeGetCurrentThread();
  v7 = NumberOfActivePorts + 1;
  Pool2 = ExAllocatePool2(64LL, 96 * v7, 1869628494LL);
  v9 = (struct _NDIS_PORT *)Pool2;
  if ( Pool2 )
  {
    v10 = (_QWORD *)(Pool2 + 96);
    *(_QWORD *)(Pool2 + 32) = 4194688LL;
    *(_QWORD *)Pool2 = Pool2 + 96;
    Flink = a1->PortList.Flink;
    *(_DWORD *)(Pool2 + 40) = 0;
    *(_DWORD *)(Pool2 + 48) = a1->MediaConnectState;
    *(_QWORD *)(Pool2 + 56) = a1->XmitLinkSpeed;
    *(_QWORD *)(Pool2 + 64) = a1->RcvLinkSpeed;
    DirectionType = a1->IfBlock->DirectionType;
    *(_DWORD *)(Pool2 + 76) = a1->DefaultPortSendControlState;
    *(_DWORD *)(Pool2 + 80) = a1->DefaultPortRcvControlState;
    *(_DWORD *)(Pool2 + 84) = a1->DefaultPortSendAuthorizationState;
    *(_DWORD *)(Pool2 + 88) = a1->DefaultPortRcvAuthorizationState;
    *(_DWORD *)(Pool2 + 72) = DirectionType;
    v13 = 1;
    if ( Flink != &a1->PortList )
    {
      v16 = (_OWORD *)(Pool2 + 128);
      do
      {
        if ( v13 >= v7 )
          break;
        if ( LODWORD(Flink[1].Flink) == 4 )
        {
          ++v13;
          *v10 = v16 + 4;
          Pool2 = (__int64)v10;
          v10 += 12;
          *v16 = *(_OWORD *)&Flink[1].Blink;
          v16[1] = *(_OWORD *)&Flink[2].Blink;
          v16[2] = *(_OWORD *)&Flink[3].Blink;
          v16[3] = *(_OWORD *)&Flink[4].Blink;
          v16 += 6;
        }
        Flink = Flink->Flink;
      }
      while ( Flink != &a1->PortList );
    }
    *(_QWORD *)Pool2 = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v6);
    *v2 = v9;
    v14 = 0;
  }
  else
  {
    a1->MiniportThread = 0LL;
    v14 = -1073741670;
    KeReleaseSpinLock(&a1->Lock, v6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x25u,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1,
      v14);
  return v14;
}
