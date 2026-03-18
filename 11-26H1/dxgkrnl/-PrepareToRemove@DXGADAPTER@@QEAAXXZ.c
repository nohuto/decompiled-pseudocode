/*
 * XREFs of ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x14019D2F4
 * Callers:
 *     DpiPowerArbiterThread @ 0x14030C2C0 (DpiPowerArbiterThread.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x140071AA0 (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?_ReleaseAllPoFxResources@MONITOR_MGR@@QEAAXXZ @ 0x140275744 (-_ReleaseAllPoFxResources@MONITOR_MGR@@QEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

void __fastcall DXGADAPTER::PrepareToRemove(DXGADAPTER *this)
{
  __int64 v2; // rax
  MONITOR_MGR *v3; // rcx
  __int64 v4; // rcx

  *((_DWORD *)this + 50) = 6;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9276;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 9276LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 409) )
  {
    *((_BYTE *)this + 3702) = 1;
    if ( !KeCancelTimer((PKTIMER)((char *)this + 3816)) )
    {
      KeFlushQueuedDpcs();
      if ( !KeCancelTimer((PKTIMER)((char *)this + 3816)) )
        KeFlushQueuedDpcs();
    }
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 28LL) >= 0x3008u )
    {
      DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STOPPED, 0LL, 0LL, 0LL, 0LL, 0LL);
      *((_BYTE *)this + 3705) = 0;
    }
    *((_DWORD *)this + 986) = 0;
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1309;
    }
    v2 = *((_QWORD *)this + 395);
    if ( v2 )
    {
      v3 = *(MONITOR_MGR **)(v2 + 112);
      if ( v3 )
        MONITOR_MGR::_ReleaseAllPoFxResources(v3);
    }
  }
  v4 = *((_QWORD *)this + 396);
  if ( v4 )
    ADAPTER_RENDER::FlushScheduler(v4, 5LL, 0xFFFFFFFFLL);
}
