/*
 * XREFs of ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x14001D000
 * Callers:
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x14001CD80 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1400CECE0 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 * Callees:
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140015D10 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019D10 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019F20 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001CBA0 (-ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140050280 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x14006C6C0 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x140070B20 (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceIsolationNetworkIdLocked(
        struct _NDIS_IF_BLOCK *a1,
        const struct _GUID *a2,
        char a3)
{
  __int64 v6; // rax
  struct _NDIS_IF_NETWORK_BLOCK *Network; // r15
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  struct _NDIS_IF_NETWORK_BLOCK *v9; // rbp
  __int64 v10; // rax
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // r14
  struct _NDIS_MINIPORT_BLOCK *v12; // rdx
  struct _NDIS_MINIPORT_BLOCK *v13; // rdx
  __int64 v14; // rax
  _LIST_ENTRY *p_NetworkLink; // rdi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *v20; // rax
  struct _NDIS_MINIPORT_BLOCK *v21; // rax
  struct _NDIS_MINIPORT_BLOCK *v22; // rdx
  _GUID NetworkGuid; // [rsp+20h] [rbp-28h]

  v6 = *(_QWORD *)&a1->NetworkGuid.Data1 - *(_QWORD *)&a2->Data1;
  if ( !v6 )
    v6 = *(_QWORD *)a1->NetworkGuid.Data4 - *(_QWORD *)a2->Data4;
  if ( !v6 )
    return 0LL;
  Network = a1->Network;
  if ( !Network )
    return 3221225485LL;
  NetworkBlock = ndisIfFindNetworkBlock(a2);
  v9 = NetworkBlock;
  if ( !NetworkBlock || (*((_DWORD *)NetworkBlock + 18) & 3) != 0 )
    return 3221225485LL;
  if ( !a1->NetworkIdOverridden || a3 )
  {
    v10 = *((_QWORD *)Network + 6);
    if ( *(struct _NDIS_IF_BLOCK **)(v10 + 1704) != a1 )
    {
LABEL_12:
      if ( a1->ProviderHandle == qword_14011F670 && (a1->Flags & 2) != 0 )
      {
        if ( a1->IsNdisFilter )
        {
          NetworkGuid = *(_GUID *)(*(_QWORD *)(*(_QWORD *)&a1->Miniport->Reserved4.Length + 4040LL) + 580LL);
          goto LABEL_19;
        }
        if ( ndisIfReferenceMiniport(a1, 6u) )
        {
          BaseMiniport = a1->Miniport->BaseMiniport;
          if ( ndisMReferenceIfBlock(BaseMiniport, MPIFREF_CHIIC) )
          {
            NetworkGuid = BaseMiniport->IfBlock->NetworkGuid;
            ndisMDereferenceIfBlock(BaseMiniport, 8u);
            ndisIfDereferenceMiniport(a1, v13, 6u);
LABEL_19:
            v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&NetworkGuid.Data1;
            if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&NetworkGuid.Data1 )
              v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)NetworkGuid.Data4;
            if ( v14 )
              return 3221225485LL;
            goto LABEL_24;
          }
          ndisIfDereferenceMiniport(a1, v12, 6u);
        }
      }
LABEL_24:
      p_NetworkLink = &a1->NetworkLink;
      Flink = a1->NetworkLink.Flink;
      if ( Flink->Blink != &a1->NetworkLink
        || (Blink = a1->NetworkLink.Blink, Blink->Flink != p_NetworkLink)
        || (Blink->Flink = Flink,
            Flink->Blink = Blink,
            NETWORKBLOCK_DECREMENT_REF(Network),
            v19 = (_LIST_ENTRY *)*((_QWORD *)v9 + 7),
            v20 = (_LIST_ENTRY *)((char *)v9 + 56),
            v19->Blink != (_LIST_ENTRY *)((char *)v9 + 56)) )
      {
        __fastfail(3u);
      }
      p_NetworkLink->Flink = v19;
      a1->NetworkLink.Blink = v20;
      v19->Blink = p_NetworkLink;
      v20->Flink = p_NetworkLink;
      ++*((_DWORD *)v9 + 19);
      a1->Compartment = (struct _NDIS_IF_COMPARTMENT_BLOCK *)*((_QWORD *)v9 + 6);
      a1->CompartmentId = *(_DWORD *)(*((_QWORD *)v9 + 6) + 16LL);
      a1->Network = v9;
      a1->NetworkGuid = (_GUID)*((_OWORD *)v9 + 2);
      if ( a3 )
        a1->NetworkIdOverridden = 1;
      if ( a1->ProviderHandle == qword_14011F670 && (a1->Flags & 2) == 0 )
      {
        v21 = ndisIfReferenceMiniport(a1, 7u);
        if ( v21 )
        {
          ndisIfUpdateFilterIfStack(v21);
          ndisIfDereferenceMiniport(a1, v22, 7u);
        }
      }
      return 0LL;
    }
    if ( *((_QWORD *)v9 + 6) == v10 )
    {
      *(_QWORD *)(v10 + 56) = v9;
      *(_OWORD *)(*((_QWORD *)Network + 6) + 80LL) = *((_OWORD *)v9 + 2);
      goto LABEL_12;
    }
    return 3221225485LL;
  }
  return 0LL;
}
