/*
 * XREFs of ?ndisUpdateWmiPMParamsForProtocolOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B92F4
 * Callers:
 *     ?ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14006AE10 (-ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisEnablePMParamForProtocolOffload@@YAXPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1400B5DC4 (-ndisEnablePMParamForProtocolOffload@@YAXPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@PEAU_NDIS_PM_PARAMETERS@.c)
 */

void __fastcall ndisUpdateWmiPMParamsForProtocolOffloads(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r10
  _SINGLE_LIST_ENTRY *i; // rax
  _SINGLE_LIST_ENTRY *j; // r9
  struct _NDIS_PM_PARAMETERS v4; // [rsp+20h] [rbp-28h] BYREF

  memset(&v4, 0, sizeof(v4));
  v1 = a1;
  for ( i = a1->PMProtocolOffloadList.Next; i; i = i->Next )
  {
    for ( j = i + 1; j; j = j->Next )
    {
      if ( j[2].Next == (_SINGLE_LIST_ENTRY *)&ndisIntReqWmi )
        ndisEnablePMParamForProtocolOffload((struct _NDIS_PM_PROTOCOL_OFFLOAD *)&i[6], &v4);
    }
  }
  v1->PMWmiParameters.EnabledProtocolOffloads = v4.EnabledProtocolOffloads;
}
