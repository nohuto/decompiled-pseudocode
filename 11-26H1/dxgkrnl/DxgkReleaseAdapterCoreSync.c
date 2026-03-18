/*
 * XREFs of DxgkReleaseAdapterCoreSync @ 0x14030E1AC
 * Callers:
 *     DpiLeaveSystemDisplay @ 0x1400655D0 (DpiLeaveSystemDisplay.c)
 *     DpiEnterSystemDisplay @ 0x140086F40 (DpiEnterSystemDisplay.c)
 *     DpiDisableMsBddFallbackDriver @ 0x14024B0EC (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x14024B32C (DpiEnableMsBddFallbackDriver.c)
 *     DpiAcpiProcessEventRequests @ 0x14025374C (DpiAcpiProcessEventRequests.c)
 *     DpiPowerArbiterThread @ 0x14030C2C0 (DpiPowerArbiterThread.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiPdoIsChildConnected @ 0x140319F04 (DpiPdoIsChildConnected.c)
 *     DpiPdoHandleQueryDeviceText @ 0x1404100F0 (DpiPdoHandleQueryDeviceText.c)
 *     DpiAcpiHandleAcpiEvent @ 0x140411414 (DpiAcpiHandleAcpiEvent.c)
 *     DpiFdoCreateRelatedObjects @ 0x14042F7C0 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x14030E300 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkReleaseAdapterCoreSync(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v6; // rcx
  int v7; // [rsp+50h] [rbp-20h] BYREF
  __int64 v8; // [rsp+58h] [rbp-18h]
  char v9; // [rsp+60h] [rbp-10h]

  v7 = -1;
  v8 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v9 = 1;
    v7 = 1009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v9 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v7, 1009);
  if ( a1 )
  {
    DXGADAPTER::ReleaseCoreSync(a1, a2);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
    if ( v9 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 492;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No pAdapter specified, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
    if ( v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
}
