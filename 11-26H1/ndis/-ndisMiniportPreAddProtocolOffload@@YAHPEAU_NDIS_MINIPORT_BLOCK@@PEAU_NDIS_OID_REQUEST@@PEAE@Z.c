/*
 * XREFs of ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400214B0
 * Callers:
 *     ?ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F390 (-ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLOAD@@K@Z @ 0x14001F850 (-ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLO.c)
 *     ?ndisComparePMProtocolOffloads@@YAEPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@0@Z @ 0x1400216B0 (-ndisComparePMProtocolOffloads@@YAEPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@0@Z.c)
 *     ?ndisIsPMProtocolOffloadSupported@@YAEW4_NDIS_PM_PROTOCOL_OFFLOAD_TYPE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140021790 (-ndisIsPMProtocolOffloadSupported@@YAEW4_NDIS_PM_PROTOCOL_OFFLOAD_TYPE@@PEAU_NDIS_MINIPORT_BLOCK.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qDL @ 0x140022DF0 (WPP_RECORDER_SF_qDL.c)
 *     WPP_RECORDER_SF_D @ 0x140057DA0 (WPP_RECORDER_SF_D_ea_140057DA0.c)
 *     ?ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140074560 (-ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1400B70D4 (-ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 */

__int64 __fastcall ndisMiniportPreAddProtocolOffload(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        char *a3)
{
  unsigned int v3; // edi
  _SINGLE_LIST_ENTRY *v5; // rsi
  struct _NDIS_PM_PROTOCOL_OFFLOAD *InformationBuffer; // rbp
  unsigned int ProtocolOffloadId; // edx
  _SINGLE_LIST_ENTRY *OidSourceHandle; // rax
  struct _SINGLE_LIST_ENTRY *p_PMProtocolOffloadList; // rcx
  _SINGLE_LIST_ENTRY *v12; // r13
  _SINGLE_LIST_ENTRY *Next; // rbx
  struct _NDIS_PACKET_PATTERN_ENTRY *PMProtocolOffloadEntry; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v15; // r10
  _SINGLE_LIST_ENTRY *v16; // rax
  unsigned int v18; // eax
  unsigned int Next_high; // eax
  unsigned int NewPatternEntryId; // eax
  __int64 v21; // r10
  char v22; // [rsp+28h] [rbp-40h]

  v3 = 0;
  v5 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x5Cu,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      a2);
  InformationBuffer = (struct _NDIS_PM_PROTOCOL_OFFLOAD *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
  *a3 = 1;
  if ( !ndisIsPMProtocolOffloadSupported(InformationBuffer->ProtocolOffloadType, a1) )
  {
    v3 = -1073741637;
    goto LABEL_15;
  }
  OidSourceHandle = (_SINGLE_LIST_ENTRY *)ndisGetOidSourceHandle(a2);
  p_PMProtocolOffloadList = &a1->PMProtocolOffloadList;
  v12 = OidSourceHandle;
  Next = a1->PMProtocolOffloadList.Next;
  if ( !Next )
  {
LABEL_9:
    if ( (InformationBuffer->Flags & 1) != 0 )
    {
      ProtocolOffloadId = InformationBuffer->ProtocolOffloadId;
      if ( ProtocolOffloadId < 0xFFFF || ndisPMPatternIdExist(p_PMProtocolOffloadList, ProtocolOffloadId) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v22 = ProtocolOffloadId;
          LOBYTE(ProtocolOffloadId) = 2;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            ProtocolOffloadId,
            14,
            93,
            (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
            v22);
        }
        v3 = -1073676267;
        goto LABEL_15;
      }
    }
    PMProtocolOffloadEntry = ndisCreatePMProtocolOffloadEntry(InformationBuffer, a2->PortNumber);
    v15 = PMProtocolOffloadEntry;
    if ( !PMProtocolOffloadEntry )
    {
      v3 = -1073741670;
      goto LABEL_15;
    }
    PMProtocolOffloadEntry->Source = v12;
    a1->OidContext = PMProtocolOffloadEntry;
    if ( (InformationBuffer->Flags & 1) != 0 )
    {
      v18 = InformationBuffer->ProtocolOffloadId;
      InformationBuffer->ProtocolOffloadId = v18;
      v15->WoLPattern.PatternId = v18;
      v15->Id = v18;
      if ( !v5 )
        goto LABEL_34;
    }
    else
    {
      if ( !v5 )
      {
        NewPatternEntryId = ndisGetNewPatternEntryId(&a1->PMProtocolOffloadList);
        InformationBuffer->ProtocolOffloadId = NewPatternEntryId;
        *(_DWORD *)(v21 + 196) = NewPatternEntryId;
        *(_DWORD *)(v21 + 40) = NewPatternEntryId;
LABEL_34:
        *a3 = 0;
        goto LABEL_15;
      }
      Next_high = HIDWORD(v5[24].Next);
      InformationBuffer->ProtocolOffloadId = Next_high;
      v15->WoLPattern.PatternId = Next_high;
      v15->Id = Next_high;
    }
    *a3 = 1;
    v15->DupLink.Next = v5 + 1;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v5 = Next;
    if ( ndisComparePMProtocolOffloads((struct _NDIS_PM_PROTOCOL_OFFLOAD *)&Next[6], InformationBuffer) )
      break;
    Next = Next->Next;
    if ( !Next )
    {
      v5 = 0LL;
LABEL_8:
      p_PMProtocolOffloadList = &a1->PMProtocolOffloadList;
      goto LABEL_9;
    }
  }
  v16 = Next + 1;
  if ( Next == (_SINGLE_LIST_ENTRY *)-8LL )
    goto LABEL_8;
  while ( v16[2].Next != v12 )
  {
    v16 = v16->Next;
    if ( !v16 )
      goto LABEL_8;
  }
  v3 = -1073676267;
LABEL_15:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      ProtocolOffloadId,
      11,
      94,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      *a3,
      v3);
  return v3;
}
