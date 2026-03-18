/*
 * XREFs of SrbAssignQueueId @ 0x1400047C0
 * Callers:
 *     ProtocolCommandToNVMe @ 0x140001290 (ProtocolCommandToNVMe.c)
 *     ScsiSanitizeRequest @ 0x140001880 (ScsiSanitizeRequest.c)
 *     ScsiStartStopUnitRequest @ 0x140001C40 (ScsiStartStopUnitRequest.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1400025C0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x140002940 (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x140002A30 (NVMeWriteBufferFirmwareDownload.c)
 *     ScsiUnmapRequest @ 0x140003A80 (ScsiUnmapRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x140004D40 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x140005300 (ScsiSecurityProtocolInRequest.c)
 *     ScsiModeSenseRequest @ 0x140005450 (ScsiModeSenseRequest.c)
 *     FirmwareGetInfo @ 0x140005A10 (FirmwareGetInfo.c)
 *     NVMeSetHostMemoryBuffer @ 0x14000DB20 (NVMeSetHostMemoryBuffer.c)
 *     BootPartitionActivate @ 0x140019528 (BootPartitionActivate.c)
 *     BootPartitionDownload @ 0x140019764 (BootPartitionDownload.c)
 *     FirmwareActivate @ 0x14001A3D8 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x14001A63C (FirmwareDownload.c)
 *     IoctlQueryEnduranceInformation @ 0x14001BD34 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x14001C2B0 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x14001C534 (IoctlSetTemperatureThresholdProcess.c)
 *     LogSenseInformationalExceptions @ 0x14001CD6C (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x14001CFC8 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x14001DA38 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x14001DCFC (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x14001E3D0 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeReservationAcquireCommand @ 0x14001ECE4 (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x14001EEA4 (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x14001F050 (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x14001F23C (NVMeReservationReleaseCommand.c)
 *     NVMeReservationReportCapabilities @ 0x14001F3C0 (NVMeReservationReportCapabilities.c)
 *     NVMeReservationReportStatus @ 0x14001F5D4 (NVMeReservationReportStatus.c)
 *     QueryProtocolInfoCompletion @ 0x140020C50 (QueryProtocolInfoCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x140021090 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x140021554 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x140021888 (QueryProtocolInfoLogPageData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x140022200 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x140022410 (QueryTemperatureThresholdCompletion.c)
 *     ScsiModeSelectRequest @ 0x1400225C8 (ScsiModeSelectRequest.c)
 *     SetProtocolInfoFeatureData @ 0x140022C1C (SetProtocolInfoFeatureData.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x140024D74 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x140024E28 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x140024FBC (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x140025078 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x140025280 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x14002533C (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeSyncHostTime @ 0x14002ADCC (NVMeSyncHostTime.c)
 *     ProcessCommandNvmePacket @ 0x14002B038 (ProcessCommandNvmePacket.c)
 * Callees:
 *     ProcessorToIoSqMappingBase @ 0x140004B70 (ProcessorToIoSqMappingBase.c)
 *     ProcessorToDedicatedIoSqMapping @ 0x140019430 (ProcessorToDedicatedIoSqMapping.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 */

