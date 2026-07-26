/*
 * XREFs of ?ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z @ 0x14000DD20
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14000F160 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x14000F6A0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140041C80 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisCompleteOidRequestToRequest@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z @ 0x140067AD0 (-ndisCompleteOidRequestToRequest@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z.c)
 */

__int64 __fastcall ndisLegacyRequest(_QWORD *a1, struct _NDIS_REQUEST *a2)
{
  struct _NDIS_REQUEST *v2; // r14
  char v4; // bp
  __int64 Pool2; // rax
  __int64 v6; // rdx
  struct _NDIS_OID_REQUEST *v7; // rbx
  struct _NDIS_MINIPORT_BLOCK *v8; // rdx
  _NDIS_REQUEST_TYPE RequestType; // ecx
  unsigned int InformationBufferLength; // r8d
  void *InformationBuffer; // rcx
  unsigned int BytesWritten; // r9d
  unsigned int BytesNeeded; // r10d
  unsigned int v14; // esi

  v2 = a2;
  if ( *(_BYTE *)(a1[3] + 56LL) < 6u )
  {
    LOBYTE(a2) = 6;
    v4 = ndisReferenceOpenByHandle(a1, a2);
    if ( v4 )
    {
      Pool2 = ExAllocatePool2(64LL, 248LL, 1701987406LL);
      v7 = (struct _NDIS_OID_REQUEST *)Pool2;
      if ( Pool2 )
      {
        v8 = (struct _NDIS_MINIPORT_BLOCK *)a1[2];
        RequestType = v2->RequestType;
        *(_DWORD *)(Pool2 + 4) = RequestType;
        *(_DWORD *)Pool2 = 16253334;
        if ( (v8->DriverVerifyFlags & 0x400) == 0 )
          *(_BYTE *)(Pool2 + 232) = 1;
        if ( RequestType == NdisRequestMethod )
        {
          v14 = -1073741811;
        }
        else
        {
          InformationBufferLength = v2->DATA.QUERY_INFORMATION.InformationBufferLength;
          InformationBuffer = v2->DATA.QUERY_INFORMATION.InformationBuffer;
          BytesWritten = v2->DATA.QUERY_INFORMATION.BytesWritten;
          BytesNeeded = v2->DATA.QUERY_INFORMATION.BytesNeeded;
          *(_DWORD *)(Pool2 + 32) = v2->DATA.QUERY_INFORMATION.Oid;
          *(_QWORD *)(Pool2 + 40) = InformationBuffer;
          *(_DWORD *)(Pool2 + 48) = InformationBufferLength;
          *(_DWORD *)(Pool2 + 52) = BytesWritten;
          *(_DWORD *)(Pool2 + 56) = BytesNeeded;
          *(_DWORD *)(Pool2 + 88) |= 0x20u;
          *(_QWORD *)(Pool2 + 96) = v2;
          *(_QWORD *)(Pool2 + 104) = a1;
          v14 = ndisQueueOidRequest((struct _NDIS_OID_REQUEST *)Pool2, v8, 0LL, 0LL);
          if ( v14 == 259 )
            return v14;
        }
        ndisCompleteOidRequestToRequest(a1, v7, v14);
        v14 = 259;
      }
      else
      {
        v14 = -1073741670;
      }
      if ( v4 == 1 )
      {
        LOBYTE(v6) = 6;
        ndisMDereferenceOpenUnlocked(a1, v6);
      }
      return v14;
    }
    return (unsigned int)-1073676286;
  }
  return 3221291012LL;
}
