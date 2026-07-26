/*
 * XREFs of ?ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400740B0
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x14004CB00 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 */

unsigned __int8 __fastcall ndisCheckMiniportWakeUpCapable(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp; // eax
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // eax
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // eax
  _DEVICE_POWER_STATE DeviceWake; // eax
  struct _GUID *v7; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  MinLinkChangeWakeUp = a1->PMHardwareCapabilities.MinLinkChangeWakeUp;
  if ( (MinLinkChangeWakeUp == NdisDeviceStateD1
     || (unsigned int)(MinLinkChangeWakeUp - 3) <= 1
     || (MinMagicPacketWakeUp = a1->PMHardwareCapabilities.MinMagicPacketWakeUp,
         MinMagicPacketWakeUp == NdisDeviceStateD1)
     || (unsigned int)(MinMagicPacketWakeUp - 3) <= 1
     || (MinPatternWakeUp = a1->PMHardwareCapabilities.MinPatternWakeUp, MinPatternWakeUp == NdisDeviceStateD1)
     || (unsigned int)(MinPatternWakeUp - 3) <= 1
     || (a1->PMHardwareCapabilities.Flags & 6) != 0)
    && a1->DeviceCaps.SystemWake
    && ((DeviceWake = a1->DeviceCaps.DeviceWake, DeviceWake == PowerDeviceD1) || (unsigned int)(DeviceWake - 3) <= 1)
    && (*((_DWORD *)&a1->DeviceCaps + 1) & 0x3800) != 0 )
  {
    a1->PnPFlags |= 0x4000000u;
    return 1;
  }
  else
  {
    a1->PnPFlags &= ~0x4000000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        121,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
        (char)a1);
    if ( (byte_14011D042 & 8) != 0 )
    {
      LODWORD(v9) = 0;
      LODWORD(v8) = 3;
      LODWORD(v7) = a1->IfIndex;
      McTemplateK0jqxqq_EtwWriteTransfer(
        (__int64)a1,
        &InitializeAdapterInfo,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v7,
        a1->NetLuid.Value,
        v8,
        v9);
    }
    return 0;
  }
}
