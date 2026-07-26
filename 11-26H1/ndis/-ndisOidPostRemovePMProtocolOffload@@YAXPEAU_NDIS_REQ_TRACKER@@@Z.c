/*
 * XREFs of ?ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14006AE10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x140067F20 (-ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x140070440 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z @ 0x14008EE20 (-ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z.c)
 *     ?ndisUpdateWmiPMParamsForProtocolOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B92F4 (-ndisUpdateWmiPMParamsForProtocolOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisOidPostRemovePMProtocolOffload(struct _NDIS_REQ_TRACKER *a1)
{
  struct _SINGLE_LIST_ENTRY *v2; // r14
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  __int64 v4; // rsi
  int v5; // ebp
  _SINGLE_LIST_ENTRY *OidSourceHandle; // rax
  _QWORD *p_Next; // rcx
  _SINGLE_LIST_ENTRY *v8; // r8
  struct _NDIS_PACKET_PATTERN_ENTRY *Next; // r9
  struct _SINGLE_LIST_ENTRY *v10; // rcx
  _SINGLE_LIST_ENTRY *v11; // rdx
  _SINGLE_LIST_ENTRY *p_DupLink; // rax
  _SINGLE_LIST_ENTRY *v13; // r10
  unsigned int PatternEffectivePriority; // eax
  __int64 v15; // r9
  struct _NDIS_PACKET_PATTERN_ENTRY *v16; // r8
  unsigned int v17; // eax
  __int64 v18; // r8

  v2 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 3);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = *((_QWORD *)a1 + 4);
  if ( *((_DWORD *)a1 + 10) )
    return;
  v5 = **(_DWORD **)(v4 + 40);
  if ( !v3 )
    goto LABEL_5;
  OidSourceHandle = (_SINGLE_LIST_ENTRY *)ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v4);
  p_Next = &v3->PMProtocolOffloadList.Next;
  v8 = OidSourceHandle;
  Next = (struct _NDIS_PACKET_PATTERN_ENTRY *)v3->PMProtocolOffloadList.Next;
  if ( Next )
  {
    while ( Next->WoLPattern.PatternId != v5 )
    {
      p_Next = &Next->Link.Next;
      Next = (struct _NDIS_PACKET_PATTERN_ENTRY *)Next->Link.Next;
      if ( !Next )
        return;
    }
    v11 = 0LL;
    p_DupLink = &Next->DupLink;
    if ( Next != (struct _NDIS_PACKET_PATTERN_ENTRY *)-8LL )
    {
      while ( 1 )
      {
        v13 = p_DupLink - 1;
        if ( p_DupLink[2].Next == v8 )
          break;
        v11 = p_DupLink;
        p_DupLink = p_DupLink->Next;
        if ( !p_DupLink )
          return;
      }
      if ( v11 )
      {
        v11->Next = p_DupLink->Next;
        PatternEffectivePriority = ndisGetPatternEffectivePriority(Next);
        *(_DWORD *)(v15 + 36) = PatternEffectivePriority;
      }
      else if ( p_DupLink->Next )
      {
        v16 = (struct _NDIS_PACKET_PATTERN_ENTRY *)&p_DupLink->Next[-1];
        *p_Next = v16;
        v16->Link.Next = Next->Link.Next;
        v17 = ndisGetPatternEffectivePriority(v16);
        *(_DWORD *)(v18 + 36) = v17;
      }
      else
      {
        *p_Next = Next->Link.Next;
      }
      ExFreePoolWithTag(v13, 0);
      if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v4) == &ndisIntReqWmi )
      {
        ndisUpdateWmiPMParamsForProtocolOffloads(v3);
        ndisGetCombinedPMConfig(v3, &v3->PMCurrentParameters);
      }
LABEL_5:
      if ( *((_QWORD *)a1 + 3) )
        ndisDeletePatternEntry(v2 + 64, v5);
      v10 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 1);
      if ( v10 )
      {
        if ( (*(_DWORD *)(v4 + 88) & 0x4000) == 0 )
          ndisDeletePatternEntry(v10 + 90, v5);
      }
    }
  }
}
