/*
 * XREFs of NdisAllocateCloneOidRequest @ 0x140024000
 * Callers:
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140023BB0 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qDDqq @ 0x140023A40 (WPP_RECORDER_SF_qDDqq.c)
 */

NDIS_STATUS __stdcall NdisAllocateCloneOidRequest(
        NDIS_HANDLE SourceHandle,
        PNDIS_OID_REQUEST OidRequest,
        UINT PoolTag,
        PNDIS_OID_REQUEST *ClonedOidRequest)
{
  NDIS_STATUS v5; // esi
  char v6; // bp
  PNDIS_OID_REQUEST v8; // rdi
  _BYTE *v9; // rbx
  __int64 v11; // rcx
  _BYTE *Pool2; // rax
  int v13; // edx
  char Revision; // al
  __int16 v15; // cx
  bool v16; // cf
  NDIS_REQUEST_TYPE RequestType; // ecx
  UINT InformationBufferLength; // edx
  __int64 Oid; // r9
  UINT BytesWritten; // ecx
  __int64 v21; // r8
  int v22; // eax
  __int128 v23; // xmm0
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  USHORT Size; // dx
  __int64 v28; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]

  v5 = 0;
  v6 = 0;
  v8 = OidRequest;
  v9 = 0LL;
  if ( (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x20) == 0
    && *(_BYTE *)SourceHandle != 18
    && ((*(_BYTE *)SourceHandle - 5) & 0xEF) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(OidRequest) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)OidRequest,
        11,
        10,
        (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids,
        (char)SourceHandle);
    }
    v5 = -1073741811;
    goto LABEL_7;
  }
  if ( *(_BYTE *)SourceHandle != 18 && (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x20) == 0 )
  {
    if ( *(_BYTE *)SourceHandle == 5 )
    {
      v11 = *((_QWORD *)SourceHandle + 2);
      if ( *(_BYTE *)(v11 + 100) <= 6u && (*(_BYTE *)(v11 + 100) != 6 || *(_BYTE *)(v11 + 101) < 0x32u) )
        goto LABEL_14;
    }
LABEL_29:
    v6 = 1;
    goto LABEL_14;
  }
  v28 = *((_QWORD *)SourceHandle + 3);
  if ( *(_BYTE *)(v28 + 56) > 6u || *(_BYTE *)(v28 + 56) == 6 && *(_BYTE *)(v28 + 57) >= 0x32u )
    goto LABEL_29;
LABEL_14:
  Pool2 = (_BYTE *)ExAllocatePool2(64LL, 248LL, PoolTag);
  v9 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = -106;
    if ( !v6 )
    {
      Revision = 1;
      v15 = 236;
      goto LABEL_17;
    }
    Revision = v8->Header.Revision;
    if ( Revision == 1 )
    {
      Size = v8->Header.Size;
      if ( Size >= 0xECu )
      {
LABEL_27:
        v15 = Size;
LABEL_17:
        *((_WORD *)v9 + 1) = v15;
        v9[1] = Revision;
        v16 = v8->Header.Revision < 2u;
        RequestType = v8->RequestType;
        *((_DWORD *)v9 + 2) = v8->PortNumber;
        *((_QWORD *)v9 + 2) = v8->RequestId;
        *((_DWORD *)v9 + 3) = v8->Timeout;
        *((_QWORD *)v9 + 3) = v8->RequestHandle;
        v9[232] = v8->SupportedRevision;
        *((_DWORD *)v9 + 1) = RequestType;
        if ( !v16 || (*(_DWORD *)&v8->NdisReserved[16] & 0x4000) != 0 )
        {
          *((_DWORD *)v9 + 60) = v8[1].Header;
          *((_DWORD *)v9 + 61) = v8[1].RequestType;
        }
        InformationBufferLength = v8->DATA.QUERY_INFORMATION.InformationBufferLength;
        if ( RequestType == NdisRequestMethod )
        {
          *((_DWORD *)v9 + 16) = v8->DATA.METHOD_INFORMATION.BytesRead;
          *((_DWORD *)v9 + 17) = v8->DATA.METHOD_INFORMATION.BytesNeeded;
          *((_DWORD *)v9 + 15) = v8->DATA.METHOD_INFORMATION.BytesWritten;
          *((_DWORD *)v9 + 12) = InformationBufferLength;
        }
        Oid = v8->DATA.QUERY_INFORMATION.Oid;
        *((_DWORD *)v9 + 8) = Oid;
        *((_DWORD *)v9 + 14) = v8->DATA.QUERY_INFORMATION.BytesNeeded;
        BytesWritten = v8->DATA.QUERY_INFORMATION.BytesWritten;
        *((_QWORD *)v9 + 5) = v8->DATA.QUERY_INFORMATION.InformationBuffer;
        *((_DWORD *)v9 + 12) = InformationBufferLength;
        *((_DWORD *)v9 + 13) = BytesWritten;
        v21 = *(unsigned int *)&v8->NdisReserved[16];
        v22 = *((_DWORD *)v9 + 22);
        v23 = *(_OWORD *)&v8->NdisReserved[96];
        *((_QWORD *)v9 + 12) = v8;
        v24 = v22 ^ ((unsigned __int16)v21 ^ (unsigned __int16)v22) & 0x8000 ^ ((unsigned __int8)v21 ^ (unsigned __int8)v22) & 0x80;
        v25 = v24 ^ ((unsigned __int8)v21 ^ (unsigned __int8)v24) & 4 ^ (v21 ^ v24 ^ ((unsigned __int8)v21 ^ (unsigned __int8)v24) & 4) & 0x80000;
        *((_DWORD *)v9 + 38) = *(_DWORD *)&v8->NdisReserved[80];
        v9[144] = v8->NdisReserved[72];
        v26 = v25 ^ ((unsigned int)v21 ^ v25) & 0x800000 ^ ((unsigned int)v21 ^ v25 ^ ((unsigned int)v21 ^ v25) & 0x800000) & 0x1000000;
        LODWORD(v26) = v26 | 0x4000;
        *((_DWORD *)v9 + 22) = v26 ^ (v21 ^ v26) & 0x30000000;
        *(_OWORD *)(v9 + 168) = v23;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDDqq(*((_QWORD *)WPP_GLOBAL_Control + 8), v26, v21, Oid, BugCheckParameter4);
        goto LABEL_7;
      }
    }
    else if ( Revision == 2 )
    {
      Size = v8->Header.Size;
      if ( Size >= 0xF8u )
        goto LABEL_27;
    }
    KeBugCheckEx(0x7Cu, 0x21uLL, (ULONG_PTR)SourceHandle, (ULONG_PTR)v8, 0LL);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      11,
      11,
      (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids,
      (char)v8);
  }
  v5 = -1073741670;
LABEL_7:
  *ClonedOidRequest = (PNDIS_OID_REQUEST)v9;
  return v5;
}
