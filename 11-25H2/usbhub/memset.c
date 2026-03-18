/*
 * XREFs of memset @ 0x140061900
 * Callers:
 *     UsbhEtwWrite @ 0x14000AB60 (UsbhEtwWrite.c)
 *     UsbhPostInterrupt @ 0x14000C308 (UsbhPostInterrupt.c)
 *     UsbhCreateDevice @ 0x140012398 (UsbhCreateDevice.c)
 *     UsbhCreatePdo @ 0x140014360 (UsbhCreatePdo.c)
 *     UsbhSetupDevice @ 0x14001ADE8 (UsbhSetupDevice.c)
 *     UsbhInitializeDevice @ 0x14001CFD4 (UsbhInitializeDevice.c)
 *     UsbhUpdateUxdSettings @ 0x14001D3EC (UsbhUpdateUxdSettings.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x14001EF24 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhGetHubPdoName @ 0x14001F4A4 (UsbhGetHubPdoName.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x14001FB50 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1400202C0 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1400220E0 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x140023560 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhQueryD3ColdSupport @ 0x14002F0F8 (UsbhQueryD3ColdSupport.c)
 *     UsbhPdoPnp_QueryCapabilities @ 0x140034C30 (UsbhPdoPnp_QueryCapabilities.c)
 *     UsbhGetPerformanceInfo @ 0x1400377CC (UsbhGetPerformanceInfo.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x14003AF70 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x14003B708 (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x14003B83C (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 *     UsbhGetHubClassDescriptor @ 0x14003CC44 (UsbhGetHubClassDescriptor.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x140041060 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhCreateConfigurationRequestEx @ 0x140041C80 (UsbhCreateConfigurationRequestEx.c)
 *     USBD_ValidateConfigurationDescriptorInternal @ 0x140042084 (USBD_ValidateConfigurationDescriptorInternal.c)
 *     UsbhIoctlGetHubInformationEx @ 0x14004D974 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004DC58 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004DEE8 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x14004E304 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhAddDevice @ 0x14004F060 (UsbhAddDevice.c)
 *     UsbhInitGlobal @ 0x140050C48 (UsbhInitGlobal.c)
 *     UsbhGetDeviceNodeInfo @ 0x140054D58 (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x140054FF4 (UsbhGetHubNodeInfo.c)
 *     RtlStringCchPrintfExW @ 0x140056AD8 (RtlStringCchPrintfExW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x140056CB8 (RtlStringExHandleOtherFlagsW.c)
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x14005B900 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x14005BC80 (UsbhValidateMsOs20FunctionSubset.c)
 *     UsbhDeleteUxdSubKeys @ 0x14005F13C (UsbhDeleteUxdSubKeys.c)
 *     memset$thunk$772440563353939046 @ 0x140062020 (memset$thunk$772440563353939046.c)
 *     WppTraceCallback @ 0x1400772E0 (WppTraceCallback.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
