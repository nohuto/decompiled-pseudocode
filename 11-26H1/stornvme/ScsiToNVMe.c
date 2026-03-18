/*
 * XREFs of ScsiToNVMe @ 0x140002FA0
 * Callers:
 *     NVMeHwBuildIo @ 0x140002CA0 (NVMeHwBuildIo.c)
 * Callees:
 *     ScsiSanitizeRequest @ 0x140001880 (ScsiSanitizeRequest.c)
 *     ScsiInquiryRequest @ 0x140001B10 (ScsiInquiryRequest.c)
 *     ScsiStartStopUnitRequest @ 0x140001C40 (ScsiStartStopUnitRequest.c)
 *     ScsiReadCapacityRequest @ 0x140001D40 (ScsiReadCapacityRequest.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x140002940 (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x140002A30 (NVMeWriteBufferFirmwareDownload.c)
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     SetPrpFromSrb @ 0x140003380 (SetPrpFromSrb.c)
 *     ScsiUnmapRequest @ 0x140003A80 (ScsiUnmapRequest.c)
 *     ScsiReadWriteRequest @ 0x140003DE0 (ScsiReadWriteRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x140004D40 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiSyncCacheRequest @ 0x140004E90 (ScsiSyncCacheRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x140005300 (ScsiSecurityProtocolInRequest.c)
 *     ScsiModeSenseRequest @ 0x140005450 (ScsiModeSenseRequest.c)
 *     ScsiLogSenseRequest @ 0x140010E30 (ScsiLogSenseRequest.c)
 *     ScsiReportLunsCommand @ 0x140011620 (ScsiReportLunsCommand.c)
 *     NVMeGetDeviceTelemetryData @ 0x14001DA38 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x14001DCFC (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeSplitIoCommand @ 0x14002015C (NVMeSplitIoCommand.c)
 *     ScsiModeSelectRequest @ 0x1400225C8 (ScsiModeSelectRequest.c)
 *     ScsiPersistentReserveIn @ 0x140022748 (ScsiPersistentReserveIn.c)
 *     ScsiPersistentReserveOut @ 0x140022838 (ScsiPersistentReserveOut.c)
 *     StorStatusToSrbStatus @ 0x140023018 (StorStatusToSrbStatus.c)
 *     NVMeIceIoStart @ 0x1400272C4 (NVMeIceIoStart.c)
 */

__int64 __fastcall ScsiToNVMe(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9
  unsigned int CapacityRequest; // edi
  char v4; // r10
  unsigned int v7; // r11d
  unsigned __int8 *v8; // r14
  unsigned int v9; // eax
  unsigned int *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // eax
  int v15; // eax
  char v16; // si
  unsigned __int8 v17; // cl
  int v18; // eax
  __int64 v20; // rcx
  unsigned __int8 v21; // r9
  unsigned __int8 v22; // al
  unsigned int started; // eax
  unsigned __int8 v24; // cl
  char v25; // al
  int v26; // eax
  unsigned int v27; // eax
  char v28; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 2);
  CapacityRequest = 0;
  v4 = 0;
  v7 = 0;
  v8 = 0LL;
  if ( (_BYTE)v2 == 40 && !*(_DWORD *)(a2 + 20) )
  {
    v9 = *(_DWORD *)(a2 + 56);
    if ( v9 )
    {
      v10 = (unsigned int *)(a2 + 120);
      v11 = v9;
      while ( 1 )
      {
        v12 = *v10;
        if ( (unsigned int)v12 < 0x80 || (unsigned int)v12 > *(_DWORD *)(a2 + 16) )
          goto LABEL_10;
        v13 = a2 + v12;
        v14 = *(_DWORD *)(a2 + v12) - 64;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            if ( v15 == 1 )
            {
              v7 = *(_DWORD *)(v13 + 12);
              v4 = 1;
              if ( v7 )
                v8 = (unsigned __int8 *)(v13 + 32);
            }
            goto LABEL_10;
          }
          v7 = *(unsigned __int8 *)(v13 + 10);
          v4 = 1;
          if ( (_BYTE)v7 )
LABEL_47:
            v8 = (unsigned __int8 *)(v13 + 24);
        }
        else
        {
          v7 = *(unsigned __int8 *)(v13 + 10);
          v4 = 1;
          if ( (_BYTE)v7 )
            goto LABEL_47;
        }
LABEL_10:
        ++v10;
        if ( !--v11 )
          goto LABEL_13;
      }
    }
  }
  if ( (_BYTE)v2 )
  {
LABEL_13:
    if ( !v4 )
      v7 = 0;
  }
  else
  {
    v7 = *(unsigned __int8 *)(a2 + 10);
    if ( (_BYTE)v7 )
    {
      v16 = 0;
      v8 = (unsigned __int8 *)(a2 + 72);
      v28 = 0;
      goto LABEL_42;
    }
  }
  v16 = 0;
  v28 = 0;
  if ( (_BYTE)v2 != 40 )
  {
LABEL_42:
    v17 = *(_BYTE *)(a2 + 7);
    goto LABEL_17;
  }
  v17 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
