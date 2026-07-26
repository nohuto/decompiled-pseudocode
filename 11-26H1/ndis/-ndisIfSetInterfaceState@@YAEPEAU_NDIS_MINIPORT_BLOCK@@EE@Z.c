/*
 * XREFs of ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14001B4C0
 * Callers:
 *     ?ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001BA50 (-ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14001E520 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14004EA90 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14006B110 (-ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisOidPreSetPortAuthentication@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140072860 (-ndisOidPreSetPortAuthentication@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x140080170 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ndisWdfDevicePowerOn @ 0x140082F10 (ndisWdfDevicePowerOn.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x140183FD0 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1401847E0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185800 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x140006E90 (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019F20 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIsDefaultPortStateOperational@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001B960 (-ndisIsDefaultPortStateOperational@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

__int64 __fastcall ndisIfSetInterfaceState(struct _NDIS_MINIPORT_BLOCK *a1, char a2, unsigned __int8 a3)
{
  unsigned int OperStatusFlags; // edi
  unsigned __int8 v4; // r14
  KIRQL v5; // bp
  struct _NDIS_MINIPORT_BLOCK *v6; // rbx
  _NDIS_MINIPORT_STATE State; // eax
  _NET_IF_OPER_STATUS *p_OperStatus; // r15
  _NDIS_IF_BLOCK *IfBlock; // rdi
  $98D04340D500F5AE9C8D2C1CADB6EC7D *v10; // r12
  KIRQL v11; // si
  _NET_IF_OPER_STATUS v12; // ecx
  _NET_IF_OPER_STATUS ifOperStatus; // r8d
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // r13d
  unsigned __int8 v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = a3;
  OperStatusFlags = a1->OperStatusFlags;
  v4 = 0;
  a1->OperStatusFlags = 0;
  v5 = a3;
  v6 = a1;
  if ( a1->State == NdisMiniportHalted )
    goto LABEL_10;
  if ( a1->MediaConnectState != MediaConnectStateConnected )
  {
    a1->OperStatusFlags = 2;
LABEL_10:
    p_OperStatus = &a1->OperStatus;
    a1->OperStatus = NET_IF_OPER_STATUS_DOWN;
    goto LABEL_11;
  }
  if ( !ndisIsDefaultPortStateOperational(a1) )
  {
    v6->OperStatusFlags |= 1u;
    p_OperStatus = &v6->OperStatus;
    v6->OperStatus = NET_IF_OPER_STATUS_DOWN;
LABEL_8:
    a1 = v6;
    goto LABEL_11;
  }
  State = v6->State;
  if ( State != NdisMiniportPaused && State != NdisMiniportPausing )
  {
    v6->OperStatusFlags = 0;
    p_OperStatus = &v6->OperStatus;
    v6->OperStatus = NET_IF_OPER_STATUS_UP;
    if ( (OperStatusFlags & 8) != 0 )
      v6->OperStatusFlags = 0x1000000;
    goto LABEL_8;
  }
  v6->OperStatusFlags |= 4u;
  p_OperStatus = &v6->OperStatus;
  v6->OperStatus = NET_IF_OPER_STATUS_DORMANT;
  a1 = v6;
LABEL_11:
  IfBlock = 0LL;
  v10 = &a1->480;
  v11 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( v6->IfBlockAvailable )
  {
    IfBlock = v6->IfBlock;
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)IfBlock->MpRefCountTracker, 0xAu);
    ++IfBlock->MiniportLinkReference;
  }
  KeReleaseSpinLock(&SpinLock, v11);
  if ( IfBlock )
  {
    v12 = *p_OperStatus;
    ifOperStatus = IfBlock->ifOperStatus;
    IfBlock->ifOperStatus = *p_OperStatus;
    IfBlock->ifAdminStatus = v6->AdminStatus;
    MediaConnectState = IfBlock->MediaConnectState;
    IfBlock->MediaConnectState = v10->MediaConnectState;
    IfBlock->MediaDuplexState = v6->MediaDuplexState;
    IfBlock->RcvLinkSpeed = v6->RcvLinkSpeed;
    IfBlock->XmitLinkSpeed = v6->XmitLinkSpeed;
    IfBlock->ifOperStatusFlags = v6->OperStatusFlags;
    if ( ifOperStatus != v12 )
    {
      v4 = 1;
      if ( a2 )
      {
        v6->MiniportThread = 0LL;
        KeReleaseSpinLock(&v6->Lock, v5);
        ndisNsiScheduleIfBlockRodChangeNotification(IfBlock, (unsigned __int8 *)&IfBlock->ifOperStatus, 8, 536);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v6, &v17);
        v5 = v17;
      }
    }
    if ( MediaConnectState != IfBlock->MediaConnectState && a2 )
    {
      v6->MiniportThread = 0LL;
      KeReleaseSpinLock(&v6->Lock, v5);
      ndisNsiScheduleIfBlockRodChangeNotification(IfBlock, (unsigned __int8 *)&IfBlock->MediaConnectState, 4, 644);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v6, &v17);
    }
    ndisMDereferenceIfBlock(v6, 0xAu);
  }
  return v4;
}
