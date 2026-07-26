/*
 * XREFs of ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x14013F7AC
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x140080DC0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qccL @ 0x1400A8388 (WPP_RECORDER_SF_qccL.c)
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x14014050C (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisMSetPacketDirectAttributes(
        _QWORD *a1,
        const union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  int v6; // ebx
  unsigned int Flags; // eax
  unsigned __int8 DmaAddressWidth; // cl
  int v9; // eax
  char v10; // cl
  int v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+30h] [rbp-28h]

  v4 = a1[686];
  if ( !v4 )
  {
    v6 = -1073741637;
    goto LABEL_29;
  }
  if ( a2->Header.Revision != 1 )
    goto LABEL_28;
  if ( a2->Header.Size < 9u )
    goto LABEL_28;
  Flags = a2->GeneralAttributes.Flags;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    goto LABEL_28;
  DmaAddressWidth = a2->PacketDirectAttributes.DmaAddressWidth;
  if ( (Flags & 1) == 0 )
  {
    if ( !DmaAddressWidth )
    {
      v9 = 64;
      goto LABEL_11;
    }
    if ( (unsigned __int8)(DmaAddressWidth - 32) <= 0x20u )
    {
      v9 = a2->PacketDirectAttributes.DmaAddressWidth;
LABEL_11:
      v10 = 0;
      goto LABEL_14;
    }
LABEL_28:
    v6 = -1073741811;
    goto LABEL_29;
  }
  if ( DmaAddressWidth )
    goto LABEL_28;
  v10 = 1;
  v9 = 0;
LABEL_14:
  *(_DWORD *)(v4 + 20) = v9;
  *(_BYTE *)(v4 + 14) = v10;
  if ( (a2->GeneralAttributes.Flags & 2) != 0 )
  {
    if ( !*(_QWORD *)(a1[470] + 1136LL) )
    {
      v6 = -1073741808;
      goto LABEL_29;
    }
    *(_BYTE *)(v4 + 13) = 1;
  }
  if ( *(_BYTE *)(v4 + 12) )
  {
    v6 = ndisPDInitializeMiniportBufferManagement((struct _NDIS_PD_BLOCK *)v4);
    if ( v6 == -1073740007 )
    {
      if ( !*(_DWORD *)(v4 + 16) )
        goto LABEL_29;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x1Du,
          0x10u,
          (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
          (char)a1,
          *(_DWORD *)(v4 + 16));
      *(_DWORD *)(v4 + 8) |= 0x80000001;
      *(_DWORD *)(v4 + 16) = 0;
      v6 = ndisPDInitializeMiniportBufferManagement((struct _NDIS_PD_BLOCK *)v4);
    }
  }
  else
  {
    v6 = 0;
  }
  if ( v6 < 0 )
  {
LABEL_29:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = v6;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x1Du,
        0x12u,
        (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
        (char)a1,
        v13);
    }
    return (unsigned int)v6;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = *(_BYTE *)(v4 + 14) == 0;
    WPP_RECORDER_SF_qccL(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)a2, a3, a4, v12);
  }
  return (unsigned int)v6;
}