LABEL_17:
  if ( v7 < 6 || !v8 )
  {
    v21 = 32;
    goto LABEL_86;
  }
  v18 = *v8;
  if ( (_BYTE)v18 != 0xA0 && (_BYTE)v18 != 0xA2 && (_BYTE)v18 != 0xB5 )
  {
    v20 = *(_QWORD *)(a1 + 8LL * v17 + 1672);
    if ( !v20 || !*(_DWORD *)(v20 + 52) )
    {
      v21 = 37;
LABEL_86:
      NVMeSetSenseData(a2, 8, 5, v21);
      return 3238002695LL;
    }
  }
  if ( v18 != 143 )
  {
    if ( v18 == 138 )
    {
LABEL_38:
      started = ScsiReadWriteRequest(a1, a2, (_DWORD)v8, v7, (__int64)&v28);
      v16 = v28;
LABEL_39:
      CapacityRequest = started;
      goto LABEL_22;
    }
    switch ( *v8 )
    {
      case 0u:
      case 0x2Fu:
        break;
      case 0x12u:
        CapacityRequest = ScsiInquiryRequest(a1, a2, (__int64)v8, v2);
        goto LABEL_22;
      case 0x15u:
      case 0x55u:
        CapacityRequest = ScsiModeSelectRequest(a1, a2, v8);
        goto LABEL_22;
      case 0x1Au:
      case 0x5Au:
        CapacityRequest = ScsiModeSenseRequest(a1, a2, v8);
        goto LABEL_22;
      case 0x1Bu:
        started = ScsiStartStopUnitRequest(a1, a2);
        goto LABEL_39;
      case 0x25u:
      case 0x9Eu:
        CapacityRequest = ScsiReadCapacityRequest(a1, a2, v8, v7);
        goto LABEL_22;
      case 0x28u:
      case 0x2Au:
      case 0x88u:
        goto LABEL_38;
      case 0x35u:
        CapacityRequest = ScsiSyncCacheRequest(a1, a2);
        goto LABEL_22;
      case 0x3Bu:
        v25 = v8[1] & 0x1F;
        if ( v25 == 14 )
        {
          v26 = NVMeWriteBufferFirmwareDownload((_DWORD *)a1, a2);
        }
        else if ( v25 == 15 )
        {
          v26 = NVMeWriteBufferFirmwareActivate(a1, a2);
        }
        else
        {
          NVMeSetSenseData(a2, 6, 5, 0x24u);
          v26 = -1056964602;
        }
        CapacityRequest = v26;
        goto LABEL_22;
      case 0x42u:
        CapacityRequest = ScsiUnmapRequest(a1, a2, v8);
        goto LABEL_22;
      case 0x48u:
        CapacityRequest = ScsiSanitizeRequest(a1, a2);
        goto LABEL_22;
      case 0x4Du:
        CapacityRequest = ScsiLogSenseRequest(a1, a2, v8);
        goto LABEL_22;
      case 0x5Eu:
        CapacityRequest = ScsiPersistentReserveIn(a1, a2, v8);
        goto LABEL_22;
      case 0x5Fu:
        CapacityRequest = ScsiPersistentReserveOut(a1, a2, v8);
        goto LABEL_22;
      case 0x9Bu:
        if ( (v8[1] & 0x1F) != 0x1C )
          goto LABEL_79;
        v24 = v8[14];
        if ( !v24 )
        {
          CapacityRequest = NVMeGetDeviceTelemetryHeader(a1, a2);
          goto LABEL_22;
        }
        if ( (unsigned __int8)(v24 - 16) > 0xDFu )
          goto LABEL_79;
        if ( v24 == *(_BYTE *)(a1 + 4052) )
        {
          LOBYTE(v2) = 1;
        }
        else
        {
          if ( v24 != *(_BYTE *)(a1 + 4053) )
          {
LABEL_79:
            *(_BYTE *)(a2 + 3) = 6;
            CapacityRequest = -1056964601;
            goto LABEL_22;
          }
          v2 = 0LL;
        }
        CapacityRequest = NVMeGetDeviceTelemetryData(a1, a2, v8, v2);
        goto LABEL_22;
      case 0xA0u:
        CapacityRequest = ScsiReportLunsCommand(a1, a2);
        goto LABEL_22;
      case 0xA2u:
        CapacityRequest = ScsiSecurityProtocolInRequest(a1, a2, v8);
        goto LABEL_22;
      case 0xB5u:
        CapacityRequest = ScsiSecurityProtocolOutRequest(a1, a2, v8);
        goto LABEL_22;
      default:
        NVMeSetSenseData(a2, 6, 5, 0x20u);
        CapacityRequest = -1056964601;
        goto LABEL_22;
    }
  }
  *(_BYTE *)(a2 + 3) = 1;
LABEL_22:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    CapacityRequest = SetPrpFromSrb(a1, a2);
    if ( CapacityRequest )
    {
      *(_BYTE *)(a2 + 3) = 4;
    }
    else if ( v16 )
    {
      NVMeSplitIoCommand(a1, a2);
    }
    if ( (*(_DWORD *)(a1 + 4064) & 0x10000) != 0 )
    {
      v22 = *v8;
      if ( *v8 == 40 || v22 == 0x88 || v22 == 42 || v22 == 0x8A )
      {
        v27 = NVMeIceIoStart(a1, a2, 0LL);
        CapacityRequest = v27;
        if ( v27 )
          *(_BYTE *)(a2 + 3) = StorStatusToSrbStatus(v27);
      }
    }
  }
  return CapacityRequest;
}
