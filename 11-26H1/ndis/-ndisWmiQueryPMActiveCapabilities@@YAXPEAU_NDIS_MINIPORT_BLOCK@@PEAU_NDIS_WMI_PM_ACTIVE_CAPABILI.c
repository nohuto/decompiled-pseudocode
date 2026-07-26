/*
 * XREFs of ?ndisWmiQueryPMActiveCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ACTIVE_CAPABILITIES@@@Z @ 0x140079410
 * Callers:
 *     ndisQueryGuidData @ 0x14000C100 (ndisQueryGuidData.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisWmiQueryPMActiveCapabilities(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *a2)
{
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // eax
  unsigned int *p_EnabledWoLPacketPatterns; // r8
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // eax
  _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp; // eax
  unsigned int *p_EnabledProtocolOffloads; // r8

  a2->WakeOnPattern = NdisPMAdminConfigInactive;
  MinPatternWakeUp = a1->PMHardwareCapabilities.MinPatternWakeUp;
  if ( MinPatternWakeUp == NdisDeviceStateD1 || (unsigned int)(MinPatternWakeUp - 3) <= 1 )
  {
    p_EnabledWoLPacketPatterns = &a1->PMCurrentParameters.EnabledWoLPacketPatterns;
    if ( (a1->PMCurrentParameters.EnabledWoLPacketPatterns & 1) != 0 )
      a2->WakeOnPattern = NdisPMAdminConfigActive;
  }
  else
  {
    a2->WakeOnPattern = NdisPMAdminConfigUnsupported;
    p_EnabledWoLPacketPatterns = &a1->PMCurrentParameters.EnabledWoLPacketPatterns;
  }
  a2->WakeOnMagicPacket = NdisPMAdminConfigInactive;
  MinMagicPacketWakeUp = a1->PMHardwareCapabilities.MinMagicPacketWakeUp;
  if ( MinMagicPacketWakeUp == NdisDeviceStateD1 || (unsigned int)(MinMagicPacketWakeUp - 3) <= 1 )
  {
    if ( (*p_EnabledWoLPacketPatterns & 2) != 0 )
      a2->WakeOnMagicPacket = NdisPMAdminConfigActive;
  }
  else
  {
    a2->WakeOnMagicPacket = NdisPMAdminConfigUnsupported;
  }
  a2->DeviceSleepOnDisconnect = NdisPMAdminConfigInactive;
  MinLinkChangeWakeUp = a1->PMHardwareCapabilities.MinLinkChangeWakeUp;
  if ( MinLinkChangeWakeUp == NdisDeviceStateD1 || (unsigned int)(MinLinkChangeWakeUp - 3) <= 1 )
  {
    if ( (a1->WSyncFlags & 8) != 0 )
      a2->DeviceSleepOnDisconnect = NdisPMAdminConfigActive;
  }
  else
  {
    a2->DeviceSleepOnDisconnect = NdisPMAdminConfigUnsupported;
  }
  a2->PMARPOffload = NdisPMAdminConfigInactive;
  p_EnabledProtocolOffloads = &a1->PMCurrentParameters.EnabledProtocolOffloads;
  if ( (a1->PMHardwareCapabilities.SupportedProtocolOffloads & 1) != 0 )
  {
    if ( (*p_EnabledProtocolOffloads & 1) != 0 )
      a2->PMARPOffload = NdisPMAdminConfigActive;
  }
  else
  {
    a2->PMARPOffload = NdisPMAdminConfigUnsupported;
  }
  a2->PMNSOffload = NdisPMAdminConfigInactive;
  if ( (a1->PMHardwareCapabilities.SupportedProtocolOffloads & 2) != 0 )
  {
    if ( (*p_EnabledProtocolOffloads & 2) != 0 )
      a2->PMNSOffload = NdisPMAdminConfigActive;
  }
  else
  {
    a2->PMNSOffload = NdisPMAdminConfigUnsupported;
  }
  a2->PMWiFiRekeyOffload = NdisPMAdminConfigInactive;
  if ( (a1->PMHardwareCapabilities.SupportedProtocolOffloads & 0x80u) != 0 )
  {
    if ( (*p_EnabledProtocolOffloads & 0x80u) != 0 )
      a2->PMWiFiRekeyOffload = NdisPMAdminConfigActive;
  }
  else
  {
    a2->PMWiFiRekeyOffload = NdisPMAdminConfigUnsupported;
  }
}
