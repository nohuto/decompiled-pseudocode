/*
 * XREFs of ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14000EF30
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14000E8F0 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14000F160 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x14000F6A0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140041C80 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x140052A20 (NdisMIndicateStatusEx.c)
 *     NdisMResetMiniport @ 0x1400A43C0 (NdisMResetMiniport.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

__int64 __fastcall ndisMOidRequest(_QWORD *a1, struct _NDIS_OID_REQUEST *a2)
{
  struct _NDIS_OID_REQUEST *v2; // rbx
  __int64 v4; // rdx
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  NDIS_REQUEST_TYPE RequestType; // eax
  NDIS_OID Oid; // ecx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v11; // ecx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-98h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+30h] [rbp-88h] BYREF

  v2 = a2;
  LOBYTE(a2) = 6;
  if ( (unsigned __int8)ndisReferenceOpenByHandle(a1, a2) )
  {
    v5 = (struct _NDIS_MINIPORT_BLOCK *)a1[2];
    if ( (v5->DriverVerifyFlags & 0x400) == 0 )
      v2->SupportedRevision = 1;
    RequestType = v2->RequestType;
    if ( RequestType == NdisRequestSetInformation )
    {
      if ( v2->DATA.QUERY_INFORMATION.Oid == 66058 )
      {
        if ( v2->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
        {
          v11 = *(_DWORD *)v2->DATA.QUERY_INFORMATION.InformationBuffer;
          *((_DWORD *)&StatusIndication.Header + 1) = 0;
          v13 = v11;
          memset(&StatusIndication.Guid, 0, 52);
          StatusIndication.StatusBuffer = &v13;
          memset(&StatusIndication.PortNumber, 0, 32);
          StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
          StatusIndication.SourceHandle = v5;
          StatusIndication.StatusCode = 1073807384;
          StatusIndication.StatusBufferSize = 4;
          NdisMIndicateStatusEx(v5, &StatusIndication);
          LOBYTE(v12) = 6;
          v9 = 0;
          ndisMDereferenceOpenUnlocked(a1, v12);
          return v9;
        }
        v9 = -1073676266;
LABEL_24:
        LOBYTE(v4) = 6;
        ndisMDereferenceOpenUnlocked(a1, v4);
        return v9;
      }
      if ( v2->DATA.QUERY_INFORMATION.Oid == 66066 )
      {
        if ( (*(_DWORD *)(a1[3] + 64LL) & 0x20000000) != 0 )
        {
          v9 = 0;
          NdisMResetMiniport(v5);
        }
        else
        {
          v9 = -1073741637;
        }
        goto LABEL_24;
      }
    }
    else if ( RequestType == NdisRequestQueryInformation && v2->DATA.QUERY_INFORMATION.Oid == 66059 )
    {
      if ( v2->DATA.QUERY_INFORMATION.InformationBufferLength >= 8 )
      {
        *(_QWORD *)v2->DATA.QUERY_INFORMATION.InformationBuffer = v5->MediaSpecificAttributes;
        v2->DATA.QUERY_INFORMATION.BytesWritten = v5->MediaSpecificAttributes != 0LL ? 8 : 0;
        v9 = 0;
      }
      else
      {
        v9 = -1073676268;
      }
      goto LABEL_24;
    }
    *(_OWORD *)v2->NdisReserved = 0LL;
    *(_OWORD *)&v2->NdisReserved[16] = 0LL;
    *(_OWORD *)&v2->NdisReserved[32] = 0LL;
    *(_OWORD *)&v2->NdisReserved[48] = 0LL;
    *(_OWORD *)&v2->NdisReserved[64] = 0LL;
    *(_OWORD *)&v2->NdisReserved[80] = 0LL;
    *(_OWORD *)&v2->NdisReserved[96] = 0LL;
    *(_DWORD *)&v2->NdisReserved[16] |= 0x20u;
    *(_QWORD *)&v2->NdisReserved[32] = a1;
    EtwActivityIdControl(3u, (LPGUID)&v2->NdisReserved[96]);
    if ( v2->RequestType != NdisRequestSetInformation
      || (Oid = v2->DATA.QUERY_INFORMATION.Oid, Oid != -50265846)
      && (((Oid + 50265845) & 0xFFFFFFF9) != 0 || Oid == -50265839) )
    {
      v8 = ndisQueueOidRequest(v2, v5, 0LL, 0LL);
    }
    else
    {
      v8 = ndisOidPMAddRemove(v5, 0LL, v2);
    }
    v9 = v8;
    if ( v8 == 259 )
      return v9;
    goto LABEL_24;
  }
  return 3221291010LL;
}
