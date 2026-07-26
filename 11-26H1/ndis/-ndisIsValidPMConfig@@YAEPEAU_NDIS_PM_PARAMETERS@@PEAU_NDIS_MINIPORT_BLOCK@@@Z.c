/*
 * XREFs of ?ndisIsValidPMConfig@@YAEPEAU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001F7D0
 * Callers:
 *     ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F5E0 (-ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsValidPMConfig(struct _NDIS_PM_PARAMETERS *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int EnabledWoLPacketPatterns; // r8d
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // edx
  _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp; // eax
  bool result; // al

  EnabledWoLPacketPatterns = a1->EnabledWoLPacketPatterns;
  result = 0;
  if ( (EnabledWoLPacketPatterns & 2) == 0
    || (MinMagicPacketWakeUp = a2->PMAdvertisedCapabilities.MinMagicPacketWakeUp,
        MinMagicPacketWakeUp == NdisDeviceStateD1)
    || (unsigned int)(MinMagicPacketWakeUp - 3) <= 1 )
  {
    if ( (EnabledWoLPacketPatterns & 0xFFFFFFFD & a2->PMAdvertisedCapabilities.SupportedWoLPacketPatterns) == (EnabledWoLPacketPatterns & 0xFFFFFFFD)
      && (a1->EnabledProtocolOffloads & a2->PMAdvertisedCapabilities.SupportedProtocolOffloads) == a1->EnabledProtocolOffloads )
    {
      if ( (a1->WakeUpFlags & 1) == 0 )
        return 1;
      MinLinkChangeWakeUp = a2->PMAdvertisedCapabilities.MinLinkChangeWakeUp;
      if ( MinLinkChangeWakeUp == NdisDeviceStateD1 || (unsigned int)(MinLinkChangeWakeUp - 3) <= 1 )
        return 1;
    }
  }
  return result;
}
