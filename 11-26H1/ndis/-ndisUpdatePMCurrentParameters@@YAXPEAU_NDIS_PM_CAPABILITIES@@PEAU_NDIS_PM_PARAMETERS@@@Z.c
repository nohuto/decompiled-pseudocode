/*
 * XREFs of ?ndisUpdatePMCurrentParameters@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1400B925C
 * Callers:
 *     ?ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400B5DFC (-ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisUpdatePMCurrentParameters(struct _NDIS_PM_CAPABILITIES *a1, struct _NDIS_PM_PARAMETERS *a2)
{
  _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp; // eax

  a2->EnabledWoLPacketPatterns &= a1->SupportedWoLPacketPatterns;
  a2->EnabledProtocolOffloads &= a1->SupportedProtocolOffloads;
  MinLinkChangeWakeUp = a1->MinLinkChangeWakeUp;
  if ( MinLinkChangeWakeUp != NdisDeviceStateD1 && (unsigned int)(MinLinkChangeWakeUp - 3) > 1 )
    a2->WakeUpFlags &= ~1u;
}
