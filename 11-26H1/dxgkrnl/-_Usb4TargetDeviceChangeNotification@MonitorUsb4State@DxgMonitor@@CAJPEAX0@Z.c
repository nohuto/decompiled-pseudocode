/*
 * XREFs of ?_Usb4TargetDeviceChangeNotification@MonitorUsb4State@DxgMonitor@@CAJPEAX0@Z @ 0x140279890
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z @ 0x140277E80 (-DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z.c)
 *     ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402789DC (-SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_.c)
 */

__int64 __fastcall DxgMonitor::MonitorUsb4State::_Usb4TargetDeviceChangeNotification(
        char *NotificationStructure,
        DxgMonitor::MonitorUsb4State *Context)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  char v6; // dl
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  char v13; // [rsp+30h] [rbp-18h]

  v11 = -1;
  v12 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v13 = 1;
    v11 = 7063;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)NotificationStructure, (__int64)&EventProfilerEnter);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 7063);
  v4 = 0;
  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v5 )
  {
    v6 = 1;
LABEL_17:
    DxgMonitor::MonitorUsb4State::DestroyPowerConnectionWithUsb4Stack(Context, v6);
    goto LABEL_19;
  }
  v7 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( v7 )
  {
    v8 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
    if ( !v8 )
      v8 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
    if ( v8 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1197;
      v4 = -1073741811;
      goto LABEL_19;
    }
    v6 = 0;
    goto LABEL_17;
  }
  v4 = DxgMonitor::MonitorUsb4State::SetupPowerConnectionWithUsb4Stack(Context, 0LL);
LABEL_19:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
  return v4;
}
