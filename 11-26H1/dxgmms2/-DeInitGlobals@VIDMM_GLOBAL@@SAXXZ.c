/*
 * XREFs of ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x14009D490
 * Callers:
 *     ?VidMmDeInitGlobals@@YAXXZ @ 0x1400A2D3C (-VidMmDeInitGlobals@@YAXXZ.c)
 * Callees:
 *     ??_GVIDMM_PROCESS_FENCE_STORAGE@@AEAAPEAXI@Z @ 0x140004680 (--_GVIDMM_PROCESS_FENCE_STORAGE@@AEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     McGenEventUnregister_EtwUnregister @ 0x14004DDE0 (McGenEventUnregister_EtwUnregister.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     TlgUnregisterAggregateProvider @ 0x1400C49A0 (TlgUnregisterAggregateProvider.c)
 */

void VIDMM_GLOBAL::DeInitGlobals(void)
{
  _QWORD *v0; // rcx
  unsigned __int16 v1; // bx
  __int64 v2; // rdi
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  bool v4; // cf

  if ( byte_14008A9D2 )
    PcwUnregister(GpuPerformanceCounterSetProcessMemory);
  if ( byte_14008A9D1 )
    PcwUnregister(GpuPerformanceCounterSetAdapterMemory);
  if ( byte_14008A9D0 )
    PcwUnregister(GpuPerformanceCounterSetLocalAdapterMemory);
  if ( byte_14008A2E8 )
    PcwUnregister(GpuPerformanceCounterSetNonLocalAdapterMemory);
  operator delete(VIDMM_PROCESS::_pDxProcessPerAdapterCount);
  if ( VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage )
    VIDMM_PROCESS_FENCE_STORAGE::`scalar deleting destructor'(VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage);
  VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage = 0LL;
  if ( Resource )
  {
    ExDeleteResourceLite(Resource);
    operator delete(Resource);
    Resource = 0LL;
  }
  v0 = g_ppSystemHeapPerNumaNode;
  if ( g_ppSystemHeapPerNumaNode )
  {
    v1 = 0;
    if ( g_ppSystemHeapPerNumaNodeArraySize )
    {
      do
      {
        v2 = v1;
        v3 = (void (__fastcall ***)(_QWORD, __int64))v0[v1];
        if ( v3 )
          (**v3)(v3, 1LL);
        v0 = g_ppSystemHeapPerNumaNode;
        v4 = ++v1 < g_ppSystemHeapPerNumaNodeArraySize;
        *((_QWORD *)g_ppSystemHeapPerNumaNode + v2) = 0LL;
      }
      while ( v4 );
    }
    operator delete(v0);
    g_ppSystemHeapPerNumaNode = 0LL;
  }
  if ( g_pExistingSysMemHeap )
  {
    (**(void (__fastcall ***)(struct VIDMM_EXISTINGSYSMEM_HEAP *, __int64))g_pExistingSysMemHeap)(
      g_pExistingSysMemHeap,
      1LL);
    g_pExistingSysMemHeap = 0LL;
  }
  if ( VIDMM_GLOBAL::_RotationHistory )
  {
    operator delete(VIDMM_GLOBAL::_RotationHistory);
    *(_OWORD *)&VIDMM_GLOBAL::_RotationHistory = 0LL;
  }
  TlgUnregisterAggregateProvider();
  McGenEventUnregister_EtwUnregister(&DxgkControlGuid_Context);
  DxgkControlGuid_Context = 0LL;
  if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
    ExDeleteLookasideListEx(&g_VaRangeLookasideList);
}
