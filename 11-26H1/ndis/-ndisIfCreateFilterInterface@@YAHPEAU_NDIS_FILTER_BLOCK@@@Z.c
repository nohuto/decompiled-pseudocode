/*
 * XREFs of ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140061B40
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ndisIfSetFilterIfInfoInRegistry @ 0x140165550 (ndisIfSetFilterIfInfoInRegistry.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x140165700 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x140165C40 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ndisIfGetFilterIfInfoFromRegistry @ 0x140166520 (ndisIfGetFilterIfInfoFromRegistry.c)
 */

__int64 __fastcall ndisIfCreateFilterInterface(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbp
  __int64 ifType; // r14
  unsigned int v4; // esi
  KIRQL v5; // al
  struct _NDIS_IF_NETWORK_BLOCK *Network; // rdi
  struct _NDIS_FILTER_BLOCK *v8; // [rsp+30h] [rbp-58h]
  unsigned int v9; // [rsp+90h] [rbp+8h] BYREF
  union _NET_LUID_LH v10; // [rsp+98h] [rbp+10h] BYREF

  Miniport = a1->Miniport;
  v9 = 0;
  v10.Value = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      16,
      (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
      (char)a1);
  ifType = Miniport->IfBlock->ifType;
  v4 = ndisIfAllocateAndVerifyNetLuidIndex(Miniport->IfBlock->ifType, &v9, 1u, 0);
  if ( !v4 )
  {
    if ( RtlIsStateSeparationEnabled() )
    {
      if ( ExUuidCreate(&a1->InterfaceGuid) >= 0 )
      {
LABEL_8:
        v4 = 0;
        v10.Value = ((ifType << 24) | v9 & 0xFFFFFF) << 24;
        v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
        Network = Miniport->IfBlock->Network;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v5);
        if ( (int)ndisIfCreateInterface(Network, 0, 0LL, &v10, 0LL, 0LL, a1, NdisIfBlockSourceAutomaticLwFilter) >= 0 )
          goto LABEL_10;
      }
    }
    else
    {
      if ( !(unsigned int)ndisIfGetFilterIfInfoFromRegistry((char)a1, (unsigned __int8)a1 - 104) )
        goto LABEL_8;
      if ( ExUuidCreate(&a1->InterfaceGuid) >= 0 )
      {
        ndisIfSetFilterIfInfoInRegistry((char)a1);
        goto LABEL_8;
      }
    }
    v4 = -1073741823;
  }
LABEL_10:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = v4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x11u,
      (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
      (char)a1,
      v8);
  }
  return v4;
}
