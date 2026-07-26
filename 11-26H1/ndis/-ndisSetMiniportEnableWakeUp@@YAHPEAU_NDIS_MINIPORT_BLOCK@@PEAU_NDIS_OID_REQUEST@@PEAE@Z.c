/*
 * XREFs of ?ndisSetMiniportEnableWakeUp@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B8BF4
 * Callers:
 *     ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F5E0 (-ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B8950 (-ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall ndisSetMiniportEnableWakeUp(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int8 *a3)
{
  unsigned int v6; // edi
  _DWORD *InformationBuffer; // rcx
  char v9[4]; // [rsp+38h] [rbp-20h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x12u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      a2);
  v6 = 0;
  *a3 = 1;
  if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
  {
    InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( (a1->PnPCapabilities & 0x100) != 0 )
      *InformationBuffer &= ~2u;
    *InformationBuffer &= ~4u;
    *a3 = 0;
  }
  else
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 4;
    v6 = -1073676268;
    a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = v6;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x13u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v9);
  }
  return v6;
}
