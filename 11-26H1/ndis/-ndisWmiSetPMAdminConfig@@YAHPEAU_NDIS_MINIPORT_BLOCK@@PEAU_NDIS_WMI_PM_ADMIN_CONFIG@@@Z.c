/*
 * XREFs of ?ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z @ 0x1400B93A4
 * Callers:
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140084370 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 * Callees:
 *     NdisOpenConfigurationEx @ 0x140020570 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140020B40 (NdisCloseConfiguration.c)
 *     ?ndisIsValidPMAdminConfigState@@YAHW4_NDIS_PM_ADMIN_CONFIG_STATE@@0@Z @ 0x1400B60C0 (-ndisIsValidPMAdminConfigState@@YAHW4_NDIS_PM_ADMIN_CONFIG_STATE@@0@Z.c)
 *     ?ndisWritePMAdminConfigState@@YAHPEAXPEAU_UNICODE_STRING@@W4_NDIS_PM_ADMIN_CONFIG_STATE@@@Z @ 0x1400B9610 (-ndisWritePMAdminConfigState@@YAHPEAXPEAU_UNICODE_STRING@@W4_NDIS_PM_ADMIN_CONFIG_STATE@@@Z.c)
 */

int __fastcall ndisWmiSetPMAdminConfig(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_WMI_PM_ADMIN_CONFIG *a2)
{
  bool v2; // zf
  int result; // eax
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned __int8 v8; // r8
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  enum _NDIS_PM_ADMIN_CONFIG_STATE WakeOnPattern; // r8d
  PVOID v12; // rsi
  enum _NDIS_PM_ADMIN_CONFIG_STATE WakeOnMagicPacket; // r8d
  enum _NDIS_PM_ADMIN_CONFIG_STATE DeviceSleepOnDisconnect; // r8d
  enum _NDIS_PM_ADMIN_CONFIG_STATE PMARPOffload; // r8d
  enum _NDIS_PM_ADMIN_CONFIG_STATE PMNSOffload; // r8d
  enum _NDIS_PM_ADMIN_CONFIG_STATE PMWiFiRekeyOffload; // r8d
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+20h] [rbp-28h] BYREF
  PVOID ConfigurationHandle; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2->Header.Type == 0x80;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  ConfigurationHandle = 0LL;
  if ( !v2 || a2->Header.Revision != 1 || a2->Header.Size != 28 )
    return -1073741811;
  result = ndisIsValidPMAdminConfigState(
             a2->WakeOnPattern,
             (enum _NDIS_PM_ADMIN_CONFIG_STATE)(a1->PMAdminConfig.Value & 3));
  if ( !result )
  {
    result = ndisIsValidPMAdminConfigState(a2->WakeOnMagicPacket, (enum _NDIS_PM_ADMIN_CONFIG_STATE)((v6 >> 2) & 3));
    if ( !result )
    {
      result = ndisIsValidPMAdminConfigState(
                 a2->DeviceSleepOnDisconnect,
                 (enum _NDIS_PM_ADMIN_CONFIG_STATE)((v7 >> 4) & 3));
      if ( !result )
      {
        result = ndisIsValidPMAdminConfigState(a2->PMARPOffload, (enum _NDIS_PM_ADMIN_CONFIG_STATE)(v8 >> 6));
        if ( !result )
        {
          result = ndisIsValidPMAdminConfigState(a2->PMNSOffload, (enum _NDIS_PM_ADMIN_CONFIG_STATE)((v9 >> 8) & 3));
          if ( !result )
          {
            result = ndisIsValidPMAdminConfigState(
                       a2->PMWiFiRekeyOffload,
                       (enum _NDIS_PM_ADMIN_CONFIG_STATE)((v10 >> 10) & 3));
            if ( !result )
            {
              ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
              ConfigObject.NdisHandle = a1;
              ConfigObject.Flags = 0;
              result = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
              if ( !result )
              {
                WakeOnPattern = a2->WakeOnPattern;
                v12 = ConfigurationHandle;
                if ( WakeOnPattern )
                {
                  ndisWritePMAdminConfigState(ConfigurationHandle, &WakeOnPatternStr, WakeOnPattern);
                  a1->PMAdminConfig.Value ^= (a2->WakeOnPattern ^ a1->PMAdminConfig.Value) & 3;
                }
                WakeOnMagicPacket = a2->WakeOnMagicPacket;
                if ( WakeOnMagicPacket )
                {
                  ndisWritePMAdminConfigState(v12, &WakeOnMagicPacketStr, WakeOnMagicPacket);
                  a1->PMAdminConfig.Value ^= ((unsigned __int8)a1->PMAdminConfig.Value ^ (unsigned __int8)(4 * a2->WakeOnMagicPacket)) & 0xC;
                }
                DeviceSleepOnDisconnect = a2->DeviceSleepOnDisconnect;
                if ( DeviceSleepOnDisconnect )
                {
                  ndisWritePMAdminConfigState(v12, &DeviceSleepOnDisconnectStr, DeviceSleepOnDisconnect);
                  a1->PMAdminConfig.Value ^= ((unsigned __int8)a1->PMAdminConfig.Value ^ (unsigned __int8)(16 * a2->DeviceSleepOnDisconnect)) & 0x30;
                }
                PMARPOffload = a2->PMARPOffload;
                if ( PMARPOffload )
                {
                  ndisWritePMAdminConfigState(v12, &PMARPOffloadStr, PMARPOffload);
                  a1->PMAdminConfig.Value ^= ((unsigned __int8)a1->PMAdminConfig.Value ^ (unsigned __int8)((unsigned __int8)a2->PMARPOffload << 6)) & 0xC0;
                }
                PMNSOffload = a2->PMNSOffload;
                if ( PMNSOffload )
                {
                  ndisWritePMAdminConfigState(v12, &PMNSOffloadStr, PMNSOffload);
                  a1->PMAdminConfig.Value ^= ((unsigned __int16)a1->PMAdminConfig.Value ^ (unsigned __int16)((unsigned __int16)a2->PMNSOffload << 8)) & 0x300;
                }
                PMWiFiRekeyOffload = a2->PMWiFiRekeyOffload;
                if ( PMWiFiRekeyOffload )
                {
                  ndisWritePMAdminConfigState(v12, &PMWiFiRekeyOffloadStr, PMWiFiRekeyOffload);
                  a1->PMAdminConfig.Value ^= ((unsigned __int16)a1->PMAdminConfig.Value ^ (unsigned __int16)((unsigned __int16)a2->PMWiFiRekeyOffload << 10)) & 0xC00;
                }
                if ( v12 )
                  NdisCloseConfiguration(v12);
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
