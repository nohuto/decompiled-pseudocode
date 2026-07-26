/*
 * XREFs of ?ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140061D60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x140061FB0 (-ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisMiniportPreRemoveWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x14006CD20 (-ndisMiniportPreRemoveWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisPreRemoveMiniportWakeUpPattern@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B7888 (-ndisPreRemoveMiniportWakeUpPattern@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B9C44 (-ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 */

__int64 __fastcall ndisOidPrePMRemoveWOLPattern(struct _NDIS_REQ_TRACKER *a1)
{
  unsigned __int8 v1; // di
  struct _NDIS_MINIPORT_BLOCK *v2; // rbp
  __int64 v4; // rsi
  struct _SINGLE_LIST_ENTRY *v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // edx
  struct _SINGLE_LIST_ENTRY *v9; // rcx
  _DWORD *v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  unsigned __int8 v15; // al
  int v16; // eax
  char v17[8]; // [rsp+30h] [rbp-38h]
  unsigned __int8 v18; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = *((_QWORD *)a1 + 4);
  v5 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 3);
  v18 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x56u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)v2,
      v4);
  v6 = *((_QWORD *)a1 + 3);
  if ( v6 )
  {
    v12 = *(_QWORD *)(v6 + 24);
    if ( *(_BYTE *)(v12 + 56) == 6 )
    {
      if ( *(_BYTE *)(v12 + 57) < 0x14u )
        goto LABEL_18;
    }
    else if ( *(_BYTE *)(v12 + 56) <= 6u )
    {
      goto LABEL_18;
    }
  }
  v7 = *((_QWORD *)a1 + 1);
  if ( !v7 )
    goto LABEL_6;
  if ( (*(_DWORD *)(v4 + 88) & 0x4000) != 0 )
    goto LABEL_6;
  v13 = *(_QWORD *)(v7 + 16);
  if ( *(_BYTE *)(v13 + 100) > 6u )
    goto LABEL_6;
  if ( *(_BYTE *)(v13 + 100) != 6 )
  {
LABEL_18:
    v10 = (_DWORD *)((char *)a1 + 40);
    v1 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_13;
  }
  if ( *(_BYTE *)(v13 + 101) < 0x14u )
  {
    v10 = (_DWORD *)((char *)a1 + 40);
    v1 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_13;
  }
LABEL_6:
  if ( *(_DWORD *)(v4 + 4) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    v1 = 1;
    goto LABEL_12;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v4 + 48) < 4u )
  {
    *(_DWORD *)(v4 + 56) = 4;
    v1 = 1;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_12;
  }
  *(_DWORD *)(v4 + 56) = 0;
  v8 = **(_DWORD **)(v4 + 40);
  *(_DWORD *)(v4 + 152) = v8;
  if ( *((_QWORD *)a1 + 3) && !ndisFindPatternEntry(v5 + 63, v8) )
  {
    *((_DWORD *)a1 + 10) = -1073676261;
    v1 = 1;
    goto LABEL_12;
  }
  v9 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 1);
  if ( v9 && (*(_DWORD *)(v4 + 88) & 0x4000) == 0 && !ndisFindPatternEntry(v9 + 89, v8) )
  {
    *((_DWORD *)a1 + 10) = -1073676261;
    v1 = 1;
    goto LABEL_12;
  }
  if ( !*(_QWORD *)a1 )
  {
LABEL_12:
    v10 = (_DWORD *)((char *)a1 + 40);
    goto LABEL_13;
  }
  if ( v2->MajorNdisVersion > 6u || v2->MajorNdisVersion == 6 && v2->MinorNdisVersion >= 0x14u )
  {
    v16 = ndisMiniportPreRemoveWOLPattern(v2, (struct _NDIS_OID_REQUEST *)v4, &v18);
    v1 = v18;
    *((_DWORD *)a1 + 10) = v16;
    goto LABEL_12;
  }
  v14 = ndisXlateRemoveWolPatternToPacketPatternOid(v2, (struct _NDIS_OID_REQUEST *)v4, &v18);
  v1 = v18;
  v10 = (_DWORD *)((char *)a1 + 40);
  *((_DWORD *)a1 + 10) = v14;
  if ( v1 != 1 )
  {
    *((_DWORD *)a1 + 10) = 0;
    v15 = ndisPreRemoveMiniportWakeUpPattern(v2, (struct _NDIS_OID_REQUEST *)v4);
    v10 = (_DWORD *)((char *)a1 + 40);
    v1 = v15;
    if ( v15 != 1 )
      goto LABEL_12;
  }
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v17 = *v10;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x57u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      *(_QWORD *)a1,
      *(_QWORD *)v17);
  }
  return v1;
}
