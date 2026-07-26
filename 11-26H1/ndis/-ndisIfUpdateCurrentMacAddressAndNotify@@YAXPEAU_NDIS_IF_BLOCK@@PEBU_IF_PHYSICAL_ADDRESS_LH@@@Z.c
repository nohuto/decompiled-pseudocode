/*
 * XREFs of ?ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x140146AB8
 * Callers:
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1401676B0 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ?ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x140078A60 (-ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x14015DA60 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x140163D60 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisIfUpdateCurrentMacAddressAndNotify(
        struct _NDIS_IF_BLOCK *a1,
        const struct _IF_PHYSICAL_ADDRESS_LH *a2)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+30h] [rbp-18h]
  int v5; // [rsp+34h] [rbp-14h]

  if ( ndisIfUpdateCurrentMacAddress(a1, a2) )
  {
    v3[0] = 1LL;
    v3[1] = &a1->ifPhysAddress;
    v4 = 34;
    v5 = 548;
    ndisNsiNotifyClientInterfaceChange(a1, 0LL, v3, 1LL);
    LODWORD(v3[0]) = 0;
    v5 = 536;
    ndisNsiNotifyClientInterfaceChange(a1, 0LL, v3, 0LL);
    if ( a1->Source == NdisIfBlockSourcePersistedNetSetup )
      ndisIfWriteBackPersistedInterface(a1);
  }
}
