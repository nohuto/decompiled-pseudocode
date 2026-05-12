/*
 * XREFs of NvmeControllerInitPhase1 @ 0x1400F570C
 * Callers:
 *     NvmeAdapterFinalizeStorMQMiniportControllerStart @ 0x1400D52F4 (NvmeAdapterFinalizeStorMQMiniportControllerStart.c)
 *     NvmeControllerEssentialInitialize @ 0x1400F2C48 (NvmeControllerEssentialInitialize.c)
 *     NvmeControllerPowerUp @ 0x1400F8B94 (NvmeControllerPowerUp.c)
 *     NvmeControllerReinitialize @ 0x1400F9990 (NvmeControllerReinitialize.c)
 * Callees:
 *     Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline @ 0x14005D160 (Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     StorpMarkDeviceFailed @ 0x14007CEEC (StorpMarkDeviceFailed.c)
 *     NvmeNamespaceIdentify @ 0x1400C6954 (NvmeNamespaceIdentify.c)
 *     NvmeControllerBuildIoPollingConfiguration @ 0x1400CEA24 (NvmeControllerBuildIoPollingConfiguration.c)
 *     NvmeControllerConfigure @ 0x1400F1AF4 (NvmeControllerConfigure.c)
 *     NvmeControllerCreatePendingIoQueueContext @ 0x1400F2460 (NvmeControllerCreatePendingIoQueueContext.c)
 *     NvmeControllerEnable @ 0x1400F2B00 (NvmeControllerEnable.c)
 *     NvmeControllerGetIoCommandSetIdentify @ 0x1400F3F00 (NvmeControllerGetIoCommandSetIdentify.c)
 *     NvmeControllerIdentify @ 0x1400F5094 (NvmeControllerIdentify.c)
 *     NvmeControllerIdentifyUUIDList @ 0x1400F5278 (NvmeControllerIdentifyUUIDList.c)
 *     NvmeControllerInitializeAdminQueue @ 0x1400F5F24 (NvmeControllerInitializeAdminQueue.c)
 *     NvmeControllerStorMQInitializeAdminQueues @ 0x1400FAE10 (NvmeControllerStorMQInitializeAdminQueues.c)
 *     NvmeControllerStoreSubsystemId @ 0x1400FB178 (NvmeControllerStoreSubsystemId.c)
 *     NvmeGetNVMSetAttributeList @ 0x1400FE8C0 (NvmeGetNVMSetAttributeList.c)
 *     NvmeGetNamespaceDescriptorListIdentify @ 0x1400FEB00 (NvmeGetNamespaceDescriptorListIdentify.c)
 *     NvmeGetNamespaceIoCommandSetIdentify @ 0x1400FED48 (NvmeGetNamespaceIoCommandSetIdentify.c)
 *     CreateNVMeScatterGatherListBufferPool @ 0x1401195EC (CreateNVMeScatterGatherListBufferPool.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeControllerInitPhase1(char *DeferredContext, char a2)
{
  __int64 v2; // rax
  char v3; // r14
  __int64 v6; // rsi
  int NVMeScatterGatherListBufferPool; // edi
  const wchar_t *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int16 v13; // r9
  __int64 v14; // rax
  signed __int32 v16[8]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD *v17; // [rsp+50h] [rbp-48h]
  __int64 v18; // [rsp+58h] [rbp-40h] BYREF
  __int128 v19; // [rsp+60h] [rbp-38h] BYREF

  v2 = *((_QWORD *)DeferredContext + 16);
  v3 = DeferredContext[1728];
  v19 = 0LL;
  v18 = 0LL;
  v6 = *(_DWORD *)(v2 + 144) & 0x200;
  if ( a2 )
  {
    NVMeScatterGatherListBufferPool = CreateNVMeScatterGatherListBufferPool();
    if ( NVMeScatterGatherListBufferPool < 0 )
    {
      *((_DWORD *)DeferredContext + 298) = 36;
      v8 = L"Create SGL buffer pool failed";
LABEL_21:
      v13 = *((_WORD *)DeferredContext + 596);
      *(_QWORD *)&v19 = *((_QWORD *)DeferredContext + 121);
      DWORD2(v19) = *((_DWORD *)DeferredContext + 298);
      StorpMarkDeviceFailed(*((_QWORD *)DeferredContext + 16), 0LL, 0, v13, v8, 8u, &v18, 0x10u, &v19);
      goto LABEL_28;
    }
    NVMeScatterGatherListBufferPool = NvmeControllerInitializeAdminQueue(DeferredContext);
    if ( NVMeScatterGatherListBufferPool < 0 )
    {
      *((_DWORD *)DeferredContext + 298) = 7;
      v8 = L"Admin Queue Initialize failed";
      goto LABEL_21;
    }
  }
  if ( v3 == 1 )
  {
    NvmeControllerStorMQInitializeAdminQueues(DeferredContext);
  }
  else
  {
    *(_DWORD *)(*((_QWORD *)DeferredContext + 115) + 36LL) = (*((_WORD *)DeferredContext + 3) - 1) & 0xFFF | (((*((_WORD *)DeferredContext + 3) - 1) & 0xFFF) << 16);
    _InterlockedOr(v16, 0);
    v9 = *(_QWORD *)(*((_QWORD *)DeferredContext + 107) + 8LL);
    v17 = (_QWORD *)(*((_QWORD *)DeferredContext + 115) + 48LL);
    *v17 = v9;
    _InterlockedOr(v16, 0);
    v10 = *(_QWORD *)(*((_QWORD *)DeferredContext + 89) + 8LL);
    v17 = (_QWORD *)(*((_QWORD *)DeferredContext + 115) + 40LL);
    *v17 = v10;
    _InterlockedOr(v16, 0);
  }
  NvmeControllerConfigure((__int64)DeferredContext);
  NVMeScatterGatherListBufferPool = NvmeControllerEnable((__int64)DeferredContext);
  if ( NVMeScatterGatherListBufferPool < 0 )
  {
    *((_DWORD *)DeferredContext + 298) = 8;
    v8 = L"Controller enable failed";
    goto LABEL_21;
  }
  if ( !a2 && (*((_QWORD *)DeferredContext + 121) & 0x20) == 0 )
    goto LABEL_28;
  *((_QWORD *)DeferredContext + 121) &= ~0x20uLL;
  NVMeScatterGatherListBufferPool = NvmeControllerIdentify((union _SLIST_HEADER *)DeferredContext);
  if ( NVMeScatterGatherListBufferPool < 0 )
  {
    *((_DWORD *)DeferredContext + 298) = 30;
    v8 = L"Identify controller failed";
    goto LABEL_21;
  }
  v11 = *((_QWORD *)DeferredContext + 74);
  *((_WORD *)DeferredContext + 2) = *(_WORD *)(v11 + 78);
  if ( !v6 )
  {
    NVMeScatterGatherListBufferPool = NvmeControllerCreatePendingIoQueueContext(DeferredContext, *(_DWORD *)(v11 + 516));
    if ( NVMeScatterGatherListBufferPool < 0 )
    {
      v8 = L"Create pending IO queue context failed";
LABEL_20:
      *((_DWORD *)DeferredContext + 298) = 31;
      goto LABEL_21;
    }
  }
  v12 = *((_QWORD *)DeferredContext + 74);
  *((_OWORD *)DeferredContext + 50) = *(_OWORD *)(v12 + 24);
  *((_OWORD *)DeferredContext + 51) = *(_OWORD *)(v12 + 40);
  *((_QWORD *)DeferredContext + 104) = *(_QWORD *)(v12 + 56);
  *(_QWORD *)(DeferredContext + 841) = *(_QWORD *)(v12 + 64);
  NVMeScatterGatherListBufferPool = NvmeControllerStoreSubsystemId(DeferredContext);
  if ( NVMeScatterGatherListBufferPool < 0 )
  {
    v8 = L"Storing SubsystemId failed";
    goto LABEL_20;
  }
  NvmeControllerGetIoCommandSetIdentify((union _SLIST_HEADER *)DeferredContext);
  NvmeControllerIdentifyUUIDList((union _SLIST_HEADER *)DeferredContext);
  if ( (unsigned int)Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline() )
    NvmeControllerBuildIoPollingConfiguration((__int64)DeferredContext, 1);
  if ( a2 )
  {
    NvmeGetNVMSetAttributeList(DeferredContext);
    if ( !v6 )
      NvmeNamespaceIdentify((union _SLIST_HEADER *)DeferredContext);
    NvmeGetNamespaceDescriptorListIdentify(DeferredContext);
    NvmeGetNamespaceIoCommandSetIdentify(DeferredContext);
  }
LABEL_28:
  v14 = *((_QWORD *)DeferredContext + 161);
  if ( NVMeScatterGatherListBufferPool < 0 )
    ++*(_DWORD *)(v14 + 12);
  else
    ++*(_DWORD *)(v14 + 8);
  return (unsigned int)NVMeScatterGatherListBufferPool;
}
