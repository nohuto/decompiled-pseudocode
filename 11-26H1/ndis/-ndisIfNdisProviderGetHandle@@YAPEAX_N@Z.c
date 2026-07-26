/*
 * XREFs of ?ndisIfNdisProviderGetHandle@@YAPEAX_N@Z @ 0x1400745A0
 * Callers:
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x140165700 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 * Callees:
 *     <none>
 */

void *__fastcall ndisIfNdisProviderGetHandle(char a1)
{
  void *result; // rax

  result = qword_14011F670;
  if ( a1 )
    return qword_14011F668;
  return result;
}
