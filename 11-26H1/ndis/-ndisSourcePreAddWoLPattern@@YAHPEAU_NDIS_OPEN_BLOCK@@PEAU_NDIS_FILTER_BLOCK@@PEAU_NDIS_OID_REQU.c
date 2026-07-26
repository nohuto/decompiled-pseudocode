/*
 * XREFs of ?ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x14001DDE0
 * Callers:
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F940 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Ld @ 0x14005D7A0 (WPP_RECORDER_SF_Ld.c)
 *     ?ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z @ 0x140070570 (-ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z.c)
 *     ?ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008C950 (-ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1400B5C94 (-ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z.c)
 */

__int64 __fastcall ndisSourcePreAddWoLPattern(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3,
        char *a4)
{
  struct _NDIS_FILTER_BLOCK *v6; // r15
  unsigned int v8; // ebx
  struct _NDIS_PM_WOL_PATTERN *InformationBuffer; // rbp
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdx
  int v11; // edx
  _SINGLE_LIST_ENTRY *Next; // rdi
  struct _NDIS_PACKET_PATTERN_ENTRY *WoLPatternEntry; // rcx

  v6 = a2;
  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      54,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a3);
  }
  InformationBuffer = (struct _NDIS_PM_WOL_PATTERN *)a3->DATA.QUERY_INFORMATION.InformationBuffer;
  *a4 = 1;
  if ( a1 )
    MiniportHandle = a1->MiniportHandle;
  else
    MiniportHandle = v6->Miniport;
  if ( ndisIsWoLPacketTypeSupported(InformationBuffer->WoLPacketType, MiniportHandle) )
  {
    if ( a1 )
      Next = a1->WOLPatternList.Next;
    else
      Next = v6->WOLPatternList.Next;
    if ( Next )
    {
      while ( !ndisCompareWoLPatterns((struct _NDIS_PM_WOL_PATTERN *)&Next[6], InformationBuffer) )
      {
        Next = Next->Next;
        if ( !Next )
          goto LABEL_17;
      }
      v8 = -1073676267;
    }
    else
    {
LABEL_17:
      WoLPatternEntry = ndisCreateWoLPatternEntry(InformationBuffer, a3->PortNumber);
      if ( WoLPatternEntry )
      {
        WoLPatternEntry->Source = *(void **)&a3->NdisReserved[32];
        *(_QWORD *)&a3->NdisReserved[88] = WoLPatternEntry;
        *a4 = 0;
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
  else
  {
    v8 = -1073741637;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      11,
      55,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      *a4,
      v8);
  }
  return v8;
}
