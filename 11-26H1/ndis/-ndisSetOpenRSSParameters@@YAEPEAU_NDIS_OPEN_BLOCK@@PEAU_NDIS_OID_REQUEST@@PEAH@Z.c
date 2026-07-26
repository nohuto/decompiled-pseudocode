/*
 * XREFs of ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400C1B9C
 * Callers:
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BF3A0 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000C5A0 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140023270 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z @ 0x140076FE0 (-ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140077A80 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memcmp @ 0x1400EA9E0 (memcmp.c)
 */

__int64 __fastcall ndisSetOpenRSSParameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  __int64 v3; // rax
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rsi
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // r14
  UINT v6; // r12d
  int *v7; // rdi
  UINT InformationBufferLength; // r8d
  int v11; // ebx
  _BYTE *InformationBuffer; // rdi
  unsigned __int8 v13; // dl
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // r9
  char v16; // al
  UINT v17; // ecx
  UINT v18; // eax
  __int16 v19; // r11
  unsigned __int16 v20; // r9
  __int64 Pool2; // rax
  unsigned __int8 *v22; // rax
  unsigned __int64 v23; // rcx
  int v24; // eax
  int v25; // ecx
  KIRQL v26; // dl
  unsigned int v27; // eax
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *v28; // rdi
  int v29; // edx
  int v30; // edx
  bool v31; // r8
  int v32; // eax
  bool v33; // dl
  int v34; // eax
  int v35; // ecx
  unsigned __int8 v36; // r8
  struct _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  int v38; // edx
  _NDIS_RECEIVE_SCALE_PARAMETERS *v39; // rax
  unsigned int v40; // ecx
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *v41; // rax
  char v43[8]; // [rsp+38h] [rbp-40h]
  __int16 v44; // [rsp+50h] [rbp-28h]
  unsigned int v45; // [rsp+54h] [rbp-24h]
  __int16 v46; // [rsp+54h] [rbp-24h]
  bool v47; // [rsp+54h] [rbp-24h]
  bool v48; // [rsp+58h] [rbp-20h]
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *RssParametersBuffer; // [rsp+60h] [rbp-18h]
  KIRQL NewIrql; // [rsp+C0h] [rbp+48h] BYREF
  size_t Size; // [rsp+C8h] [rbp+50h] BYREF
  int *v52; // [rsp+D0h] [rbp+58h]
  __int16 v53; // [rsp+D8h] [rbp+60h]

  v52 = a3;
  MiniportHandle = a1->MiniportHandle;
  NdisRSSParameters = 0LL;
  v6 = 0;
  LODWORD(Size) = 0;
  NewIrql = 0;
  v7 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    v3 = WPP_RECORDER_SF_qqq(
           *((_QWORD *)WPP_GLOBAL_Control + 8),
           4u,
           0xBu,
           0x73u,
           (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
           (char)MiniportHandle,
           (char)a1,
           a2);
  InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  LOBYTE(v3) = 1;
  v45 = v3;
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  if ( InformationBufferLength >= 0x1C )
  {
    InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    v13 = InformationBuffer[1];
    if ( v13 >= 2u )
    {
      v14 = *((_WORD *)InformationBuffer + 1);
      if ( v14 < 0x28u )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_11:
          v11 = -1073676268;
          goto LABEL_12;
        }
        v15 = 117;
LABEL_10:
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          v15,
          (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
          (char)MiniportHandle,
          a2);
        goto LABEL_11;
      }
      v18 = 40;
      if ( v13 >= 3u )
      {
        v18 = 44;
        if ( v14 < 0x2Cu )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_11;
          v15 = 118;
          goto LABEL_10;
        }
      }
      if ( InformationBufferLength < v18 )
      {
        a2->DATA.QUERY_INFORMATION.BytesNeeded = v18;
        v11 = -1073676268;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v43 = -1073676268;
          WPP_RECORDER_SF_qqL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xBu,
            0x77u,
            (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
            (char)MiniportHandle,
            (char)a2,
            *(_QWORD *)v43);
        }
        goto LABEL_12;
      }
    }
    v11 = ndisCalculateRssParametersSize(
            (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a2->DATA.QUERY_INFORMATION.InformationBuffer,
            (unsigned int *)&Size);
    if ( v11 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v43 = v11;
        WPP_RECORDER_SF_qqL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          0x78u,
          (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
          (char)MiniportHandle,
          (char)a2,
          *(_QWORD *)v43);
      }
      goto LABEL_25;
    }
    if ( !a1->NdisRSSParameters && ((InformationBuffer[4] & 0x10) != 0 || !InformationBuffer[8]) )
    {
LABEL_25:
      v6 = Size;
      goto LABEL_12;
    }
    if ( *((_WORD *)InformationBuffer + 6) <= 0x200u )
    {
      if ( *((_WORD *)InformationBuffer + 10) == v19 || (InformationBuffer[4] & 0x10) != 0 || !InformationBuffer[8] )
      {
        v6 = Size;
        if ( !(_DWORD)Size && (InformationBuffer[4] & 0x10) != 0 )
          v6 = *((unsigned __int16 *)InformationBuffer + 1);
        v11 = 0;
        if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= v6 )
        {
          if ( a1->NdisRSSParameters )
            NdisRSSParameters = a1->NdisRSSParameters;
          if ( (MiniportHandle->RssParametersBuffer
             || (Pool2 = ExAllocatePool2(72LL, 2216LL, 1936868430LL),
                 (MiniportHandle->RssParametersBuffer = (_NDIS_MINIPORT_RSS_PARAMETERS_CACHE *)Pool2) != 0LL))
            && (a1->RssParametersBuffer
             || (v22 = (unsigned __int8 *)ExAllocatePool2(72LL, 1108LL, 1936868430LL),
                 (a1->RssParametersBuffer = v22) != 0LL)) )
          {
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
            if ( !NdisRSSParameters )
              goto LABEL_73;
            LOBYTE(Size) = InformationBuffer[1];
            if ( NdisRSSParameters->Header.Revision != (_BYTE)Size )
              goto LABEL_73;
            if ( !InformationBuffer[8] )
              goto LABEL_73;
            v53 = *((_WORD *)InformationBuffer + 2);
            if ( (v53 & 0x10) != 0
              || NdisRSSParameters->IndirectionTableSize != *((_WORD *)InformationBuffer + 6)
              || memcmp(
                   &NdisRSSParameters->Header.Type + NdisRSSParameters->IndirectionTableOffset,
                   &InformationBuffer[*((unsigned int *)InformationBuffer + 4)],
                   NdisRSSParameters->IndirectionTableSize)
              || NdisRSSParameters->HashSecretKeySize != *((_WORD *)InformationBuffer + 10)
              || NdisRSSParameters->BaseCpuNumber != *((_WORD *)InformationBuffer + 3)
              || NdisRSSParameters->Flags != v53
              || memcmp(
                   &NdisRSSParameters->Header.Type + NdisRSSParameters->HashSecretKeyOffset,
                   &InformationBuffer[*((unsigned int *)InformationBuffer + 6)],
                   NdisRSSParameters->HashSecretKeySize) )
            {
              goto LABEL_73;
            }
            v23 = *(_QWORD *)&NdisRSSParameters->Header.Type - *(_QWORD *)InformationBuffer;
            if ( *(_QWORD *)&NdisRSSParameters->Header.Type == *(_QWORD *)InformationBuffer )
              v23 = NdisRSSParameters->HashInformation - (unsigned __int64)*((unsigned int *)InformationBuffer + 2);
            if ( v23
              || (unsigned __int8)Size >= 2u
              && ((v24 = *((_DWORD *)InformationBuffer + 8), NdisRSSParameters->NumberOfProcessorMasks != v24)
               || (v25 = *((_DWORD *)InformationBuffer + 9), NdisRSSParameters->ProcessorMasksEntrySize != v25)
               || memcmp(
                    &NdisRSSParameters->Header.Type + NdisRSSParameters->ProcessorMasksOffset,
                    &InformationBuffer[*((unsigned int *)InformationBuffer + 7)],
                    (unsigned int)(v25 * v24))
               || InformationBuffer[1] >= 3u
               && (NdisRSSParameters->DefaultProcessorNumber.Group != *((_WORD *)InformationBuffer + 20)
                || NdisRSSParameters->DefaultProcessorNumber.Number != InformationBuffer[42])) )
            {
LABEL_73:
              if ( v6 <= 0x454 )
              {
                RssParametersBuffer = MiniportHandle->RssParametersBuffer;
                memmove(RssParametersBuffer->Oid, InformationBuffer, v6);
                if ( ndisIsRssEnabledForMiniport(MiniportHandle) )
                {
                  v28 = MiniportHandle->RssParametersBuffer;
                  v29 = *(_DWORD *)&RssParametersBuffer->Oid[8];
                  LOBYTE(v53) = RssParametersBuffer->Oid[1];
                  v30 = *(_DWORD *)&v28->Combined[8] ^ v29;
                  LOBYTE(Size) = v28->Combined[1];
                  v31 = 0;
                  if ( !(_BYTE)v30 )
                    v31 = (_BYTE)Size == (unsigned __int8)v53;
                  v46 = *(_WORD *)&v28->Combined[4] & 0x10;
                  v48 = v31;
                  v44 = *(_WORD *)&RssParametersBuffer->Oid[4] & 0x10;
                  if ( *(_WORD *)&v28->Combined[12] != *(_WORD *)&RssParametersBuffer->Oid[12] )
                    goto LABEL_83;
                  v32 = memcmp(
                          &v28->Combined[*(unsigned int *)&v28->Combined[16]],
                          &RssParametersBuffer->Oid[*(unsigned int *)&RssParametersBuffer->Oid[16]],
                          *(unsigned __int16 *)&RssParametersBuffer->Oid[12]);
                  v33 = 0;
                  if ( v46 == v44 )
                    v33 = v48;
                  v47 = v33;
                  if ( v32 )
LABEL_83:
                    v47 = 0;
                  if ( (unsigned __int8)Size >= 2u && (unsigned __int8)v53 >= 2u )
                  {
                    v34 = *(_DWORD *)&RssParametersBuffer->Oid[32];
                    if ( *(_DWORD *)&v28->Combined[32] != v34
                      || (v35 = *(_DWORD *)&RssParametersBuffer->Oid[36], *(_DWORD *)&v28->Combined[36] != v35)
                      || memcmp(
                           &v28->Combined[*(unsigned int *)&v28->Combined[28]],
                           &RssParametersBuffer->Oid[*(unsigned int *)&RssParametersBuffer->Oid[28]],
                           (unsigned int)(v35 * v34)) )
                    {
                      v47 = 0;
                    }
                    if ( (unsigned __int8)Size >= 3u
                      && (unsigned __int8)v53 >= 3u
                      && (*(_WORD *)&v28->Combined[40] != *(_WORD *)&RssParametersBuffer->Oid[40]
                       || v28->Combined[42] != RssParametersBuffer->Oid[42]) )
                    {
                      v47 = 0;
                    }
                  }
                  v36 = *(_WORD *)&v28->Combined[20] == *(_WORD *)&RssParametersBuffer->Oid[20]
                     && !memcmp(
                           &v28->Combined[*(unsigned int *)&v28->Combined[24]],
                           &RssParametersBuffer->Oid[*(unsigned int *)&RssParametersBuffer->Oid[24]],
                           *(unsigned __int16 *)&RssParametersBuffer->Oid[20])
                     && v47;
                  OpenQueue = MiniportHandle->OpenQueue;
                  v38 = *(_DWORD *)&RssParametersBuffer->Oid[8] & 0xFFFF00;
                  while ( OpenQueue )
                  {
                    v39 = OpenQueue->NdisRSSParameters;
                    if ( v39 && OpenQueue != a1 )
                      v38 |= v39->HashInformation & 0xFFFF00;
                    OpenQueue = OpenQueue->MiniportNextOpen;
                  }
                  *(_DWORD *)&RssParametersBuffer->Oid[8] = v38 | (unsigned __int8)*(_DWORD *)&RssParametersBuffer->Oid[8];
                  v40 = v36;
                  if ( v38 != (*(_DWORD *)&v28->Combined[8] & 0xFFFF00) )
                    v40 = 0;
                  v45 = v40;
                }
                else
                {
                  LOBYTE(v27) = 0;
                  v45 = v27;
                }
              }
              else
              {
                v11 = -1073676268;
              }
            }
            v26 = NewIrql;
            MiniportHandle->MiniportThread = 0LL;
            KeReleaseSpinLock(&MiniportHandle->Lock, v26);
          }
          else
          {
            v11 = -1073741670;
          }
        }
        else
        {
          a2->DATA.QUERY_INFORMATION.BytesNeeded = v6;
          v11 = -1073676268;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v7 = v52;
            goto LABEL_13;
          }
          *(_DWORD *)v43 = -1073676268;
          WPP_RECORDER_SF_qqL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xBu,
            0x7Bu,
            (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
            (char)MiniportHandle,
            (char)a1,
            *(_QWORD *)v43);
        }
