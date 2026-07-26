/*
 * XREFs of ?ndisXlatePMParametersToWakeUpEnableOid@@YAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B9B08
 * Callers:
 *     ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F5E0 (-ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostEnableWakeUp@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B6590 (-ndisOidPostEnableWakeUp@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisXlatePMParametersToWakeUpEnableOid(struct _NDIS_OID_REQUEST *a1)
{
  _QWORD *InformationBuffer; // r9
  unsigned int v2; // r8d
  int v3; // eax

  InformationBuffer = a1->DATA.QUERY_INFORMATION.InformationBuffer;
  v2 = ((unsigned int)HIDWORD(*InformationBuffer) >> 1) & 1 | 2;
  if ( (*InformationBuffer & 0x100000000LL) == 0 )
    v2 = ((unsigned int)HIDWORD(*InformationBuffer) >> 1) & 1;
  v3 = v2 | 4;
  if ( (InformationBuffer[1] & 0x100000000LL) == 0 )
    v3 = v2;
  *(_DWORD *)InformationBuffer = v3;
  *(_DWORD *)&a1->NdisReserved[80] = a1->DATA.QUERY_INFORMATION.InformationBufferLength;
  a1->DATA.QUERY_INFORMATION.InformationBufferLength = 4;
  a1->DATA.QUERY_INFORMATION.Oid = -50265850;
}
