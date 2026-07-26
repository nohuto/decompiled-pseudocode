/*
 * XREFs of ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400D26C0
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x140014460 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140015D10 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019D10 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x14001AA20 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ndisIfFindNextRcvAddress @ 0x14014752C (ndisIfFindNextRcvAddress.c)
 *     ndisIfFindRcvAddress @ 0x1401475B8 (ndisIfFindRcvAddress.c)
 *     ndisNsiGetIfRcvAddressRodInformation @ 0x140147638 (ndisNsiGetIfRcvAddressRodInformation.c)
 */

__int64 __fastcall ndisNsiGetIfRcvAddress(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // rsi
  int v3; // r14d
  unsigned int IfRcvAddressRodInformation; // edi
  union _NET_LUID_LH *v5; // rax
  union _NET_LUID_LH v6; // rbx
  union _NET_LUID_LH *v7; // r12
  KIRQL v8; // al
  int v9; // ecx
  KIRQL v10; // r15
  int v11; // ecx
  __int64 v12; // rax
  struct _NDIS_MINIPORT_BLOCK *v13; // rax
  __int64 ifRcvAddressTable; // rdx
  int v15; // ebx
  __int64 NextRcvAddress; // rax
  __int64 v17; // rax
  KIRQL v18; // bl

  InterfaceByNetLuid = 0LL;
  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      12,
      (struct _GUID *)&WPP_43842ee2afd83130a9e5d55a54cbd7bb_Traceguids,
      (char)a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) != 40 || !*((_QWORD *)a1 + 5) )
  {
    IfRcvAddressRodInformation = -1073741808;
    goto LABEL_40;
  }
  v5 = (union _NET_LUID_LH *)*((_QWORD *)a1 + 2);
  v6.Value = v5->Value;
  v7 = v5 + 1;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  v9 = *((_DWORD *)a1 + 14);
  IfRcvAddressRodInformation = -1073741808;
  v10 = v8;
  if ( !v9 )
    goto LABEL_16;
  v11 = v9 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
    {
      v3 = -1073741808;
      goto LABEL_18;
    }
LABEL_16:
    InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(v6);
    if ( !InterfaceByNetLuid )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( v6.Value != -1LL )
    goto LABEL_16;
  do
  {
    v12 = *(_QWORD *)&WPP_MAIN_CB.SectorSize - 1232LL;
    if ( *(_DEVICE_OBJECT **)&WPP_MAIN_CB.SectorSize == (_DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize )
      v12 = (__int64)InterfaceByNetLuid;
    InterfaceByNetLuid = (struct _NDIS_IF_BLOCK *)v12;
  }
  while ( !v12 || !*(_QWORD *)(v12 + 1280) );
LABEL_17:
  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByNetLuid->RefCountTracker, 8u);
  ++InterfaceByNetLuid->Ref;
  **((_QWORD **)a1 + 2) = InterfaceByNetLuid->NetLuid.Value;
LABEL_18:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v10);
  if ( v3 < 0 )
  {
    IfRcvAddressRodInformation = v3;
    if ( !InterfaceByNetLuid )
      goto LABEL_40;
    goto LABEL_39;
  }
  if ( !InterfaceByNetLuid )
  {
    IfRcvAddressRodInformation = *((_DWORD *)a1 + 14) != 0 ? -2147483622 : -1073741772;
    goto LABEL_40;
  }
  v13 = ndisIfReferenceMiniport(InterfaceByNetLuid, 4u);
  if ( v13 )
  {
    if ( !v13->EthDB )
    {
      IfRcvAddressRodInformation = 0;
LABEL_37:
      ndisIfDereferenceMiniport(InterfaceByNetLuid, (struct _NDIS_MINIPORT_BLOCK *)ifRcvAddressTable, 4u);
      goto LABEL_39;
    }
    v15 = *((_DWORD *)a1 + 14);
    if ( v15 )
    {
      if ( v15 == 1 )
      {
        ifRcvAddressTable = (__int64)InterfaceByNetLuid->ifRcvAddressTable;
        goto LABEL_32;
      }
      if ( v15 != 2 )
        goto LABEL_37;
      NextRcvAddress = ndisIfFindNextRcvAddress(InterfaceByNetLuid, v7);
    }
    else
    {
      NextRcvAddress = ndisIfFindRcvAddress(InterfaceByNetLuid, v7);
    }
    ifRcvAddressTable = NextRcvAddress;
LABEL_32:
    if ( ifRcvAddressTable )
    {
      v17 = *((_QWORD *)a1 + 2);
      IfRcvAddressRodInformation = -1073741811;
      *(_OWORD *)(v17 + 8) = *(_OWORD *)(ifRcvAddressTable + 8);
      *(_OWORD *)(v17 + 24) = *(_OWORD *)(ifRcvAddressTable + 24);
      if ( *((_QWORD *)a1 + 1) == 3LL && *((_DWORD *)a1 + 8) == 1 )
        IfRcvAddressRodInformation = ndisNsiGetIfRcvAddressRodInformation(
                                       (char)InterfaceByNetLuid,
                                       ifRcvAddressTable,
                                       (char)a1);
    }
    else
    {
      IfRcvAddressRodInformation = v15 != 0 ? -2147483622 : -1073741772;
    }
    goto LABEL_37;
  }
  IfRcvAddressRodInformation = 0;
LABEL_39:
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  IFBLOCK_DECREMENT_REF(InterfaceByNetLuid, 8u);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v18);
LABEL_40:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xDu,
      (struct _GUID *)&WPP_43842ee2afd83130a9e5d55a54cbd7bb_Traceguids,
      (char)a1,
      IfRcvAddressRodInformation);
  KeLeaveCriticalRegion();
  return IfRcvAddressRodInformation;
}
