/*
 * XREFs of ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x140125A90
 * Callers:
 *     ?VidMmInitGlobals@@YAJXZ @ 0x140125A78 (-VidMmInitGlobals@@YAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14001D9F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x140038588 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     McGenEventRegister_EtwRegister @ 0x14004CA7C (McGenEventRegister_EtwRegister.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     TlgRegisterAggregateProviderEx @ 0x14009BA60 (TlgRegisterAggregateProviderEx.c)
 *     ?VidMmInitDmaPoolGlobals@@YAJXZ @ 0x1400A409C (-VidMmInitDmaPoolGlobals@@YAJXZ.c)
 *     ?VidMmCalculateHeapPerNumaNodeArraySize@@YAKXZ @ 0x1400A4BFC (-VidMmCalculateHeapPerNumaNodeArraySize@@YAKXZ.c)
 *     ?InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ @ 0x1400A54C8 (-InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ.c)
 *     ?ReadConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x14011FA24 (-ReadConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 */

__int64 VIDMM_GLOBAL::InitGlobals(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  void *v2; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v4; // rax
  unsigned __int64 MaximumGlobalAdapterCount; // kr00_8
  __int64 v6; // rcx
  int v7; // eax
  int inited; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v12; // eax
  __int64 v13; // rax
  struct VIDMM_EXISTINGSYSMEM_HEAP *v14; // rcx
  __int64 (__fastcall *v15)(struct VIDMM_EXISTINGSYSMEM_HEAP *, _QWORD, _QWORD); // rax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  NTSTATUS v19; // eax
  __int64 v20; // rcx
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  int LiveDumpWithWdLogs; // eax
  __int64 v25; // rdx
  _PCW_REGISTRATION_INFORMATION Info; // [rsp+58h] [rbp+17h] BYREF
  __int64 v27; // [rsp+88h] [rbp+47h]

  KeQueryPerformanceCounter(&VIDMM_GLOBAL::_QpcFrequency);
  qword_14008A6C8 = (__int64)&g_VidMmProcessListHead;
  g_VidMmProcessListHead.Flink = &g_VidMmProcessListHead;
  g_VidMmProcessListHeadLock = 0LL;
  bTracingEnabled = 0;
  McGenEventRegister_EtwRegister();
  TlgRegisterAggregateProviderEx(v1, v0);
  VIDMM_GLOBAL::ReadConfiguration(v2);
  VIDMM_GLOBAL::_RotationHistory = (void *)operator new[](98304LL, 0x6D4D6956u, 64LL);
  if ( VIDMM_GLOBAL::_RotationHistory )
    *(&VIDMM_GLOBAL::_RotationHistory + 1) = (void *)2048;
  Global = DXGGLOBAL::GetGlobal();
  MaximumGlobalAdapterCount = (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global);
  v4 = 4 * MaximumGlobalAdapterCount;
  if ( !is_mul_ok(MaximumGlobalAdapterCount, 4uLL) )
    v4 = -1LL;
  VIDMM_PROCESS::_pDxProcessPerAdapterCount = (void *)operator new[](v4, 0x33316956u, 256LL);
  if ( !VIDMM_PROCESS::_pDxProcessPerAdapterCount )
  {
    _InterlockedIncrement(&dword_14008A73C);
    WdLogSingleEntry0(6LL);
    v7 = 1115;
LABEL_35:
    v25 = 262145LL;
    WdLogGlobalForLineNumber = v7;
    goto LABEL_36;
  }
  inited = VidMmInitDmaPoolGlobals();
  v9 = inited;
  if ( inited < 0 )
  {
    WdLogSingleEntry1(1LL, inited);
    WdLogGlobalForLineNumber = 1127;
    goto LABEL_9;
  }
  v12 = VIDMM_PROCESS_FENCE_STORAGE::InitGlobalStorage();
  v9 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(1LL, v12);
    WdLogGlobalForLineNumber = 1135;
    goto LABEL_9;
  }
  v13 = operator new(16LL, 0x65316956u, 256LL);
  v14 = (struct VIDMM_EXISTINGSYSMEM_HEAP *)v13;
  if ( !v13 )
  {
    g_pExistingSysMemHeap = 0LL;
    _InterlockedIncrement(&dword_14008A8DC);
    WdLogSingleEntry0(6LL);
    v7 = 1147;
    goto LABEL_35;
  }
  *(_BYTE *)(v13 + 8) = 0;
  *(_QWORD *)v13 = &VIDMM_EXISTINGSYSMEM_HEAP::`vftable';
  v15 = (__int64 (__fastcall *)(struct VIDMM_EXISTINGSYSMEM_HEAP *, _QWORD, _QWORD))*(&VIDMM_EXISTINGSYSMEM_HEAP::`vftable'
                                                                                    + 1);
  g_pExistingSysMemHeap = v14;
  v16 = v15(v14, 0LL, 0LL);
  v9 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry1(1LL, v16);
    WdLogGlobalForLineNumber = 1154;
    goto LABEL_9;
  }
  qword_14008AAF0 = (__int64)&VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
  VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
  v17 = operator new(32LL, 0x30316956u, 256LL);
  if ( v17 )
  {
    *(_QWORD *)v17 = 0LL;
    *(_QWORD *)(v17 + 8) = 0LL;
    *(_DWORD *)(v17 + 16) = 0;
    *(_DWORD *)(v17 + 20) = 76;
    *(_DWORD *)(v17 + 24) = -1;
    VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = (struct DXGPUSHLOCK *)v17;
    g_ppSystemHeapPerNumaNodeArraySize = VidMmCalculateHeapPerNumaNodeArraySize();
    v18 = 8LL * g_ppSystemHeapPerNumaNodeArraySize;
    if ( !is_mul_ok(g_ppSystemHeapPerNumaNodeArraySize, 8uLL) )
      v18 = -1LL;
    g_ppSystemHeapPerNumaNode = (void *)operator new[](v18, 0x63316956u, 256LL);
    if ( !g_ppSystemHeapPerNumaNode )
    {
      _InterlockedIncrement(&dword_14008A8CC);
      WdLogSingleEntry0(6LL);
      v7 = 1173;
      goto LABEL_35;
    }
    VIDMM_PARTITION::_PartitionTree = 0LL;
    qword_14008A6A8 = (__int64)&VIDMM_GLOBAL::_AdapterListHead;
    VIDMM_GLOBAL::_AdapterListHead = &VIDMM_GLOBAL::_AdapterListHead;
    *(_QWORD *)&Info.Version = 512LL;
    Info.Name = (PCUNICODE_STRING)L"$&";
    Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetProcessMemory'::`2'::Descriptors;
    *(_QWORD *)&Info.CounterCount = 5LL;
    v27 = 0LL;
    Info.Callback = 0LL;
    Info.CallbackContext = 0LL;
    v19 = PcwRegister(&GpuPerformanceCounterSetProcessMemory, &Info);
    v9 = v19;
    if ( v19 >= 0 )
    {
      byte_14008A9D2 = 1;
      Info.Name = (PCUNICODE_STRING)L"$&";
      *(_QWORD *)&Info.Version = 512LL;
      Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetAdapterMemory'::`2'::Descriptors;
      *(_QWORD *)&Info.CounterCount = 3LL;
      v27 = 0LL;
      Info.Callback = 0LL;
      Info.CallbackContext = 0LL;
      v21 = PcwRegister(&GpuPerformanceCounterSetAdapterMemory, &Info);
      v9 = v21;
      if ( v21 >= 0 )
      {
        byte_14008A9D1 = 1;
        Info.Name = (PCUNICODE_STRING)L"02";
        *(_QWORD *)&Info.Version = 512LL;
        Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetLocalAdapterMemory'::`2'::Descriptors;
        *(_QWORD *)&Info.CounterCount = 1LL;
        v27 = 0LL;
        Info.Callback = 0LL;
        Info.CallbackContext = 0LL;
        v22 = PcwRegister(&GpuPerformanceCounterSetLocalAdapterMemory, &Info);
        v9 = v22;
        if ( v22 >= 0 )
        {
          byte_14008A9D0 = 1;
          Info.Name = (PCUNICODE_STRING)L"8:";
          *(_QWORD *)&Info.Version = 512LL;
          Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetNonLocalAdapterMemory'::`2'::Descriptors;
          *(_QWORD *)&Info.CounterCount = 1LL;
          v27 = 0LL;
          Info.Callback = 0LL;
          Info.CallbackContext = 0LL;
          v23 = PcwRegister(&GpuPerformanceCounterSetNonLocalAdapterMemory, &Info);
          v9 = v23;
          if ( v23 >= 0 )
          {
            byte_14008A2E8 = 1;
            g_Feature_FenceStorageUsingVidMmAlloc = 0;
            g_Feature_Largify64KBPrototype = 0;
            if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
              ExInitializeLookasideListEx(&g_VaRangeLookasideList, 0LL, 0LL, PagedPool, 0, 0x90uLL, 0x35356956u, 0);
            return v9;
          }
          WdLogSingleEntry1(1LL, v23);
          WdLogGlobalForLineNumber = 1223;
        }
        else
        {
          WdLogSingleEntry1(1LL, v22);
          WdLogGlobalForLineNumber = 1212;
        }
      }
      else
      {
        WdLogSingleEntry1(1LL, v21);
        WdLogGlobalForLineNumber = 1201;
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, v19);
      WdLogGlobalForLineNumber = 1190;
    }
    DxgkLogInternalTriageEvent(v20, 0x40000LL);
    LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(403LL, 2065LL, (int)v9, 0LL, 0LL, 0);
    if ( LiveDumpWithWdLogs >= 0 )
      return v9;
    WdLogSingleEntry1(1LL, LiveDumpWithWdLogs);
    WdLogGlobalForLineNumber = 1250;
LABEL_9:
    DxgkLogInternalTriageEvent(v10, 0x40000LL);
    return v9;
  }
  VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = 0LL;
  WdLogSingleEntry1(1LL, -1073741801LL);
  v25 = 0x40000LL;
  WdLogGlobalForLineNumber = 1162;
LABEL_36:
  DxgkLogInternalTriageEvent(v6, v25);
  return 3221225495LL;
}
