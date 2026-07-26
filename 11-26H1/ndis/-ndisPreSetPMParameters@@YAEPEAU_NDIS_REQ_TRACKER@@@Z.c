/*
 * XREFs of ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F5E0
 * Callers:
 *     ?ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F540 (-ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B8950 (-ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F790 (-GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIsValidPMConfig@@YAEPEAU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001F7D0 (-ndisIsValidPMConfig@@YAEPEAU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x140070440 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisSetMiniportEnableWakeUp@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B8BF4 (-ndisSetMiniportEnableWakeUp@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlatePMParametersToWakeUpEnableOid@@YAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B9B08 (-ndisXlatePMParametersToWakeUpEnableOid@@YAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisPreSetPMParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  unsigned __int8 v2; // si
  struct _NDIS_MINIPORT_BLOCK *MiniportFromReqTracker; // rax
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // r14
  struct _NDIS_MINIPORT_BLOCK *v8; // rbp
  struct _NDIS_PM_PARAMETERS *v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // cf
  int v15; // eax
  unsigned __int8 v16; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 1;
  v16 = 1;
  MiniportFromReqTracker = GetMiniportFromReqTracker(a1);
  v7 = *(_QWORD *)(v6 + 24);
  v8 = MiniportFromReqTracker;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x32u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)MiniportFromReqTracker,
      v1);
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x10u )
  {
    *(_DWORD *)(v1 + 56) = 16;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_13;
  }
  v9 = *(struct _NDIS_PM_PARAMETERS **)(v1 + 40);
  if ( v9->Header.Type != 0x80 || !v9->Header.Revision || v9->Header.Size < 0x10u )
  {
    *((_DWORD *)a1 + 10) = -1073676267;
    goto LABEL_13;
  }
  if ( !ndisIsValidPMConfig(v9, v8) )
  {
    *((_DWORD *)a1 + 10) = -1073741811;
    goto LABEL_13;
  }
  if ( *((_QWORD *)a1 + 3) )
  {
    v12 = v7 + 308;
    goto LABEL_25;
  }
  v10 = *((_QWORD *)a1 + 1);
  if ( v10 && (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
  {
    v12 = v10 + 728;
LABEL_25:
    v13 = *(_QWORD *)(v1 + 40);
    v14 = *(_DWORD *)(v1 + 48) < 0x14u;
    *(_OWORD *)v12 = *(_OWORD *)v13;
    if ( !v14 )
      *(_DWORD *)(v12 + 16) = *(_DWORD *)(v13 + 16);
    ndisGetCombinedPMConfig(v8, &v8->PMCurrentParameters);
    v16 = 0;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_12;
  if ( v8->MajorNdisVersion <= 6u && (v8->MajorNdisVersion != 6 || v8->MinorNdisVersion < 0x14u) )
  {
    ndisXlatePMParametersToWakeUpEnableOid((struct _NDIS_OID_REQUEST *)v1);
    v15 = ndisSetMiniportEnableWakeUp(v8, (struct _NDIS_OID_REQUEST *)v1, &v16);
    v2 = v16;
    *((_DWORD *)a1 + 10) = v15;
    if ( v2 == 1 )
      goto LABEL_13;
  }
  if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) == &ndisIntReqGeneric
    || (v8->DriverHandle->MiniportDriverCharacteristics.Flags & 8) != 0 )
  {
LABEL_12:
    v2 = 0;
  }
  else
  {
    v2 = 1;
  }
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      11,
      51,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)v8,
      *((_DWORD *)a1 + 10),
      v2);
  }
  return v2;
}
