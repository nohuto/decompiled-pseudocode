/*
 * XREFs of ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B62F4
 * Callers:
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F940 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B6660 (-ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qDL @ 0x140022DF0 (WPP_RECORDER_SF_qDL.c)
 *     WPP_RECORDER_SF_D @ 0x140057DA0 (WPP_RECORDER_SF_D_ea_140057DA0.c)
 *     ?ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z @ 0x140070570 (-ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z.c)
 *     ?ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140074560 (-ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008C950 (-ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1400B5C94 (-ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z.c)
 *     ?ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1400B70D4 (-ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 */

__int64 __fastcall ndisMiniportPreAddWoLPattern(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        char *a3)
{
  unsigned int v3; // ebx
  char *v4; // rsi
  _SINGLE_LIST_ENTRY *v5; // rdi
  struct _NDIS_PM_WOL_PATTERN *InformationBuffer; // r14
  unsigned int PatternId; // edx
  int v10; // r8d
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // eax
  _SINGLE_LIST_ENTRY *OidSourceHandle; // r12
  _SINGLE_LIST_ENTRY *Next; // rsi
  _SINGLE_LIST_ENTRY *i; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *WoLPatternEntry; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v16; // r10
  int Next_high; // eax
  _NDIS_PM_WOL_PACKET WoLPacketType; // eax
  char v20[8]; // [rsp+28h] [rbp-40h]

  v3 = 0;
  v4 = a3;
  v5 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x38u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      a2);
  InformationBuffer = (struct _NDIS_PM_WOL_PATTERN *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
  *v4 = 1;
  if ( !ndisIsWoLPacketTypeSupported(InformationBuffer->WoLPacketType, a1) )
  {
    if ( v10 != 2
      || (MinMagicPacketWakeUp = a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp,
          MinMagicPacketWakeUp != NdisDeviceStateD1)
      && (unsigned int)(MinMagicPacketWakeUp - 3) > 1 )
    {
      v3 = -1073741637;
      goto LABEL_42;
    }
  }
  OidSourceHandle = (_SINGLE_LIST_ENTRY *)ndisGetOidSourceHandle(a2);
  Next = a1->WOLPatternList.Next;
  if ( Next )
  {
    while ( 1 )
    {
      v5 = Next;
      if ( ndisCompareWoLPatterns((struct _NDIS_PM_WOL_PATTERN *)&Next[6], InformationBuffer) )
        break;
      Next = Next->Next;
      if ( !Next )
      {
        v5 = 0LL;
        goto LABEL_12;
      }
    }
    for ( i = Next + 1; i; i = i->Next )
    {
      if ( i[2].Next == OidSourceHandle )
      {
        v3 = -1073676267;
        goto LABEL_24;
      }
    }
  }
LABEL_12:
  if ( (InformationBuffer->Flags & 1) != 0 )
  {
    PatternId = InformationBuffer->PatternId;
    if ( PatternId < 0xFFFF || ndisPMPatternIdExist(&a1->WOLPatternList, PatternId) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v20 = PatternId;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x39u,
          (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
          *(_QWORD *)v20);
      }
      v4 = a3;
      v3 = -1073676267;
      goto LABEL_42;
    }
  }
  WoLPatternEntry = ndisCreateWoLPatternEntry(InformationBuffer, a2->PortNumber);
  v16 = WoLPatternEntry;
  if ( WoLPatternEntry )
  {
    WoLPatternEntry->Source = OidSourceHandle;
    a1->OidContext = WoLPatternEntry;
    if ( (InformationBuffer->Flags & 1) != 0 )
    {
      Next_high = InformationBuffer->PatternId;
      goto LABEL_39;
    }
    if ( a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x55u) )
    {
LABEL_32:
      if ( v5 )
        Next_high = HIDWORD(v5[24].Next);
      else
        Next_high = ndisGetNewPatternEntryId(&a1->WOLPatternList);
      goto LABEL_39;
    }
    WoLPacketType = InformationBuffer->WoLPacketType;
    if ( WoLPacketType == NdisPMWoLPacketMagicPacket )
    {
      Next_high = 65534;
    }
    else
    {
      if ( WoLPacketType != NdisPMWoLPacketEapolRequestIdMessage )
        goto LABEL_32;
      Next_high = 65533;
    }
LABEL_39:
    v4 = a3;
    InformationBuffer->PatternId = Next_high;
    v16->WoLPattern.PatternId = Next_high;
    v16->Id = Next_high;
    if ( v5 )
    {
      *a3 = 1;
      v16->DupLink.Next = v5 + 1;
    }
    else
    {
      *a3 = 0;
    }
    goto LABEL_42;
  }
  v3 = -1073741670;
LABEL_24:
  v4 = a3;
LABEL_42:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      PatternId,
      0xBu,
      0x3Au,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      *v4,
      v3);
  return v3;
}
