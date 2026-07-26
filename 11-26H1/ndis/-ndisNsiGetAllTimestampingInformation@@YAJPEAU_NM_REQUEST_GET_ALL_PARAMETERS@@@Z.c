/*
 * XREFs of ?ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400D1780
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x140014460 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140015D10 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019D10 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x14001AA20 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x14001C710 (-ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x140043800 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisNsiGetAllTimestampingInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  int v1; // edi
  union _NET_LUID_LH v3; // rbx
  KIRQL v4; // r14
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // rax
  struct _NDIS_IF_BLOCK *v6; // rbp
  struct _NDIS_MINIPORT_BLOCK *v7; // rax
  struct _NDIS_MINIPORT_BLOCK *v8; // rdx
  unsigned int TimestampFlags; // ebx
  KIRQL v10; // bl
  char v12[4]; // [rsp+30h] [rbp-48h]
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]

  v1 = 0;
  v13 = 0LL;
  v14 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      12,
      (struct _GUID *)&WPP_9c5ba4de329e350b3ef3aa77f1331679_Traceguids,
      (char)a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 8)
    || *((_DWORD *)a1 + 6) != 8
    || *((_QWORD *)a1 + 9)
    || *((_DWORD *)a1 + 20)
    || *((_QWORD *)a1 + 5)
    || *((_DWORD *)a1 + 12)
    || !*((_QWORD *)a1 + 7)
    || *((_DWORD *)a1 + 16) < 4u )
  {
    v1 = -1073741811;
    goto LABEL_22;
  }
  v3.Value = (*((union _NET_LUID_LH **)a1 + 2))->Value;
  ndisGetNsiClientInfo((struct _NDIS_NSI_CLIENT_INFO *)&v13);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(v3);
  v6 = InterfaceByNetLuid;
  if ( InterfaceByNetLuid )
  {
    if ( ndisIsCompartmentAccessibleByClient(
           InterfaceByNetLuid->Compartment,
           (const struct _NDIS_NSI_CLIENT_INFO *)&v13,
           0) )
    {
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v6->RefCountTracker, 0x10u);
      ++v6->Ref;
      goto LABEL_16;
    }
    v6 = 0LL;
  }
  v1 = -1073741811;
LABEL_16:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v4);
  if ( v1 >= 0 )
  {
    memset(*((void **)a1 + 7), 0, *((unsigned int *)a1 + 16));
    v7 = ndisIfReferenceMiniport(v6, 0x1Cu);
    TimestampFlags = 0;
    if ( v7 )
    {
      TimestampFlags = v7->TimestampFlags;
      ndisIfDereferenceMiniport(v6, v8, 0x1Cu);
    }
    **((_DWORD **)a1 + 7) = TimestampFlags;
  }
  if ( v6 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    IFBLOCK_DECREMENT_REF(v6, 0x10u);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v10);
  }
LABEL_22:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v12 = v1;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xDu,
      (struct _GUID *)&WPP_9c5ba4de329e350b3ef3aa77f1331679_Traceguids,
      (char)a1,
      *(_DWORD *)v12);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
