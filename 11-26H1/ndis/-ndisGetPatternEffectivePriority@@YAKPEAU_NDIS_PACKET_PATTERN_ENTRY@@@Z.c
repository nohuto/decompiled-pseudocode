/*
 * XREFs of ?ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z @ 0x14008EE20
 * Callers:
 *     ?ndisOidPostAddPMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140065CD0 (-ndisOidPostAddPMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14006AE10 (-ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMiniportPostAddWOLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14006EF40 (-ndisMiniportPostAddWOLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMiniportPostRemoveWoLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B6230 (-ndisMiniportPostRemoveWoLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetPatternEffectivePriority(struct _NDIS_PACKET_PATTERN_ENTRY *a1)
{
  _SINGLE_LIST_ENTRY *p_DupLink; // rdx
  __int64 result; // rax
  unsigned int Next; // ecx

  p_DupLink = &a1->DupLink;
  result = 0xFFFFFFFFLL;
  if ( a1 != (struct _NDIS_PACKET_PATTERN_ENTRY *)-8LL )
  {
    do
    {
      Next = (unsigned int)p_DupLink[3].Next;
      p_DupLink = p_DupLink->Next;
      if ( Next >= (unsigned int)result )
        Next = result;
      result = Next;
    }
    while ( p_DupLink );
  }
  return result;
}
