/*
 * XREFs of ?ndisXlateWakeUpEnableToPMParametersOid@@YAHPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B9EB8
 * Callers:
 *     ?ndisOidPostPMParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140062E90 (-ndisOidPostPMParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B8950 (-ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisConvertWakeUpEnableToPMConfig@@YAXKPEAU_NDIS_PM_PARAMETERS@@G@Z @ 0x1400B59C8 (-ndisConvertWakeUpEnableToPMConfig@@YAXKPEAU_NDIS_PM_PARAMETERS@@G@Z.c)
 */

__int64 __fastcall ndisXlateWakeUpEnableToPMParametersOid(struct _NDIS_OID_REQUEST *a1)
{
  unsigned int v1; // eax
  unsigned int v3; // r11d

  v1 = *(_DWORD *)&a1->NdisReserved[80];
  if ( v1 >= 0x10 )
  {
    ndisConvertWakeUpEnableToPMConfig(
      *(_DWORD *)a1->DATA.QUERY_INFORMATION.InformationBuffer,
      (struct _NDIS_PM_PARAMETERS *)a1->DATA.QUERY_INFORMATION.InformationBuffer,
      2 - (v1 < 0x14));
    a1->DATA.QUERY_INFORMATION.Oid = -50265847;
    a1->DATA.QUERY_INFORMATION.InformationBufferLength = *(_DWORD *)&a1->NdisReserved[80];
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
