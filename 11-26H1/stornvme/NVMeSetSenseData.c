/*
 * XREFs of NVMeSetSenseData @ 0x140002E20
 * Callers:
 *     FormInquiryBlockLimitsData @ 0x140001010 (FormInquiryBlockLimitsData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1400015F0 (FormInquiryDeviceIdentifiersData.c)
 *     ScsiSanitizeRequest @ 0x140001880 (ScsiSanitizeRequest.c)
 *     ScsiInquiryRequest @ 0x140001B10 (ScsiInquiryRequest.c)
 *     ScsiStartStopUnitRequest @ 0x140001C40 (ScsiStartStopUnitRequest.c)
 *     ScsiReadCapacityRequest @ 0x140001D40 (ScsiReadCapacityRequest.c)
 *     FormInquiryStandardData @ 0x140001F50 (FormInquiryStandardData.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x140002940 (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x140002A30 (NVMeWriteBufferFirmwareDownload.c)
 *     NVMeHwBuildIo @ 0x140002CA0 (NVMeHwBuildIo.c)
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 *     ScsiUnmapRequest @ 0x140003A80 (ScsiUnmapRequest.c)
 *     ScsiReadWriteRequest @ 0x140003DE0 (ScsiReadWriteRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x140004D40 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x140005300 (ScsiSecurityProtocolInRequest.c)
 *     ScsiModeSenseRequest @ 0x140005450 (ScsiModeSenseRequest.c)
 *     NVMeHwStartIo @ 0x14000BEE0 (NVMeHwStartIo.c)
 *     ScsiLogSenseRequest @ 0x140010E30 (ScsiLogSenseRequest.c)
 *     FormInquiryBlockProvisioningData @ 0x14001AA78 (FormInquiryBlockProvisioningData.c)
 *     FormInquiryDeviceCharacteristicsData @ 0x14001AB60 (FormInquiryDeviceCharacteristicsData.c)
 *     FormInquirySerialNumberData @ 0x14001ABD4 (FormInquirySerialNumberData.c)
 *     FormInquiryVpdSupportedPagesData @ 0x14001ADBC (FormInquiryVpdSupportedPagesData.c)
 *     LogSenseInformationalExceptions @ 0x14001CD6C (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x14001CF20 (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x14001CFC8 (LogSenseTemperature.c)
 *     ScsiModeSelectRequest @ 0x1400225C8 (ScsiModeSelectRequest.c)
 *     ScsiPersistentReserveIn @ 0x140022748 (ScsiPersistentReserveIn.c)
 *     ScsiPersistentReserveOut @ 0x140022838 (ScsiPersistentReserveOut.c)
 *     ProcessCommandNvmePacket @ 0x14002B038 (ProcessCommandNvmePacket.c)
 * Callees:
 *     memmove @ 0x140032740 (memmove.c)
 *     memset @ 0x140032A40 (memset.c)
 */

unsigned __int64 __fastcall NVMeSetSenseData(__int64 a1, char a2, char a3, unsigned __int8 a4)
{
  _BYTE *v4; // r10
  unsigned __int8 v5; // r11
  char v6; // r9
  unsigned __int64 result; // rax
  char *v8; // rbp
  unsigned int *v10; // rcx
  __int64 v11; // r8
  char *v12; // rdx
  unsigned int v13; // edi
  __int64 v14; // rsi
  unsigned int v15; // edi
  char *v16; // rcx
  unsigned int v17; // edi
  __int128 Src; // [rsp+20h] [rbp-28h] BYREF
  __int16 v19; // [rsp+30h] [rbp-18h]

  *(_BYTE *)(a1 + 3) = a2;
  v19 = 0;
  v4 = 0LL;
  Src = 0LL;
  v5 = 0;
  WORD6(Src) = a4;
  LOBYTE(Src) = -16;
  BYTE2(Src) = a3 & 0xF;
  v6 = 0;
  result = *(unsigned __int8 *)(a1 + 2);
  v8 = 0LL;
  BYTE7(Src) = 10;
  if ( (_BYTE)result == 40 )
  {
    if ( *(_DWORD *)(a1 + 20) )
      return result;
    result = *(unsigned int *)(a1 + 56);
    if ( !(_DWORD)result )
      return result;
    v10 = (unsigned int *)(a1 + 120);
    v11 = (unsigned int)result;
    while ( 1 )
    {
      result = *v10;
      if ( (unsigned int)result < 0x80 || (unsigned int)result > *(_DWORD *)(a1 + 16) )
        goto LABEL_13;
      v12 = (char *)(a1 + result);
      result = (unsigned int)(*(_DWORD *)(a1 + result) - 64);
      if ( !(_DWORD)result )
        break;
      result = (unsigned int)(result - 1);
      if ( !(_DWORD)result )
        break;
      if ( (_DWORD)result == 1 )
      {
        v8 = (char *)*((_QWORD *)v12 + 3);
LABEL_12:
        v5 = v12[9];
        v4 = v12 + 8;
        v6 = 1;
      }
LABEL_13:
      ++v10;
      if ( !--v11 )
      {
        if ( v6 )
        {
LABEL_18:
          if ( v4 )
            *v4 = 2;
          if ( v8 && v5 )
          {
            v13 = v5;
            v14 = v5;
            if ( v5 > 0x12u )
              v14 = 18LL;
            result = (unsigned __int64)memmove(v8, &Src, (unsigned int)v14);
            *(_BYTE *)(a1 + 3) |= 0x80u;
            if ( v13 > (unsigned int)v14 )
            {
              v15 = v13 - v14;
              v16 = &v8[v14];
              if ( (v15 & 3) != 0 )
              {
                if ( v15 )
                  return (unsigned __int64)memset(v16, 0, v15);
              }
              else
              {
                v17 = v15 >> 2;
                if ( v17 )
                  return (unsigned __int64)memset(v16, 0, 4LL * v17);
              }
            }
          }
        }
        return result;
      }
    }
    v8 = (char *)*((_QWORD *)v12 + 2);
    goto LABEL_12;
  }
  if ( !(_BYTE)result )
  {
    v8 = *(char **)(a1 + 32);
    v4 = (_BYTE *)(a1 + 4);
    v5 = *(_BYTE *)(a1 + 11);
    goto LABEL_18;
  }
  return result;
}
