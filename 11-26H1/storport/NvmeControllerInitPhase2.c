/*
 * XREFs of NvmeControllerInitPhase2 @ 0x1400F5A18
 * Callers:
 *     NvmeControllerAdvancedInitialize @ 0x1400F057C (NvmeControllerAdvancedInitialize.c)
 *     NvmeControllerPowerUp @ 0x1400F8B94 (NvmeControllerPowerUp.c)
 *     NvmeControllerReinitialize @ 0x1400F9990 (NvmeControllerReinitialize.c)
 * Callees:
 *     Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline @ 0x14005D160 (Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     StorpMarkDeviceFailed @ 0x14007CEEC (StorpMarkDeviceFailed.c)
 *     NvmeControllerBuildIoPollingConfiguration @ 0x1400CEA24 (NvmeControllerBuildIoPollingConfiguration.c)
 *     NvmeControllerGetFeaturesSupportedCacheCapabilities @ 0x1400CF3F4 (NvmeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NvmeControllerSetArbitration @ 0x1400CF9E4 (NvmeControllerSetArbitration.c)
 *     NvmeControllerSetInterruptCoalescing @ 0x1400D046C (NvmeControllerSetInterruptCoalescing.c)
 *     NvmeControllerSetIoQueueCount @ 0x1400D05D8 (NvmeControllerSetIoQueueCount.c)
 *     NvmeControllerConfigureCQIoPolling @ 0x1400F1B88 (NvmeControllerConfigureCQIoPolling.c)
 *     NvmeControllerGetInterruptMessageInfo @ 0x1400F3D58 (NvmeControllerGetInterruptMessageInfo.c)
 *     NvmeControllerInitHostMemoryBuffer @ 0x1400F5474 (NvmeControllerInitHostMemoryBuffer.c)
 *     NvmeControllerInitializePerfOptions @ 0x1400F6850 (NvmeControllerInitializePerfOptions.c)
 *     NvmeControllerIoQueuesCreation @ 0x1400F6E10 (NvmeControllerIoQueuesCreation.c)
 *     NvmeControllerIoQueuesInitialize @ 0x1400F71AC (NvmeControllerIoQueuesInitialize.c)
 *     NvmeControllerIoSqToCqMapping @ 0x1400F74F8 (NvmeControllerIoSqToCqMapping.c)
 *     NvmeControllerProcessorToSqMapping @ 0x1400F91C4 (NvmeControllerProcessorToSqMapping.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeControllerInitPhase2(__int64 a1, __int64 a2, char a3)
{
  char v4; // r15
  bool v6; // bp
  __int64 v7; // rax
  __int64 v8; // rcx
  int InterruptMessageInfo; // edi
  const wchar_t *v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdx
  __int16 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+50h] [rbp-58h] BYREF
  __int64 v18; // [rsp+58h] [rbp-50h] BYREF
  int v19; // [rsp+60h] [rbp-48h]
  int v20; // [rsp+64h] [rbp-44h]

  v4 = a2;
  v17 = 0LL;
  v20 = 0;
  v6 = 0;
  if ( !*(_DWORD *)(a1 + 656) )
  {
    v7 = *(_QWORD *)(a1 + 592);
    if ( v7 )
      v6 = *(_DWORD *)(v7 + 516) == 0;
  }
  if ( (_BYTE)a2 )
  {
    v8 = *(_QWORD *)(a1 + 128);
    if ( (*(_DWORD *)(v8 + 144) & 0x1000LL) != 0 && (*(_DWORD *)(v8 + 416) & 0x200) == 0 )
    {
      InterruptMessageInfo = NvmeControllerGetInterruptMessageInfo(a1);
      if ( InterruptMessageInfo < 0 )
      {
        *(_DWORD *)(a1 + 1192) = 33;
        v10 = L"Get interrupt information failed";
        goto LABEL_43;
      }
    }
    if ( !(unsigned int)Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline() )
      NvmeControllerBuildIoPollingConfiguration(a1, a3);
  }
  if ( !v6 )
  {
    v11 = a1 + 1048;
    if ( (*(_QWORD *)(a1 + 968) & 0x2000LL) != 0 && *(_QWORD *)v11 )
      *(_DWORD *)(*(_QWORD *)v11 + 92LL) = 0xFFFF;
    LOBYTE(a2) = v4 == 0;
    InterruptMessageInfo = NvmeControllerSetIoQueueCount(a1, a2, a3);
    if ( InterruptMessageInfo < 0 )
    {
      *(_DWORD *)(a1 + 1192) = 12;
      v10 = L"Set IO queue count failed";
      goto LABEL_43;
    }
    if ( !*(_WORD *)(a1 + 26) || !*(_WORD *)(a1 + 22) )
    {
      *(_DWORD *)(a1 + 1192) = 12;
      goto LABEL_47;
    }
    if ( *(_QWORD *)v11 && (*(_DWORD *)(*(_QWORD *)v11 + 24LL) & 4) == 0 && *(_BYTE *)(a1 + 1728) != 1 )
    {
      NvmeControllerSetInterruptCoalescing((union _SLIST_HEADER *)a1, a3);
      NvmeControllerSetArbitration((union _SLIST_HEADER *)a1, a3);
    }
    if ( v4 )
    {
      if ( (*(_QWORD *)(a1 + 968) & 0x800000LL) == 0
        && *(_BYTE *)(a1 + 1728) != 1
        && !(unsigned __int8)NvmeControllerInitializePerfOptions(a1) )
      {
        *(_WORD *)(a1 + 26) = 0;
        v10 = L"Initialize perf options failed";
        *(_WORD *)(a1 + 22) = 0;
        InterruptMessageInfo = -1073741595;
        *(_DWORD *)(a1 + 1192) = 21;
        goto LABEL_43;
      }
      InterruptMessageInfo = NvmeControllerIoQueuesInitialize(a1);
      if ( InterruptMessageInfo < 0 )
      {
        *(_DWORD *)(a1 + 1192) = 13;
        v10 = L"Initialize IO queues failed";
        goto LABEL_43;
      }
      InterruptMessageInfo = NvmeControllerIoSqToCqMapping(a1);
      if ( InterruptMessageInfo < 0 )
      {
        *(_DWORD *)(a1 + 1192) = 32;
        v10 = L"IO queues mapping failed";
        goto LABEL_43;
      }
      InterruptMessageInfo = NvmeControllerProcessorToSqMapping(a1);
      if ( InterruptMessageInfo < 0 )
      {
        *(_DWORD *)(a1 + 1192) = 32;
        v10 = L"Processor to SQ mapping failed";
        goto LABEL_43;
      }
      NvmeControllerConfigureCQIoPolling(a1);
    }
    if ( *(_WORD *)(a1 + 26) && *(_WORD *)(a1 + 22) )
    {
      if ( (!*(_QWORD *)v11 || (*(_DWORD *)(*(_QWORD *)v11 + 96LL) & 4) == 0) && !a3 )
      {
        InterruptMessageInfo = -1073741822;
        v10 = L"IO queues async creation failed";
LABEL_43:
        v13 = *(_WORD *)(a1 + 1192);
        v18 = *(_QWORD *)(a1 + 968);
        v19 = *(_DWORD *)(a1 + 1192);
        StorpMarkDeviceFailed(*(_QWORD *)(a1 + 128), 0LL, 0, v13, v10, 8u, &v17, 0x10u, &v18);
        v14 = *(_QWORD *)(a1 + 1288);
        if ( v14 )
          ++*(_DWORD *)(v14 + 20);
        return (unsigned int)InterruptMessageInfo;
      }
      LOBYTE(v12) = a3;
      InterruptMessageInfo = NvmeControllerIoQueuesCreation(a1, v12);
      if ( InterruptMessageInfo < 0 )
      {
        v10 = L"IO queues sync creation failed";
        goto LABEL_43;
      }
    }
  }
  NvmeControllerInitHostMemoryBuffer((union _SLIST_HEADER *)a1, a3);
  NvmeControllerGetFeaturesSupportedCacheCapabilities((union _SLIST_HEADER *)a1, a3);
  InterruptMessageInfo = 0;
LABEL_47:
  v15 = *(_QWORD *)(a1 + 1288);
  if ( v15 )
    ++*(_DWORD *)(v15 + 16);
  return (unsigned int)InterruptMessageInfo;
}
