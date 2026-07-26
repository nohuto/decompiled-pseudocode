/*
 * XREFs of ?ndisSetTaskOffloadValidate@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C27B4
 * Callers:
 *     ?ndisPreTaskOffloadSet@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400C0868 (-ndisPreTaskOffloadSet@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x14005C970 (NdisConvertNtStatusToNdisStatus.c)
 */

__int64 __fastcall ndisSetTaskOffloadValidate(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  unsigned __int64 InformationBufferLength; // rbp
  unsigned int v4; // r9d
  _NDIS_MINIPORT_BLOCK *Miniport; // r15
  char *InformationBuffer; // rax
  __int64 v7; // rdi
  char *i; // rsi
  unsigned int v9; // edx
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  __int64 v14; // r14
  unsigned int v15; // ecx
  int v16; // eax

  InformationBufferLength = a3->DATA.QUERY_INFORMATION.InformationBufferLength;
  v4 = 0;
  Miniport = a2;
  if ( !a2 )
    Miniport = a1->Miniport;
  if ( (unsigned int)InformationBufferLength >= 0x1C
    && (InformationBuffer = (char *)a3->DATA.QUERY_INFORMATION.InformationBuffer,
        *(_QWORD *)InformationBuffer == 0x1C00000001LL)
    && (v7 = *((unsigned int *)InformationBuffer + 3), (unsigned int)v7 <= (unsigned int)InformationBufferLength) )
  {
    if ( (_DWORD)v7 )
    {
      for ( i = &InformationBuffer[v7]; ; i += v14 )
      {
        v9 = v7;
        if ( (unsigned int)v7 >= 0xFFFFFFE8 )
          break;
        if ( (unsigned __int64)(unsigned int)v7 + 24 > InformationBufferLength )
          break;
        v10 = *((_DWORD *)i + 4);
        v11 = v10 + v7;
        if ( v10 + (int)v7 < (unsigned int)v7 )
          break;
        if ( v11 > (unsigned int)InformationBufferLength )
          break;
        v12 = v11 + 20;
        if ( v12 < 0x14 || v12 > (unsigned int)InformationBufferLength )
          break;
        if ( *((_DWORD *)i + 2) == 2 )
        {
          if ( v10 == 16
            && (Offload = Miniport->Offload, *((_DWORD *)i + 6) <= Offload->TopCapabilities.LsoV1.IPv4.MaxOffLoadSize) )
          {
            if ( *((_DWORD *)i + 7) < Offload->TopCapabilities.LsoV1.IPv4.MinSegmentCount )
              v4 = -1073676267;
          }
          else
          {
            v4 = -1073676267;
          }
        }
        v14 = *((unsigned int *)i + 3);
        if ( !(_DWORD)v14 )
          return v4;
        v15 = v14 + v7;
        v16 = -1;
        if ( (int)v14 + (int)v7 >= (unsigned int)v7 )
          v16 = v14 + v7;
        LODWORD(v7) = v16;
        v4 = NdisConvertNtStatusToNdisStatus(v15 < v9 ? 0xC0000095 : 0);
        if ( v4 )
          break;
      }
      return (unsigned int)-1073676267;
    }
  }
  else
  {
    return (unsigned int)-1073676267;
  }
  return v4;
}
