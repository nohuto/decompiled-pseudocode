/*
 * XREFs of ?ndisOidPreRemovePMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140067550
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x140061FB0 (-ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 */

__int64 __fastcall ndisOidPreRemovePMProtocolOffload(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  struct _SINGLE_LIST_ENTRY *v3; // r14
  unsigned __int8 v4; // si
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  _DWORD *v8; // r8
  int v9; // edx
  struct _SINGLE_LIST_ENTRY *v10; // rcx
  void *OidSourceHandle; // rax
  int v12; // edx
  __int64 *v13; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  char v19[8]; // [rsp+30h] [rbp-28h]

  v1 = *((_QWORD *)a1 + 4);
  v3 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 3);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x67u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      v5,
      v1);
  v6 = *((_QWORD *)a1 + 3);
  if ( v6 )
  {
    v18 = *(_QWORD *)(v6 + 24);
    if ( *(_BYTE *)(v18 + 56) <= 6u && (*(_BYTE *)(v18 + 56) != 6 || *(_BYTE *)(v18 + 57) < 0x14u) )
      goto LABEL_39;
  }
  v7 = *((_QWORD *)a1 + 1);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
    {
      v15 = *(_QWORD *)(v7 + 16);
      if ( *(_BYTE *)(v15 + 100) <= 6u )
      {
        if ( *(_BYTE *)(v15 + 100) != 6 )
        {
LABEL_39:
          v8 = (_DWORD *)((char *)a1 + 40);
          *((_DWORD *)a1 + 10) = -1073741637;
          goto LABEL_13;
        }
        if ( *(_BYTE *)(v15 + 101) < 0x14u )
        {
          v8 = (_DWORD *)((char *)a1 + 40);
          *((_DWORD *)a1 + 10) = -1073741637;
          goto LABEL_13;
        }
      }
    }
  }
  v8 = (_DWORD *)((char *)a1 + 40);
  if ( *(_DWORD *)(v1 + 4) != 1 )
  {
    *v8 = -1073741637;
    goto LABEL_13;
  }
  *v8 = 0;
  if ( *(_DWORD *)(v1 + 48) < 4u )
  {
    *(_DWORD *)(v1 + 56) = 4;
    *v8 = -1073676268;
    goto LABEL_13;
  }
  *(_DWORD *)(v1 + 56) = 0;
  v9 = **(_DWORD **)(v1 + 40);
  if ( *((_QWORD *)a1 + 3) && !ndisFindPatternEntry(v3 + 64, v9) )
    goto LABEL_12;
  v10 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 1);
  if ( v10 )
  {
    if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 && !ndisFindPatternEntry(v10 + 90, v9) )
      goto LABEL_12;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_14;
  OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
  v13 = *(__int64 **)(v5 + 976);
  if ( !v13 )
    goto LABEL_12;
  while ( *((_DWORD *)v13 + 49) != v12 )
  {
    v13 = (__int64 *)*v13;
    if ( !v13 )
      goto LABEL_12;
  }
  v16 = v13 + 1;
  v17 = v16;
  if ( !v16 )
  {
LABEL_12:
    *v8 = -1073676261;
LABEL_13:
    v4 = 1;
    goto LABEL_14;
  }
  while ( (void *)v17[2] != OidSourceHandle )
  {
    v17 = (_QWORD *)*v17;
    if ( !v17 )
      goto LABEL_12;
  }
  if ( *v16 )
    goto LABEL_13;
LABEL_14:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v19 = *v8;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x68u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      *(_QWORD *)a1,
      *(_QWORD *)v19);
  }
  return v4;
}
