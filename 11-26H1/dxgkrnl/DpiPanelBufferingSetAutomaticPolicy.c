/*
 * XREFs of DpiPanelBufferingSetAutomaticPolicy @ 0x1400921EC
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1401D1110 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline @ 0x14005D4C4 (Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiPanelBufferingSetAutomaticPolicy(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h]
  char v19; // [rsp+30h] [rbp-10h]

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2231;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2231);
  if ( !(unsigned int)Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline() )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
    }
    return 2147500033LL;
  }
  v9 = -1073741811;
  if ( a1 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 && *(_DWORD *)(v10 + 16) == 1953656900 && *(_DWORD *)(v10 + 20) == 2 )
    {
      if ( !*(_BYTE *)(v10 + 6512) )
      {
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
        if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
        return 3221225659LL;
      }
      LOBYTE(v6) = 1;
      v9 = DpiAcquireCoreSyncAccessSafe(a1, v6);
      if ( (v9 & 0xC0000000) != 0xC0000000 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v10 + 6504))(*(_QWORD *)(v10 + 6456), a2, a3);
        LOBYTE(v13) = 1;
        v14 = v12;
        DpiReleaseCoreSyncAccessSafe(a1, v13);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
        if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
        return v14;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 239;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
  return v9;
}