LABEL_12:
        v7 = v52;
        goto LABEL_13;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_33;
      v20 = 122;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_33:
        v11 = -1073676267;
        goto LABEL_25;
      }
      v20 = 121;
    }
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      v20,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      a1);
    goto LABEL_33;
  }
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
  v11 = -1073676268;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v43 = -1073676268;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0x74u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      *(_QWORD *)v43);
  }
LABEL_13:
  v16 = v45;
  v17 = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  if ( (_BYTE)v45 == 1 )
  {
    a2->DATA.QUERY_INFORMATION.BytesWritten = v17;
  }
  else
  {
    *(_QWORD *)&a2->NdisReserved[80] = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    *(_DWORD *)&a2->NdisReserved[88] = v17;
    v41 = MiniportHandle->RssParametersBuffer;
    a2->DATA.QUERY_INFORMATION.InformationBufferLength = v6;
    a2->DATA.QUERY_INFORMATION.InformationBuffer = v41->Oid;
    v16 = v45;
  }
  *v7 = v11;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x7Cu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      v16,
      v11);
  if ( v11 && (byte_14011D044 & 4) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      MiniportHandle->IfIndex,
      &SetOpenRSSCapsFailed,
      &MiniportHandle->InterfaceGuid,
      (__int64)&MiniportHandle->InterfaceGuid,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      v11,
      1,
      (char)a1);
  return v45;
}
