/*
 * XREFs of ?DxgMiniportQueryMonitorInterfaceCB@@YAJQEAXW4_DXGK_MONITOR_INTERFACE_VERSION@@PEAPEBU_DXGK_MONITOR_INTERFACE@@@Z @ 0x140271EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1400348A0 (DpiGetDxgAdapter.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x140067340 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DxgMiniportQueryMonitorInterfaceCB(
        __int64 a1,
        enum _DXGK_MONITOR_INTERFACE_VERSION a2,
        const struct _DXGK_MONITOR_INTERFACE **a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  DXGADAPTER *DxgAdapter; // rbx
  __int64 v9; // rcx
  const struct _DXGK_MONITOR_INTERFACE *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h]
  char v15; // [rsp+40h] [rbp-10h]

  v4 = a2;
  v13 = -1;
  v14 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v15 = 1;
    v13 = 7057;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 7057);
  if ( !a3 )
  {
    WdLogSingleEntry3(2LL, 0LL, v4, a1);
    WdLogGlobalForLineNumber = 2505;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
    if ( v15 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  *a3 = 0LL;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  if ( !DxgAdapter )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2520;
    goto LABEL_19;
  }
  if ( KeGetCurrentIrql()
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DxgAdapter + 27) + 64LL) + 40LL) + 28LL) >= 0x2003u )
  {
    WdLogSingleEntry5(0LL, 275LL, 20LL, DxgAdapter, 0LL, 0LL);
    WdLogGlobalForLineNumber = 2530;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2540;
  }
  if ( !*((_QWORD *)DxgAdapter + 395) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2548;
LABEL_19:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
    if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
    return 3223191554LL;
  }
  if ( (_DWORD)v4 == 1 )
  {
    v10 = (const struct _DXGK_MONITOR_INTERFACE *)&DXGK_MONITOR_INTERFACE_V1_IMPL::DxgMiniportMonitorInterfaceV1;
  }
  else if ( (_DWORD)v4 == 2 )
  {
    v10 = (const struct _DXGK_MONITOR_INTERFACE *)&DXGK_MONITOR_INTERFACE_V2_IMPL::DxgMiniportMonitorInterfaceV2;
  }
  else if ( (_DWORD)v4 != 3
         || (v10 = (const struct _DXGK_MONITOR_INTERFACE *)((unsigned __int64)&DXGK_MONITOR_INTERFACE_V3_IMPL::DxgMiniportMonitorInterfaceV3 & -(__int64)((unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() != 0))) == 0LL )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2587;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
    if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    return 3221225659LL;
  }
  *a3 = v10;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
  return 0LL;
}