__int64 __fastcall SrbAssignQueueId(__int64 a1, __int64 a2)
{
  char v2; // r11
  __int64 v3; // rax
  __int64 v6; // rdi
  bool v7; // r15
  unsigned int v8; // r12d
  unsigned __int8 *v9; // r10
  unsigned int v10; // eax
  unsigned int *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r9
  int v15; // ecx
  unsigned int v16; // r8d
  unsigned int i; // edx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int *v20; // rax
  __int64 v21; // r9
  unsigned __int16 v22; // r14
  __int64 v23; // rax
  unsigned int v24; // ebp
  bool v25; // r8
  unsigned int v26; // ecx
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 result; // rax
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  unsigned int v34; // edx
  unsigned int v35; // [rsp+20h] [rbp-68h] BYREF
  __int128 v36; // [rsp+28h] [rbp-60h] BYREF
  int v37; // [rsp+38h] [rbp-50h] BYREF

  v2 = *(_BYTE *)(a2 + 2);
  v3 = 104LL;
  if ( v2 != 40 )
    v3 = 56LL;
  v6 = *(_QWORD *)(v3 + a2);
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - (v6 & 0xFFF) + 4096;
  v7 = 0;
  v35 = 0;
  v8 = 0;
  if ( (*(_BYTE *)(v6 + 4225) & 1) != 0 )
    goto LABEL_47;
  v37 = 0;
  v9 = 0LL;
  v36 = 0LL;
  if ( v2 == 40 )
  {
    if ( !*(_DWORD *)(a2 + 20) )
    {
      v10 = *(_DWORD *)(a2 + 56);
      if ( v10 )
      {
        v11 = (unsigned int *)(a2 + 120);
        v12 = v10;
        while ( 1 )
        {
          v13 = *v11;
          if ( (unsigned int)v13 < 0x80 || (unsigned int)v13 > *(_DWORD *)(a2 + 16) )
            goto LABEL_15;
          v14 = a2 + v13;
          if ( *(_DWORD *)(a2 + v13) == 64 )
          {
            if ( *(_BYTE *)(v14 + 10) )
              goto LABEL_49;
          }
          else
          {
            if ( *(_DWORD *)(a2 + v13) != 65 )
            {
              if ( *(_DWORD *)(a2 + v13) == 66 && *(_DWORD *)(v14 + 12) )
                v9 = (unsigned __int8 *)(v14 + 32);
              goto LABEL_15;
            }
            if ( *(_BYTE *)(v14 + 10) )
LABEL_49:
              v9 = (unsigned __int8 *)(v14 + 24);
          }
LABEL_15:
          ++v11;
          if ( !--v12 )
            goto LABEL_16;
        }
      }
    }
  }
  else if ( !v2 && *(_BYTE *)(a2 + 10) )
  {
    v9 = (unsigned __int8 *)(a2 + 72);
LABEL_16:
    if ( v9 )
    {
      v15 = *v9;
      if ( v15 == 138 || (v31 = v15 - 40) == 0 || (v32 = v31 - 2) == 0 || v32 == 94 )
      {
        if ( v2 == 40 )
        {
          v16 = *(_DWORD *)(a2 + 56);
          if ( v16 )
          {
            for ( i = 0; i < v16; ++i )
            {
              v18 = *(unsigned int *)(a2 + 4LL * i + 120);
              if ( (unsigned int)v18 >= 0x80 && (unsigned int)v18 < *(_DWORD *)(a2 + 16) )
              {
                v19 = a2 + v18;
                if ( *(_DWORD *)v19 == 128 )
                  goto LABEL_27;
              }
            }
          }
        }
        v20 = (unsigned int *)(a2 + 16);
        v19 = 0LL;
        if ( v2 == 40 )
LABEL_27:
          v20 = (unsigned int *)(a2 + 60);
        if ( v20 )
          v8 = *v20;
        if ( v19 )
          v7 = (*(_BYTE *)(v19 + 8) & 2) != 0;
      }
    }
  }
  *(_QWORD *)&v36 = 0x1400000002LL;
  StorPortExtendedFunction(15LL, a1, a2, &v36);
  v22 = WORD4(v36);
  if ( (_WORD)v37 == 0xFFFF && BYTE2(v37) == 0xFF )
    StorPortExtendedFunction(17LL, a1, &v37, v21);
  StorPortExtendedFunction(56LL, a1, &v37, &v35);
  v23 = 24LL;
  v24 = v35;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v23 = 12LL;
  v25 = (*(_DWORD *)(v23 + a2) & 0x4000) != 0;
  if ( (*(_BYTE *)(v6 + 4225) & 1) != 0 )
  {
LABEL_47:
    result = *(unsigned __int16 *)(a1 + 384);
    goto LABEL_46;
  }
  if ( *(_BYTE *)(a1 + 20) )
  {
    result = *(_QWORD *)(a1 + 936);
    *(_WORD *)(v6 + 4212) = *(_WORD *)(result + 48);
    return result;
  }
  v26 = *(unsigned __int16 *)(a1 + 234);
  if ( v35 >= v26 )
    v24 = v35 % v26;
  v27 = 72LL * v24;
  v28 = *(_QWORD *)(a1 + 264);
  if ( v25 )
  {
    if ( !*(_QWORD *)(v28 + v27 + 64) )
      ProcessorToDedicatedIoSqMapping(a1, v24, v22);
    v29 = *(_QWORD *)(v27 + *(_QWORD *)(a1 + 264) + 64);
  }
  else
  {
    if ( !*(_QWORD *)(v28 + v27 + 56) )
      ProcessorToIoSqMappingBase(a1, v24, v22, 0LL);
    v29 = *(_QWORD *)(v27 + *(_QWORD *)(a1 + 264) + 56);
  }
  if ( !*(_BYTE *)(a1 + 3752) || !v8 )
  {
    result = *(unsigned __int16 *)(v29 + 48);
LABEL_46:
    *(_WORD *)(v6 + 4212) = result;
    return result;
  }
  v33 = *(_DWORD *)(a1 + 3764);
  if ( (v33 & 0x80u) == 0 && (v8 > *(_DWORD *)(a1 + 3760) || v7) )
  {
    LOWORD(v34) = *(_WORD *)(a1 + 334) + v24 % (unsigned __int16)(*(_WORD *)(a1 + 332) - *(_WORD *)(a1 + 334));
  }
  else
  {
    if ( (v33 & 0x40) != 0 )
    {
      result = *(_QWORD *)(a1 + 936);
      *(_WORD *)(v6 + 4212) = *(_WORD *)(208LL * (v24 % *(unsigned __int16 *)(a1 + 332)) + result + 48);
      return result;
    }
    v34 = v24 % *(unsigned __int16 *)(a1 + 334);
  }
  result = *(_QWORD *)(a1 + 936);
  *(_WORD *)(v6 + 4212) = *(_WORD *)(208LL * (unsigned __int16)v34 + result + 48);
  return result;
}
