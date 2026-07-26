/*
 * XREFs of ?ndisOidPostAddPMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140065CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisInsertPatternListEntry@@YAXPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z @ 0x14006F000 (-ndisInsertPatternListEntry@@YAXPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x140070440 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z @ 0x14008EE20 (-ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z.c)
 *     ?ndisEnablePMParamForProtocolOffload@@YAXPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1400B5DC4 (-ndisEnablePMParamForProtocolOffload@@YAXPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@PEAU_NDIS_PM_PARAMETERS@.c)
 */

void __fastcall ndisOidPostAddPMProtocolOffload(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r14
  struct _NDIS_MINIPORT_BLOCK *v4; // rsi
  void *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  void *OidContext; // rcx
  struct _NDIS_PACKET_PATTERN_ENTRY *v10; // r9
  _SINGLE_LIST_ENTRY *p_DupLink; // rcx
  _SINGLE_LIST_ENTRY *Next; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  void *v16; // rcx
  unsigned int PatternEffectivePriority; // eax
  __int64 v18; // r8

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_QWORD *)a1 + 3);
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( (*(_DWORD *)(v1 + 88) & 0xC0000) == 0 )
  {
    if ( *((_DWORD *)a1 + 10) )
    {
      if ( v3 )
      {
        v16 = *(void **)(v1 + 160);
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
      }
      if ( *((_QWORD *)a1 + 1) )
      {
        if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
        {
          v5 = *(void **)(v1 + 160);
          if ( v5 )
            ExFreePoolWithTag(v5, 0);
        }
      }
      if ( *(_QWORD *)a1 )
      {
        OidContext = v4->OidContext;
        v4->OidContext = 0LL;
        if ( OidContext )
          ExFreePoolWithTag(OidContext, 0);
        if ( *(_DWORD *)(v1 + 48) >= 0x98u )
          *(_DWORD *)(*(_QWORD *)(v1 + 40) + 148LL) = 0;
      }
    }
    else
    {
      if ( v4 )
      {
        v10 = (struct _NDIS_PACKET_PATTERN_ENTRY *)v4->OidContext;
        p_DupLink = &v10->DupLink;
        v4->OidContext = 0LL;
        Next = v10->DupLink.Next;
        if ( Next )
        {
          p_DupLink->Next = 0LL;
          p_DupLink->Next = Next->Next;
          Next->Next = p_DupLink;
          PatternEffectivePriority = ndisGetPatternEffectivePriority((struct _NDIS_PACKET_PATTERN_ENTRY *)&Next[-1]);
          *(_DWORD *)(v18 + 28) = PatternEffectivePriority;
        }
        else
        {
          ndisInsertPatternListEntry(&v4->PMProtocolOffloadList, v10);
          *(_DWORD *)(v13 + 36) = *(_DWORD *)(v13 + 32);
        }
        if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) == &ndisIntReqWmi )
        {
          ndisEnablePMParamForProtocolOffload(*(struct _NDIS_PM_PROTOCOL_OFFLOAD **)(v1 + 40), &v4->PMWmiParameters);
          ndisGetCombinedPMConfig(v4, &v4->PMCurrentParameters);
        }
      }
      if ( *((_QWORD *)a1 + 3) )
      {
        v14 = *(_QWORD *)(v1 + 40);
        v15 = *(_QWORD *)(v1 + 160);
        *(_DWORD *)(v15 + 196) = *(_DWORD *)(v14 + 148);
        *(_DWORD *)(v15 + 40) = *(_DWORD *)(v14 + 148);
        *(_QWORD *)v15 = *(_QWORD *)(v3 + 512);
        *(_QWORD *)(v3 + 512) = v15;
      }
      v6 = *((_QWORD *)a1 + 1);
      if ( v6 && (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
      {
        v7 = *(_QWORD *)(v1 + 40);
        v8 = *(_QWORD *)(v1 + 160);
        *(_DWORD *)(v8 + 196) = *(_DWORD *)(v7 + 148);
        *(_DWORD *)(v8 + 40) = *(_DWORD *)(v7 + 148);
        *(_QWORD *)v8 = *(_QWORD *)(v6 + 720);
        *(_QWORD *)(v6 + 720) = v8;
      }
    }
  }
}
