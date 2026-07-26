/*
 * XREFs of ?ndisComparePMProtocolOffloads@@YAEPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@0@Z @ 0x1400216B0
 * Callers:
 *     ?ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x140021330 (-ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID.c)
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400214B0 (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     memcmp @ 0x1400EA9E0 (memcmp.c)
 */

char __fastcall ndisComparePMProtocolOffloads(
        struct _NDIS_PM_PROTOCOL_OFFLOAD *a1,
        struct _NDIS_PM_PROTOCOL_OFFLOAD *a2)
{
  _NDIS_PM_PROTOCOL_OFFLOAD_TYPE ProtocolOffloadType; // eax
  char v3; // bl
  __int32 v6; // eax
  __int32 v7; // eax
  unsigned __int64 v8; // rcx

  ProtocolOffloadType = a1->ProtocolOffloadType;
  v3 = 0;
  if ( ProtocolOffloadType != a2->ProtocolOffloadType )
    return 0;
  if ( ProtocolOffloadType != NdisPMProtocolOffload80211RSNRekeyV2 )
  {
    v6 = ProtocolOffloadType - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 || memcmp(&a1->ProtocolOffloadParameters, &a2->ProtocolOffloadParameters, 0x30uLL) )
          return v3;
      }
      else if ( memcmp(&a1->ProtocolOffloadParameters, &a2->ProtocolOffloadParameters, 0x4CuLL) )
      {
        return v3;
      }
    }
    else
    {
      v8 = *(_QWORD *)&a1->ProtocolOffloadParameters.IPv4ARPParameters.Flags
         - *(_QWORD *)&a2->ProtocolOffloadParameters.IPv4ARPParameters.Flags;
      if ( !v8 )
      {
        v8 = a1->ProtocolOffloadParameters.Dot11RSNRekeyParametersV2.KeyReplayCounter
           - a2->ProtocolOffloadParameters.Dot11RSNRekeyParametersV2.KeyReplayCounter;
        if ( !v8 )
          v8 = a1->ProtocolOffloadParameters.Dot11RSNRekeyParametersV2.AuthAlgo
             - (unsigned __int64)a2->ProtocolOffloadParameters.Dot11RSNRekeyParametersV2.AuthAlgo;
      }
      if ( v8 )
        return v3;
    }
    return 1;
  }
  if ( !memcmp(&a1->ProtocolOffloadParameters, &a2->ProtocolOffloadParameters, 0x60uLL) )
    return 1;
  return v3;
}
