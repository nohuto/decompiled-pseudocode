/*
 * XREFs of ?DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B55F0
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x140006B10 (WPP_RECORDER_SF_Lq.c)
 *     NdisOpenConfigurationEx @ 0x140020570 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140020B40 (NdisCloseConfiguration.c)
 *     ?ndisWritePMAdminConfigState@@YAHPEAXPEAU_UNICODE_STRING@@W4_NDIS_PM_ADMIN_CONFIG_STATE@@@Z @ 0x1400B9610 (-ndisWritePMAdminConfigState@@YAHPEAXPEAU_UNICODE_STRING@@W4_NDIS_PM_ADMIN_CONFIG_STATE@@@Z.c)
 */

void __fastcall DisableMagicPacketKeyword(struct _NDIS_MINIPORT_BLOCK *a1)
{
  NDIS_STATUS v2; // eax
  NDIS_HANDLE v3; // rcx
  struct _NDIS_CONFIGURATION_OBJECT v4; // [rsp+40h] [rbp-28h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+70h] [rbp+8h] BYREF

  v4.NdisHandle = a1;
  *(_QWORD *)&v4.Header.Type = 1573289LL;
  *(_QWORD *)&v4.Flags = 0LL;
  ConfigurationHandle = 0LL;
  v2 = NdisOpenConfigurationEx(&v4, &ConfigurationHandle);
  if ( v2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x90u,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
        v2,
        a1);
  }
  else
  {
    ndisWritePMAdminConfigState(ConfigurationHandle, &WakeOnMagicPacketStr, NdisPMAdminConfigDisabled);
    v3 = ConfigurationHandle;
    a1->PMAdminConfig.Value = a1->PMAdminConfig.Value & 0xFFFFFFF3 | 4;
    NdisCloseConfiguration(v3);
  }
}
