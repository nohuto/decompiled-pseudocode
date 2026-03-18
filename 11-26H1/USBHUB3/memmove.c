/*
 * XREFs of memmove @ 0x1400468C0
 * Callers:
 *     memcpy_s @ 0x140001510 (memcpy_s.c)
 *     HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x140006504 (HUBHTX_ValidateAndCacheHubConfigDescriptor.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016C10 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x140017F18 (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBPDO_GetHubName @ 0x140018C90 (HUBPDO_GetHubName.c)
 *     HUBPDO_RecordFailure @ 0x14001A3FC (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x14001B864 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBID_AppendStringToIDString @ 0x14001E2F0 (HUBID_AppendStringToIDString.c)
 *     HUBID_BuildUxdPnpId @ 0x14001F540 (HUBID_BuildUxdPnpId.c)
 *     HUBUCX_CheckIfEndpointsNeedToBeDisabledOnConfigFailure @ 0x140026364 (HUBUCX_CheckIfEndpointsNeedToBeDisabledOnConfigFailure.c)
 *     HUBUCX_GetControllerName @ 0x1400275A8 (HUBUCX_GetControllerName.c)
 *     HUBUCX_UCXIoctlComplete @ 0x140028F10 (HUBUCX_UCXIoctlComplete.c)
 *     HUBDTX_CacheBillboardInfo @ 0x14002A208 (HUBDTX_CacheBillboardInfo.c)
 *     HUBDTX_LogAlternateMode @ 0x14002BC2C (HUBDTX_LogAlternateMode.c)
 *     HUBDTX_LogBillboardEvent @ 0x14002BDFC (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x14002C51C (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x14002CBE0 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x14002D538 (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x14002D710 (HUBDTX_ValidateAndCacheProductIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x14002D8E8 (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 *     HUBMISC_GenerateControllerSuffix @ 0x140030358 (HUBMISC_GenerateControllerSuffix.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1400315C8 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     WMI_QueryInstanceDeviceNodeInfo @ 0x1400414D0 (WMI_QueryInstanceDeviceNodeInfo.c)
 *     FWUPDATE_EvtIoInternalDeviceControl @ 0x140041CF0 (FWUPDATE_EvtIoInternalDeviceControl.c)
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x14004332C (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     USBDInternal_BuildServicePath @ 0x140043BFC (USBDInternal_BuildServicePath.c)
 *     MyRegQueryString @ 0x140045980 (MyRegQueryString.c)
 *     CreateNewEventEntry @ 0x140045C78 (CreateNewEventEntry.c)
 *     HUBDRIVER_EtwRundownHub @ 0x140079248 (HUBDRIVER_EtwRundownHub.c)
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x140079930 (HUBDRIVER_EtwRundownUsbDevice.c)
 *     WppTraceCallback @ 0x14007A210 (WppTraceCallback.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x14007B960 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x14007D044 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x14007E6C0 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x14007F1A8 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBREG_QueryValuesInDeviceHardwareKey @ 0x14008B738 (HUBREG_QueryValuesInDeviceHardwareKey.c)
 *     WMI_AcquireHubName @ 0x14008F8EC (WMI_AcquireHubName.c)
 *     WMI_GetPropertyString @ 0x140090300 (WMI_GetPropertyString.c)
 *     TUNNEL_EvtIrpPreprocessQueryDevRelations @ 0x1400928B0 (TUNNEL_EvtIrpPreprocessQueryDevRelations.c)
 *     KsPropertyHandleDrmSetContentId @ 0x140093C18 (KsPropertyHandleDrmSetContentId.c)
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
