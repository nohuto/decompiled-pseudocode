/*
 * XREFs of memmove @ 0x140072440
 * Callers:
 *     PushAccFieldObj @ 0x1400010C0 (PushAccFieldObj.c)
 *     ParseSuperName @ 0x140001A40 (ParseSuperName.c)
 *     WriteFieldObj @ 0x1400038F0 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x140004180 (ReadFieldObj.c)
 *     AccessFieldData @ 0x1400047D0 (AccessFieldData.c)
 *     AccessBaseField @ 0x140004F30 (AccessBaseField.c)
 *     ParseArg @ 0x140006850 (ParseArg.c)
 *     GetNameSpaceObjectNoLock @ 0x140007700 (GetNameSpaceObjectNoLock.c)
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 *     AccFieldUnit @ 0x14000ACF0 (AccFieldUnit.c)
 *     ReadField @ 0x14000CB30 (ReadField.c)
 *     WriteFieldLoop @ 0x14000DDB0 (WriteFieldLoop.c)
 *     ParseObjName @ 0x14000FE10 (ParseObjName.c)
 *     Field @ 0x1400102A0 (Field.c)
 *     CopyObjBuffer @ 0x140010868 (CopyObjBuffer.c)
 *     ParseField @ 0x140010AC8 (ParseField.c)
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 *     Store @ 0x140013D20 (Store.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 *     ConvertToInteger @ 0x140015028 (ConvertToInteger.c)
 *     ConvertToBuffer @ 0x1400150F8 (ConvertToBuffer.c)
 *     Concat @ 0x140015240 (Concat.c)
 *     ToHexStr @ 0x1400155F0 (ToHexStr.c)
 *     ConvertToString @ 0x140016ABC (ConvertToString.c)
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     ACPIDetectDockDevices @ 0x14001CBDC (ACPIDetectDockDevices.c)
 *     InternalRawAccessOpRegionHandler @ 0x14001CFF0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIDetectPdoDevices @ 0x14001DB6C (ACPIDetectPdoDevices.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140020600 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x140022548 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x14002298C (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x140024044 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x140026640 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIThermalCompletePendingIrps @ 0x14002A640 (ACPIThermalCompletePendingIrps.c)
 *     ACPIAmliBuildObjectPathname @ 0x14002C5E4 (ACPIAmliBuildObjectPathname.c)
 *     AMLIGetNameSpaceObjectPath @ 0x14002C7E4 (AMLIGetNameSpaceObjectPath.c)
 *     AcpiDiagTraceDeviceReset @ 0x14002D070 (AcpiDiagTraceDeviceReset.c)
 *     GetNameSpaceObject @ 0x140030FE0 (GetNameSpaceObject.c)
 *     RawFieldAccess @ 0x140036EEC (RawFieldAccess.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x140038194 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ParseString @ 0x140038A6C (ParseString.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x140038D80 (ACPIIoctlCalculateOutputBufferV2.c)
 *     ParseInteger @ 0x140039534 (ParseInteger.c)
 *     Buffer @ 0x1400395A0 (Buffer.c)
 *     ACPIDetectEjectDevices @ 0x1400398D4 (ACPIDetectEjectDevices.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x14003A378 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIMapNamedTable @ 0x14003D2D0 (ACPIMapNamedTable.c)
 *     Method @ 0x14003E490 (Method.c)
 *     FindNSObjMainNoLock @ 0x14003F584 (FindNSObjMainNoLock.c)
 *     FindNSObj @ 0x14003F6A0 (FindNSObj.c)
 *     ACPIInitStartDevice @ 0x1400420EC (ACPIInitStartDevice.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x140043C28 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     ACPIGetWorkerForBuffer @ 0x140043EA0 (ACPIGetWorkerForBuffer.c)
 *     ToDecStr @ 0x140044A30 (ToDecStr.c)
 *     AcpiRecordBlackboxInformationWorker @ 0x140045AF0 (AcpiRecordBlackboxInformationWorker.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x140046848 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIIoctlEnumChildren @ 0x140048808 (ACPIIoctlEnumChildren.c)
 *     AcpiDeviceResetInterface @ 0x140049BF0 (AcpiDeviceResetInterface.c)
 *     AMLIFindNameSpaceObject @ 0x14004B3A4 (AMLIFindNameSpaceObject.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x14004D1AC (AcpiConvertMethodArgumentsToObjData.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x14004F558 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x140053384 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x140053CF8 (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     ParseFieldConnection @ 0x140054000 (ParseFieldConnection.c)
 *     ACPIBuildProcessorExtension @ 0x140059694 (ACPIBuildProcessorExtension.c)
 *     ACPIBusIrpQueryInterface @ 0x14005A800 (ACPIBusIrpQueryInterface.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x140061920 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x140062778 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlGetDeviceInformation @ 0x140062C28 (ACPIIoctlGetDeviceInformation.c)
 *     ACPIIoctlQueryDeviceBiosNameEx @ 0x140062E90 (ACPIIoctlQueryDeviceBiosNameEx.c)
 *     IpmiOpRegionHandler @ 0x1400632E0 (IpmiOpRegionHandler.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x140067964 (ACPIProcessorContainerFillIoctlBuffer.c)
 *     ACPIVectorGetEntry @ 0x14006B00C (ACPIVectorGetEntry.c)
 *     AMLICreateOverrideObjectDefault @ 0x14006DC08 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x14006DCFC (AMLICreateOverrideObjectDep.c)
 *     LoadTable @ 0x140070D90 (LoadTable.c)
 *     LinkNodepRunSrsWorker @ 0x1400719F0 (LinkNodepRunSrsWorker.c)
 *     RtlCopyVolatileMemory @ 0x140072320 (RtlCopyVolatileMemory.c)
 *     RtlMoveVolatileMemory @ 0x140072330 (RtlMoveVolatileMemory.c)
 *     ACPIBusIommuBusInterface @ 0x1400A8774 (ACPIBusIommuBusInterface.c)
 *     IrqTranslatorEjectInterface @ 0x1400A98F8 (IrqTranslatorEjectInterface.c)
 *     ArbAddOrdering @ 0x1400A99F4 (ArbAddOrdering.c)
 *     ACPIInternalGrowBuffer @ 0x1400A9ADC (ACPIInternalGrowBuffer.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1400A9D44 (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIQuerySpareDsm @ 0x1400AA5C0 (ACPIQuerySpareDsm.c)
 *     ACPIDockIrpQueryInterface @ 0x1400AC120 (ACPIDockIrpQueryInterface.c)
 *     WppTraceCallback @ 0x1400AC8B0 (WppTraceCallback.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1400ACFC4 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcConnectHandler @ 0x1400AF5F0 (ACPIEcConnectHandler.c)
 *     ACPIFilterIrpQueryInterface @ 0x1400B1080 (ACPIFilterIrpQueryInterface.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1400B1798 (ACPIIoctlTranslateBiosResources.c)
 *     ACPIGetUniqueId @ 0x1400B1FE0 (ACPIGetUniqueId.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1400B51C0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1400B6AA8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1400B6D14 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1400B7244 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1400B7490 (OSReadNextRegValue.c)
 *     ACPIThermalBuildConstraints @ 0x1400BAA20 (ACPIThermalBuildConstraints.c)
 *     BuildTranslatorRanges @ 0x1400BB340 (BuildTranslatorRanges.c)
 *     ArbPruneOrdering @ 0x1400BF36C (ArbPruneOrdering.c)
 *     ArbQueryConflict @ 0x1400BF550 (ArbQueryConflict.c)
 *     ArbRegReadMmConfigRanges @ 0x1400BF928 (ArbRegReadMmConfigRanges.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1400C1884 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1400C1C4C (ACPIGetPhysicalDeviceLocationBuffer.c)
 *     IrqArbpSetDeviceProperties @ 0x1400C4C18 (IrqArbpSetDeviceProperties.c)
 *     ACPIGetPnpLocationString @ 0x1400C6B70 (ACPIGetPnpLocationString.c)
 *     OSReadRegValue @ 0x1400C8470 (OSReadRegValue.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1400CADD4 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1400CAFC0 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1400CB6B0 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1400CC08C (ACPIBusIrpQueryDeviceId.c)
 *     ACPIIommuGetDeviceId @ 0x1400CD510 (ACPIIommuGetDeviceId.c)
 *     ACPIAmliEvaluateOsc @ 0x1400CD900 (ACPIAmliEvaluateOsc.c)
 *     PnpBiosResourcesToNtResources @ 0x1400CE578 (PnpBiosResourcesToNtResources.c)
 *     PnpiAddSidebandResources @ 0x1400D2D3C (PnpiAddSidebandResources.c)
 *     RtlDuplicateCmResourceList @ 0x1400DBFE8 (RtlDuplicateCmResourceList.c)
 *     AMLIInitialize @ 0x1400DD5C8 (AMLIInitialize.c)
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
