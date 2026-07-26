/*
 * XREFs of ?ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14009F1AC
 * Callers:
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14016D6E0 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 * Callees:
 *     wcscmp_0 @ 0x1400EA036 (wcscmp_0.c)
 */

unsigned __int8 __fastcall ndisCheckDeviceNeedReinstallWithNewIfType(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  char v4; // bl

  DriverHandle = a1->DriverHandle;
  v4 = 0;
  if ( !wcscmp_0(L"usbrndis6", DriverHandle->ServiceName.Buffer)
    && !wcscmp_0(L"usb80236.sys", DriverHandle->ImageName.Buffer)
    && (a2->IfType == 1
     || a2->IfType == 6
     || a2->IfType == 23
     || a2->IfType == 37
     || a2->IfType == 71
     || a2->IfType == 131) )
  {
    return 1;
  }
  return v4;
}
