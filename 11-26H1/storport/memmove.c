/*
 * XREFs of memmove @ 0x140138680
 * Callers:
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1400088DC (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     StorpTelemetryGetUnitIoCounters @ 0x140009010 (StorpTelemetryGetUnitIoCounters.c)
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     RaidXrbSetDataBufferAddress @ 0x140015450 (RaidXrbSetDataBufferAddress.c)
 *     StorUnmapSenseInfo @ 0x140017530 (StorUnmapSenseInfo.c)
 *     TranslateToExtendedSrb @ 0x14002B270 (TranslateToExtendedSrb.c)
 *     RaidUnitAssignIdentity @ 0x140035004 (RaidUnitAssignIdentity.c)
 *     RaidpBuildAdapterBusRelations @ 0x140036A00 (RaidpBuildAdapterBusRelations.c)
 *     PortPassThroughMarshalResultsFromSrb @ 0x14003B374 (PortPassThroughMarshalResultsFromSrb.c)
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x14003B4BC (PortPassThroughExMarshalResultsFromSrbEx.c)
 *     StorpTelemetryMiniportEventWStr @ 0x14003E924 (StorpTelemetryMiniportEventWStr.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x14003F330 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x140046660 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     StorpTelemetrySendUnitPerfData @ 0x14004FD38 (StorpTelemetrySendUnitPerfData.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x140051290 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1400518A4 (RaidBusEnumeratorProcessBusUnit.c)
 *     RaidAcquireNvmeIceKeyResources @ 0x140058BB4 (RaidAcquireNvmeIceKeyResources.c)
 *     StorpUnitInitializePoFxPower @ 0x14005A524 (StorpUnitInitializePoFxPower.c)
 *     RaMiniportSaveFeatureList @ 0x14005BFD8 (RaMiniportSaveFeatureList.c)
 *     memcpy_s @ 0x14005CFF8 (memcpy_s.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x14006C8EC (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x14006CDA4 (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidSetStorageAdapterProtocolSpecificProperty @ 0x14006DCFC (RaidSetStorageAdapterProtocolSpecificProperty.c)
 *     RaidInitializeCryptoEngine @ 0x140071818 (RaidInitializeCryptoEngine.c)
 *     RaidInitializeNvmeIce @ 0x1400719CC (RaidInitializeNvmeIce.c)
 *     AddNvmeAuthKey @ 0x14007491C (AddNvmeAuthKey.c)
 *     CreateNvmeAuthKeyFromSecret @ 0x140074AF8 (CreateNvmeAuthKeyFromSecret.c)
 *     GetNvmeHostNQN @ 0x140075274 (GetNvmeHostNQN.c)
 *     GetNvmeHostName @ 0x1400753A0 (GetNvmeHostName.c)
 *     RaidAddEnclosureIdMapping @ 0x140076378 (RaidAddEnclosureIdMapping.c)
 *     TransformNvmeAuthKey @ 0x140077FF4 (TransformNvmeAuthKey.c)
 *     StorPortMoveMemory @ 0x14007BC60 (StorPortMoveMemory.c)
 *     StorPortReadDriverRegistry @ 0x14007C030 (StorPortReadDriverRegistry.c)
 *     StorpAdapterInitializePoFxPower @ 0x14007C944 (StorpAdapterInitializePoFxPower.c)
 *     StorpMarkDeviceFailed @ 0x14007CEEC (StorpMarkDeviceFailed.c)
 *     StorpPopulateErrorData @ 0x140082D48 (StorpPopulateErrorData.c)
 *     NvmeProtocolSpecificRequestShiftBuffer @ 0x1400902AC (NvmeProtocolSpecificRequestShiftBuffer.c)
 *     RaBuildHwBootPartitionDownloadBufferForMiniport @ 0x140090EBC (RaBuildHwBootPartitionDownloadBufferForMiniport.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1400912BC (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1400917FC (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 *     RaGetProtocolCommandEffects @ 0x140091D7C (RaGetProtocolCommandEffects.c)
 *     RaProcessStorageEventNotification @ 0x1400922D0 (RaProcessStorageEventNotification.c)
 *     RaidFillTcgAuthKey @ 0x140094074 (RaidFillTcgAuthKey.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x1400964C0 (RaidSetTcgLockingObjectMetadata.c)
 *     StorCreateAnsiString @ 0x140096C1C (StorCreateAnsiString.c)
 *     StorCreateSystemLogEntry @ 0x140096EB0 (StorCreateSystemLogEntry.c)
 *     StorGUIDToSCSINameString @ 0x1400972A0 (StorGUIDToSCSINameString.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009F164 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1400A3DB4 (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x1400A4258 (RaUnitStorageQueryDeviceFruIdPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1400A4B80 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1400A5024 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1400A5538 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1400A5B3C (RaUnitStreamsIoctl.c)
 *     RaidUnitHierarchicalReset @ 0x1400A8384 (RaidUnitHierarchicalReset.c)
 *     NvmeAdapterWmiDeferredRoutine @ 0x1400AE7E0 (NvmeAdapterWmiDeferredRoutine.c)
 *     RaidAdapterWmiDeferredRoutine @ 0x1400AE8C0 (RaidAdapterWmiDeferredRoutine.c)
 *     StorpTelemetryNvmeSendNamespaceIoSizeDistributionData @ 0x1400BED48 (StorpTelemetryNvmeSendNamespaceIoSizeDistributionData.c)
 *     StorpTelemetryNvmeSendNamespacePerfData @ 0x1400BF5B8 (StorpTelemetryNvmeSendNamespacePerfData.c)
 *     StorpTelemetrySendUnitIoSizeDistributionData @ 0x1400C2778 (StorpTelemetrySendUnitIoSizeDistributionData.c)
 *     ReplaceDeviceId @ 0x1400C4F40 (ReplaceDeviceId.c)
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400C5E88 (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeControllerStartReenumeration @ 0x1400C6538 (NvmeControllerStartReenumeration.c)
 *     NvmeNamespaceIdentify @ 0x1400C6954 (NvmeNamespaceIdentify.c)
 *     NvmeControllerGetCommandEffectsLog @ 0x1400CDF84 (NvmeControllerGetCommandEffectsLog.c)
 *     NvmeControllerSetHostIdentifier @ 0x1400CFFDC (NvmeControllerSetHostIdentifier.c)
 *     NvmeControllerSetHostMemoryBuffer @ 0x1400D0214 (NvmeControllerSetHostMemoryBuffer.c)
 *     NvmeAdapterFirmwareDownloadIoctl @ 0x1400D6F6C (NvmeAdapterFirmwareDownloadIoctl.c)
 *     NvmeAdapterQueryDeviceRelationsIrp @ 0x1400DB2B8 (NvmeAdapterQueryDeviceRelationsIrp.c)
 *     NvmeAdapterStorageInternalQueryPropertyIoctl @ 0x1400DF840 (NvmeAdapterStorageInternalQueryPropertyIoctl.c)
 *     NvmeAdapterStorageProtocolCommandIoctlCompletion @ 0x1400DFF80 (NvmeAdapterStorageProtocolCommandIoctlCompletion.c)
 *     PopulateNvmeAuthenticationKeyInfo @ 0x1400E2FCC (PopulateNvmeAuthenticationKeyInfo.c)
 *     NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent @ 0x1400E58B0 (NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent.c)
 *     NvmeAdapterGetControllerNvmSetData @ 0x1400E98FC (NvmeAdapterGetControllerNvmSetData.c)
 *     NvmeControllerFilterResourceRequirements @ 0x1400F34FC (NvmeControllerFilterResourceRequirements.c)
 *     NvmeControllerGetTelemetryLog @ 0x1400F4BE8 (NvmeControllerGetTelemetryLog.c)
 *     NvmeControllerIdentify @ 0x1400F5094 (NvmeControllerIdentify.c)
 *     NvmeControllerIdentifyUUIDList @ 0x1400F5278 (NvmeControllerIdentifyUUIDList.c)
 *     NvmeControllerInitHostMemoryBuffer @ 0x1400F5474 (NvmeControllerInitHostMemoryBuffer.c)
 *     NvmeFabricControllerQueueComputeSharedDHValue @ 0x1400FCC1C (NvmeFabricControllerQueueComputeSharedDHValue.c)
 *     NvmeFabricControllerQueueGenerateHostDHKey @ 0x1400FCF50 (NvmeFabricControllerQueueGenerateHostDHKey.c)
 *     NvmeFabricControllerQueueProcessAuthChallenge @ 0x1400FD2D4 (NvmeFabricControllerQueueProcessAuthChallenge.c)
 *     NvmeGetNVMSetAttributeList @ 0x1400FE8C0 (NvmeGetNVMSetAttributeList.c)
 *     FormInquiryStandardData @ 0x1400FFE1C (FormInquiryStandardData.c)
 *     NvmeNamepspaceExecuteNvmeSrb @ 0x140100F94 (NvmeNamepspaceExecuteNvmeSrb.c)
 *     NvmeNamespaceExecuteScsiSrbComplete @ 0x140104F50 (NvmeNamespaceExecuteScsiSrbComplete.c)
 *     NvmeNamespaceQueryIdentifyControllerProperty @ 0x14010A894 (NvmeNamespaceQueryIdentifyControllerProperty.c)
 *     NvmeNamespaceQueryIdentifyIoCommandSetProperty @ 0x14010AC64 (NvmeNamespaceQueryIdentifyIoCommandSetProperty.c)
 *     NvmeNamespaceQueryIdentifyNamespaceProperty @ 0x14010B03C (NvmeNamespaceQueryIdentifyNamespaceProperty.c)
 *     NvmeNamespaceReservationReport @ 0x14010E124 (NvmeNamespaceReservationReport.c)
 *     NvmeNamespaceStorageProtocolCommandIoctlCompletion @ 0x140114940 (NvmeNamespaceStorageProtocolCommandIoctlCompletion.c)
 *     ScsiToNVMeCommand @ 0x140116B04 (ScsiToNVMeCommand.c)
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 *     NvmeNamespacePopulateInquiryDeviceIdentifiersData @ 0x1401175B0 (NvmeNamespacePopulateInquiryDeviceIdentifiersData.c)
 *     NvmeNamespacePopulateInquirySerialNumberData @ 0x140117688 (NvmeNamespacePopulateInquirySerialNumberData.c)
 *     NvmeNamespacePopulateInquiryStandardData @ 0x140117744 (NvmeNamespacePopulateInquiryStandardData.c)
 *     BuildNvmeAuthReplyMessage @ 0x140118BD4 (BuildNvmeAuthReplyMessage.c)
 *     NvmeCopyCachedLogPage @ 0x14011FF34 (NvmeCopyCachedLogPage.c)
 *     NvmeQueryProtocolInfoCompletion @ 0x14011FFE0 (NvmeQueryProtocolInfoCompletion.c)
 *     NvmeSetProtocolInfoCompletion @ 0x140121FB0 (NvmeSetProtocolInfoCompletion.c)
 *     NvmeAdapterInitializePoFx @ 0x140123A1C (NvmeAdapterInitializePoFx.c)
 *     NvmeAdapterProcessStorageEventNotification @ 0x14012C4F0 (NvmeAdapterProcessStorageEventNotification.c)
 *     PortpBinaryReadCallBack @ 0x14012FA70 (PortpBinaryReadCallBack.c)
 *     PortPassThroughExNormalize @ 0x14012FF14 (PortPassThroughExNormalize.c)
 *     PortTraceErrorDrainList @ 0x140130194 (PortTraceErrorDrainList.c)
 *     ParseAssignNamespace @ 0x1401323D0 (ParseAssignNamespace.c)
 *     ParseBandMetadata @ 0x140132530 (ParseBandMetadata.c)
 *     ParseLockingObjectInfo @ 0x1401326F0 (ParseLockingObjectInfo.c)
 *     GenSetTableColumnParams @ 0x1401336A0 (GenSetTableColumnParams.c)
 *     ParseGetTableColumnData @ 0x140133860 (ParseGetTableColumnData.c)
 *     ParseSyncSessionData @ 0x140135C90 (ParseSyncSessionData.c)
 *     ParseTPerProperties @ 0x140135DF0 (ParseTPerProperties.c)
 *     ParseTokenData @ 0x1401378B0 (ParseTokenData.c)
 *     GenLongDataBytes @ 0x140137EC8 (GenLongDataBytes.c)
 *     GenMediumDataBytes @ 0x140137F98 (GenMediumDataBytes.c)
 *     GenShortDataBytes @ 0x1401381C4 (GenShortDataBytes.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018470C (RaidAdapterDiagnosticIoctl.c)
 *     RaidGetStorageAdapterFruIdProperty @ 0x140186900 (RaidGetStorageAdapterFruIdProperty.c)
 *     RaSaveDriverInitData @ 0x140187F90 (RaSaveDriverInitData.c)
 *     WppInitGlobalLogger @ 0x1401880B4 (WppInitGlobalLogger.c)
 *     WppTraceCallback @ 0x140188500 (WppTraceCallback.c)
 *     RaDuplicateCmResourceList @ 0x140188A2C (RaDuplicateCmResourceList.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x14018BB30 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageManageBypassIOIoctl @ 0x14018D90C (RaUnitStorageManageBypassIOIoctl.c)
 *     StorAdapterQueryIdentifyControllerProperty @ 0x140190858 (StorAdapterQueryIdentifyControllerProperty.c)
 *     StorUnitQueryDeviceIdentifyIoCommandSetProperty @ 0x1401908C4 (StorUnitQueryDeviceIdentifyIoCommandSetProperty.c)
 *     StorUnitQueryDeviceIdentifyNamespaceProperty @ 0x140190C98 (StorUnitQueryDeviceIdentifyNamespaceProperty.c)
 *     StorUnitAssignNVMeIdentity @ 0x140191D30 (StorUnitAssignNVMeIdentity.c)
 *     StorQueryMFNDNamespacePageMap @ 0x1401940C4 (StorQueryMFNDNamespacePageMap.c)
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019FB54 (NvmeAdapterStorageProtocolCommandIoctl.c)
 *     NvmeControllerGetDeviceInternalLogIoctl @ 0x1401A14B0 (NvmeControllerGetDeviceInternalLogIoctl.c)
 *     NvmeNamespaceGetStorageDeviceIdProperty @ 0x1401A650C (NvmeNamespaceGetStorageDeviceIdProperty.c)
 *     NvmeNamespaceManageBypassIO @ 0x1401A6A28 (NvmeNamespaceManageBypassIO.c)
 *     StorProcessNotification @ 0x1401AFFBC (StorProcessNotification.c)
 *     PortpReadDriverParameterEntry @ 0x1401B1130 (PortpReadDriverParameterEntry.c)
 *     PortQueryInterfaceFdoQdr @ 0x1401B18C8 (PortQueryInterfaceFdoQdr.c)
 *     PortPassThroughExBuildSrbEx @ 0x1401B19FC (PortPassThroughExBuildSrbEx.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1401B2700 (RaGetUnitStorageDeviceProperty.c)
 *     PortPassThroughExSendAsync @ 0x1401B3488 (PortPassThroughExSendAsync.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1401B4DFC (RaGetUnitStorageDeviceIdProperty.c)
 *     PortpRegQueryRoutine @ 0x1401B88F0 (PortpRegQueryRoutine.c)
 *     RaWmiIrpRegisterRequest @ 0x1401B9580 (RaWmiIrpRegisterRequest.c)
 *     NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401BCE2C (NvmeNamespaceStorageProtocolCommandIoctl.c)
 *     NvmeNamespaceGetStorageDeviceProperty @ 0x1401BDC3C (NvmeNamespaceGetStorageDeviceProperty.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  void *result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int128 v6; // xmm1
  bool v7; // cf
  signed __int64 v8; // rdx
  char v9; // r11
  _BYTE *v10; // rcx
  char v11; // r11
  char *v12; // r11
  signed __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __m128 v17; // xmm1
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __m128 v23; // xmm4
  unsigned __int64 j; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  char *v31; // rcx
  __int128 v32; // xmm0
  unsigned __int64 v33; // rcx
  size_t v34; // r8
  _OWORD *v35; // r11
  __int128 v36; // xmm1
  size_t v37; // r9
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  size_t i; // r9
  size_t v43; // r8

  result = a1;
  if ( Size < 8 )
  {
    if ( Size )
    {
      v7 = Src < a1;
      v8 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 )
      {
        v10 = (char *)a1 + Size;
        do
        {
          v11 = v10[v8 - 1];
          --v10;
          --Size;
          *v10 = v11;
        }
        while ( Size );
      }
      else
      {
        do
        {
          v9 = *((_BYTE *)a1 + v8);
          a1 = (char *)a1 + 1;
          --Size;
          *((char *)a1 - 1) = v9;
        }
        while ( Size );
      }
    }
  }
  else if ( Size > 0x10 )
  {
    if ( Size > 0x20 )
    {
      v12 = (char *)Src + Size;
      v7 = Src < a1;
      v13 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 && v12 > a1 )
      {
        v31 = (char *)a1 + Size;
        v32 = *(_OWORD *)&v31[v13 - 16];
        v33 = (unsigned __int64)(v31 - 16);
        v34 = Size - 16;
        if ( (v33 & 0xF) != 0 )
        {
          v35 = (_OWORD *)v33;
          v33 &= 0xFFFFFFFFFFFFFFF0uLL;
          v36 = *(_OWORD *)(v33 + v13);
          *v35 = v32;
          v32 = v36;
          v34 = v33 - (_QWORD)result;
        }
        v37 = v34 >> 6;
        if ( v34 >> 6 )
        {
          v34 &= 0x3Fu;
          do
          {
            v38 = *(_OWORD *)(v33 + v13 - 16);
            v39 = *(_OWORD *)(v33 + v13 - 32);
            v40 = *(_OWORD *)(v33 + v13 - 48);
            v41 = *(_OWORD *)(v33 + v13 - 64);
            *(_OWORD *)v33 = v32;
            v33 -= 64LL;
            --v37;
            *(_OWORD *)(v33 + 48) = v38;
            *(_OWORD *)(v33 + 32) = v39;
            *(_OWORD *)(v33 + 16) = v40;
            v32 = v41;
          }
          while ( v37 );
        }
        for ( i = v34 >> 4; i; --i )
        {
          *(_OWORD *)v33 = v32;
          v32 = *(_OWORD *)(v33 + v13 - 16);
          v33 -= 16LL;
        }
        v43 = v34 & 0xF;
        if ( v43 )
          *(_OWORD *)(v33 - v43) = *(_OWORD *)(v33 - v43 + v13);
        *(_OWORD *)v33 = v32;
      }
      else
      {
        v14 = *(__m128 *)((char *)a1 + v13);
        v15 = (unsigned __int64)a1 + 16;
        if ( (v15 & 0xF) != 0 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v17 = *(__m128 *)(v16 + v13);
          *(__m128 *)result = v14;
          v14 = v17;
          v15 = v16 + 16;
        }
        v18 = (unsigned __int64)result + Size - v15;
        v19 = v18 >> 6;
        if ( v18 >> 6 )
        {
          if ( v19 > 0x1000 )
          {
            v26 = v18 >> 6;
            v18 &= 0x3Fu;
            _mm_prefetch((const char *)(v15 + v13 + 64), 0);
            do
            {
              v27 = *(__m128 *)(v15 + v13);
              v28 = *(__m128 *)(v15 + v13 + 16);
              v29 = *(__m128 *)(v15 + v13 + 32);
              v30 = *(__m128 *)(v15 + v13 + 48);
              _mm_stream_ps((float *)(v15 - 16), v14);
              v15 += 64LL;
              _mm_prefetch((const char *)(v15 + v13 + 64), 0);
              --v26;
              _mm_stream_ps((float *)(v15 - 64), v27);
              _mm_stream_ps((float *)(v15 - 48), v28);
              _mm_stream_ps((float *)(v15 - 32), v29);
              v14 = v30;
            }
            while ( v26 );
            _mm_sfence();
          }
          else
          {
            v18 &= 0x3Fu;
            do
            {
              v20 = *(_OWORD *)(v15 + v13);
              v21 = *(_OWORD *)(v15 + v13 + 16);
              v22 = *(_OWORD *)(v15 + v13 + 32);
              v23 = *(__m128 *)(v15 + v13 + 48);
              *(__m128 *)(v15 - 16) = v14;
              v15 += 64LL;
              --v19;
              *(_OWORD *)(v15 - 64) = v20;
              *(_OWORD *)(v15 - 48) = v21;
              *(_OWORD *)(v15 - 32) = v22;
              v14 = v23;
            }
            while ( v19 );
          }
        }
        for ( j = v18 >> 4; j; --j )
        {
          *(__m128 *)(v15 - 16) = v14;
          v14 = *(__m128 *)(v15 + v13);
          v15 += 16LL;
        }
        v25 = v18 & 0xF;
        if ( v25 )
          *(_OWORD *)(v15 + v25 - 16) = *(_OWORD *)(v15 + v25 - 16 + v13);
        *(__m128 *)(v15 - 16) = v14;
      }
    }
    else
    {
      v6 = *(_OWORD *)((char *)Src + Size - 16);
      *(_OWORD *)a1 = *(_OWORD *)Src;
      *(_OWORD *)((char *)a1 + Size - 16) = v6;
    }
  }
  else
  {
    v4 = *(_QWORD *)Src;
    v5 = *(_QWORD *)((char *)Src + Size - 8);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)((char *)a1 + Size - 8) = v5;
  }
  return result;
}
