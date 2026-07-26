/*
 * XREFs of ?ndisMInitializePmParametersForAoAc@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140066E50
 * Callers:
 *     ?ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401648B0 (-ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     McTemplateK0jqqqqqqqqqq_EtwWriteTransfer @ 0x140066F30 (McTemplateK0jqqqqqqqqqq_EtwWriteTransfer.c)
 */

struct _NDIS_PM_PARAMETERS *__fastcall ndisMInitializePmParametersForAoAc(
        struct _NDIS_PM_PARAMETERS *__return_ptr retstr,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int MediaSpecificWakeUpEvents; // eax
  unsigned int v4; // ecx
  unsigned int SupportedWakeUpEvents; // r9d

  MediaSpecificWakeUpEvents = a2->PMCurrentParameters.MediaSpecificWakeUpEvents;
  *(_OWORD *)&retstr->Header.Type = *(_OWORD *)&a2->PMCurrentParameters.Header.Type;
  retstr->MediaSpecificWakeUpEvents = MediaSpecificWakeUpEvents;
  v4 = 0;
  if ( ndisIdleCondition == NdisIdleConditionL2ConnectedOnly )
    retstr->EnabledWoLPacketPatterns = 0;
  SupportedWakeUpEvents = a2->PMAdvertisedCapabilities.SupportedWakeUpEvents;
  retstr->WakeUpFlags = 0;
  if ( (SupportedWakeUpEvents & 2) != 0 )
  {
    v4 = 2;
    retstr->WakeUpFlags = 2;
  }
  if ( (SupportedWakeUpEvents & 1) != 0 )
  {
    v4 |= 1u;
    retstr->WakeUpFlags = v4;
  }
  if ( (byte_14011D043 & 4) != 0 )
    McTemplateK0jqqqqqqqqqq_EtwWriteTransfer(
      v4,
      (_DWORD)a2,
      (_DWORD)a2 + 4008,
      (_DWORD)a2 + 4008,
      a2->PMAdvertisedCapabilities.Flags,
      a2->PMAdvertisedCapabilities.SupportedWoLPacketPatterns,
      a2->PMAdvertisedCapabilities.SupportedProtocolOffloads,
      SupportedWakeUpEvents,
      a2->PMAdvertisedCapabilities.MediaSpecificWakeUpEvents);
  return retstr;
}
