/*
 * XREFs of SetSrbSenseData @ 0x140117078
 * Callers:
 *     FormInquiryStandardData @ 0x1400FFE1C (FormInquiryStandardData.c)
 *     NvmeMapStatus @ 0x140100B88 (NvmeMapStatus.c)
 *     NvmeNamespaceExecuteScsiSrb @ 0x140104C20 (NvmeNamespaceExecuteScsiSrb.c)
 *     NvmeNamespaceExecuteScsiSrbEx @ 0x14010569C (NvmeNamespaceExecuteScsiSrbEx.c)
 *     NvmeNamespaceProcessQueueRequests @ 0x140108FE8 (NvmeNamespaceProcessQueueRequests.c)
 *     NvmeNamespaceProcessRequest @ 0x140109418 (NvmeNamespaceProcessRequest.c)
 *     ScsiInquiryRequest @ 0x1401167F4 (ScsiInquiryRequest.c)
 *     ScsiSecurityProtocolIn @ 0x140116984 (ScsiSecurityProtocolIn.c)
 *     ScsiSecurityProtocolOut @ 0x140116A44 (ScsiSecurityProtocolOut.c)
 *     ScsiToNVMeCommand @ 0x140116B04 (ScsiToNVMeCommand.c)
 *     NvmeNamespacePopulateInquiryBlockLimitsData @ 0x1401172A0 (NvmeNamespacePopulateInquiryBlockLimitsData.c)
 *     NvmeNamespacePopulateInquiryBlockProvisioningData @ 0x140117468 (NvmeNamespacePopulateInquiryBlockProvisioningData.c)
 *     NvmeNamespacePopulateInquiryDeviceCharacteristicsData @ 0x140117558 (NvmeNamespacePopulateInquiryDeviceCharacteristicsData.c)
 *     NvmeNamespacePopulateInquiryDeviceIdentifiersData @ 0x1401175B0 (NvmeNamespacePopulateInquiryDeviceIdentifiersData.c)
 *     NvmeNamespacePopulateInquirySerialNumberData @ 0x140117688 (NvmeNamespacePopulateInquirySerialNumberData.c)
 *     NvmeNamespacePopulateInquiryVpdSupportedPagesData @ 0x14011783C (NvmeNamespacePopulateInquiryVpdSupportedPagesData.c)
 *     NvmeNamespacePopulateLogSenseInformationalExceptions @ 0x140117898 (NvmeNamespacePopulateLogSenseInformationalExceptions.c)
 *     NvmeNamespacePopulateLogSenseTemperature @ 0x140117990 (NvmeNamespacePopulateLogSenseTemperature.c)
 *     NvmeNamespaceScsiInquiryRequest @ 0x140117AC4 (NvmeNamespaceScsiInquiryRequest.c)
 *     NvmeNamespaceScsiLogSenseRequest @ 0x140117C60 (NvmeNamespaceScsiLogSenseRequest.c)
 *     NvmeNamespaceScsiModeSelectRequest @ 0x140117DCC (NvmeNamespaceScsiModeSelectRequest.c)
 *     NvmeNamespaceScsiModeSenseRequest @ 0x140117FC8 (NvmeNamespaceScsiModeSenseRequest.c)
 *     NvmeNamespaceScsiReadCapacityRequest @ 0x1401182B4 (NvmeNamespaceScsiReadCapacityRequest.c)
 *     NvmeNamespaceScsiReadWriteRequest @ 0x140118588 (NvmeNamespaceScsiReadWriteRequest.c)
 *     NvmeNamespaceScsiSyncCacheRequest @ 0x140118768 (NvmeNamespaceScsiSyncCacheRequest.c)
 *     NvmeNamespaceScsiUnmapRequest @ 0x14011889C (NvmeNamespaceScsiUnmapRequest.c)
 * Callees:
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

unsigned __int8 __fastcall SetSrbSenseData(__int64 a1, char a2, char a3, char a4, unsigned __int8 a5)
{
  _DWORD *v5; // rbx
  bool v7; // zf
  unsigned __int8 result; // al
  char v9; // r10
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  void *v16; // rsi
  char v17; // r10
  unsigned int v18; // r11d
  __int64 i; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // ecx
  char v25; // r10
  unsigned __int8 v26; // bp
  unsigned int v27; // r11d
  __int64 v28; // r9
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  int v32; // ecx
  int v33; // ecx
  unsigned int v34; // ebx
  __int128 Src; // [rsp+20h] [rbp-28h] BYREF
  __int16 v36; // [rsp+30h] [rbp-18h]

  *(_BYTE *)(a1 + 3) = a2;
  v36 = 0;
  v5 = (_DWORD *)(a1 + 20);
  Src = 0LL;
  LOBYTE(Src) = -16;
  BYTE7(Src) = 10;
  v7 = *(_BYTE *)(a1 + 2) == 40;
  BYTE2(Src) = a3 & 0xF;
  result = a5;
  BYTE12(Src) = a4;
  BYTE13(Src) = a5;
  if ( v7 )
  {
    v9 = 0;
    if ( !*v5 )
    {
      v10 = 0LL;
      if ( *(_DWORD *)(a1 + 56) )
      {
        while ( 1 )
        {
          v11 = *(unsigned int *)(a1 + 4 * v10 + 120);
          if ( (unsigned int)v11 >= 0x80 )
          {
            v12 = *(unsigned int *)(a1 + 16);
            if ( (unsigned int)v11 < (unsigned int)v12 )
              break;
          }
LABEL_11:
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 56) )
            goto LABEL_17;
        }
        v13 = (unsigned int)v11;
        v14 = *(_DWORD *)(v11 + a1) - 64;
        if ( !v14 )
          goto LABEL_9;
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
          {
LABEL_9:
            if ( v13 + 40 <= v12 )
            {
              *(_BYTE *)(v13 + a1 + 8) = 2;
              goto LABEL_17;
            }
          }
        }
        else if ( v13 + 56 <= v12 )
        {
          v9 = 1;
          *(_BYTE *)(v13 + a1 + 8) = 2;
        }
        if ( v9 )
          goto LABEL_17;
        goto LABEL_11;
      }
    }
  }
  else
  {
    *(_BYTE *)(a1 + 4) = 2;
  }
LABEL_17:
  v16 = 0LL;
  if ( *(_BYTE *)(a1 + 2) != 40 )
  {
    v26 = *(_BYTE *)(a1 + 11);
    v16 = *(void **)(a1 + 32);
    goto LABEL_49;
  }
  v17 = 0;
  if ( !*v5 )
  {
    v18 = *(_DWORD *)(a1 + 56);
    for ( i = 0LL; (unsigned int)i < v18; i = (unsigned int)(i + 1) )
    {
      v20 = *(unsigned int *)(a1 + 4 * i + 120);
      if ( (unsigned int)v20 >= 0x80 )
      {
        v21 = *(unsigned int *)(a1 + 16);
        if ( (unsigned int)v20 < (unsigned int)v21 )
        {
          v22 = (unsigned int)v20;
          v23 = *(_DWORD *)(v20 + a1) - 64;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              if ( v24 == 1 && v22 + 40 <= v21 )
              {
                v16 = *(void **)(v22 + a1 + 24);
                break;
              }
            }
            else if ( v22 + 56 <= v21 )
            {
              v16 = *(void **)(v22 + a1 + 16);
              v17 = 1;
            }
          }
          else if ( v22 + 40 <= v21 )
          {
            v16 = *(void **)(v22 + a1 + 16);
            break;
          }
          if ( v17 )
            break;
        }
      }
    }
  }
  v25 = 0;
  v26 = 0;
  if ( !*v5 )
  {
    v27 = *(_DWORD *)(a1 + 56);
    v28 = 0LL;
    if ( v27 )
    {
      while ( 1 )
      {
        v29 = *(unsigned int *)(a1 + 4 * v28 + 120);
        if ( (unsigned int)v29 >= 0x80 )
        {
          v30 = *(unsigned int *)(a1 + 16);
          if ( (unsigned int)v29 < (unsigned int)v30 )
            break;
        }
LABEL_43:
        v28 = (unsigned int)(v28 + 1);
        if ( (unsigned int)v28 >= v27 )
          goto LABEL_49;
      }
      v31 = (unsigned int)v29;
      v32 = *(_DWORD *)(v29 + a1) - 64;
      if ( !v32 )
        goto LABEL_41;
      v33 = v32 - 1;
      if ( v33 )
      {
        if ( v33 == 1 )
        {
LABEL_41:
          if ( v31 + 40 <= v30 )
          {
            v26 = *(_BYTE *)(v31 + a1 + 9);
            goto LABEL_49;
          }
        }
      }
      else if ( v31 + 56 <= v30 )
      {
        v26 = *(_BYTE *)(v31 + a1 + 9);
        v25 = 1;
      }
      if ( v25 )
        goto LABEL_49;
      goto LABEL_43;
    }
  }
LABEL_49:
  if ( v16 && v26 )
  {
    v34 = v26;
    memset_0(v16, 0, v26);
    if ( v26 > 0x12u )
      v34 = 18;
    result = (unsigned __int8)memmove(v16, &Src, v34);
    *(_BYTE *)(a1 + 3) |= 0x80u;
  }
  return result;
}
