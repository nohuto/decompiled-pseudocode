/*
 * XREFs of ?ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001D900
 * Callers:
 *     ?ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F540 (-ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F790 (-GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 */

unsigned __int8 __fastcall ndisPreQueryPMParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  struct _NDIS_MINIPORT_BLOCK *MiniportFromReqTracker; // rax
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rsi
  struct _NDIS_MINIPORT_BLOCK *v7; // rbp
  unsigned int v8; // eax
  _NDIS_PM_PARAMETERS *p_PMCurrentParameters; // rsi
  __int64 v10; // rsi
  __int64 v11; // rcx
  int v12; // eax
  char v13; // dl
  __int16 v14; // r8

  v1 = *((_QWORD *)a1 + 4);
  MiniportFromReqTracker = GetMiniportFromReqTracker(a1);
  v6 = *(_QWORD *)(v5 + 24);
  v7 = MiniportFromReqTracker;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x30u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)MiniportFromReqTracker,
      v1);
  *((_DWORD *)a1 + 10) = 0;
  v8 = *(_DWORD *)(v1 + 48);
  if ( v8 < 0x10 )
  {
    *(_DWORD *)(v1 + 56) = 16;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v1 + 4) == 2 )
  {
    p_PMCurrentParameters = &v7->PMCurrentParameters;
LABEL_13:
    v11 = *(_QWORD *)(v1 + 40);
    *(_OWORD *)v11 = *(_OWORD *)&p_PMCurrentParameters->Header.Type;
    if ( v8 >= 0x14 )
    {
      v13 = 2;
      *(_DWORD *)(v11 + 16) = p_PMCurrentParameters->MediaSpecificWakeUpEvents;
      v12 = 20;
      v14 = 20;
    }
    else
    {
      v12 = 16;
      v13 = 1;
      v14 = 16;
    }
    *(_BYTE *)v11 = 0x80;
    *(_WORD *)(v11 + 2) = v14;
    *(_BYTE *)(v11 + 1) = v13;
    *(_DWORD *)(v1 + 52) = v12;
    *(_DWORD *)(v1 + 56) = 0;
    goto LABEL_17;
  }
  if ( *((_QWORD *)a1 + 3) )
  {
    p_PMCurrentParameters = (_NDIS_PM_PARAMETERS *)(v6 + 308);
    goto LABEL_13;
  }
  v10 = *((_QWORD *)a1 + 1);
  if ( v10 && (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
  {
    p_PMCurrentParameters = (_NDIS_PM_PARAMETERS *)(v10 + 728);
    goto LABEL_13;
  }
  *((_DWORD *)a1 + 10) = -1073741637;
LABEL_17:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      11,
      49,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)v7,
      *((_DWORD *)a1 + 10),
      1);
  }
  return 1;
}
