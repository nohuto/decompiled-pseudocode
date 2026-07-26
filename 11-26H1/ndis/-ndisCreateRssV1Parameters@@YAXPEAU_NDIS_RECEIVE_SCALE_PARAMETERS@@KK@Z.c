/*
 * XREFs of ?ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z @ 0x1400AED98
 * Callers:
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1400AEB60 (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400AFC14 (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS_V2@@2@Z @ 0x1400B1134 (-ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_.c)
 * Callees:
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall ndisCreateRssV1Parameters(struct _NDIS_RECEIVE_SCALE_PARAMETERS *a1, __int16 a2, unsigned int a3)
{
  int v6; // eax

  memset(a1, 0, 0x454uLL);
  a1->HashSecretKeyOffset = 44;
  v6 = (unsigned __int16)(4 * a2);
  a1->IndirectionTableSize = v6;
  a1->ProcessorMasksOffset = v6 + 84;
  a1->Header = (_NDIS_OBJECT_HEADER)2884480;
  a1->HashSecretKeySize = 40;
  a1->IndirectionTableOffset = 84;
  a1->NumberOfProcessorMasks = a3;
  a1->ProcessorMasksEntrySize = 16;
  a1->DefaultProcessorNumber.Reserved = 1;
}
