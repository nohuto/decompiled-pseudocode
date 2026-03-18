/*
 * XREFs of ?_HandleUsb4HRPnPNotification@USB4_HOSTROUTER_MGR@@CAJPEAX0@Z @ 0x140279580
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?AddHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z @ 0x140277A68 (-AddHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?RemoveHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z @ 0x14027875C (-RemoveHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall USB4_HOSTROUTER_MGR::_HandleUsb4HRPnPNotification(
        char *NotificationStructure,
        USB4_HOSTROUTER_MGR *Context)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v13; // rcx
  int v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h]
  char v16; // [rsp+30h] [rbp-10h]

  v14 = -1;
  v15 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v16 = 1;
    v14 = 7062;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)NotificationStructure, (__int64)&EventProfilerEnter);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 7062);
  WdLogNewEntry5_WdTrace(v5, v4);
  WdLogGlobalForLineNumber = 515;
  if ( !NotificationStructure || !Context )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 520;
    goto LABEL_26;
  }
  v6 = *(_QWORD *)(NotificationStructure + 20) - *(_QWORD *)&GUID_DEVINTERFACE_USB4_VIRTUAL_POWER_PDO.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 28) - *(_QWORD *)GUID_DEVINTERFACE_USB4_VIRTUAL_POWER_PDO.Data4;
  if ( v6 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 528;
LABEL_26:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
    if ( v16 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  v7 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v7 )
  {
    v8 = USB4_HOSTROUTER_MGR::AddHostRouter(Context, *((const struct _UNICODE_STRING **)NotificationStructure + 5));
LABEL_19:
    v10 = v8;
    goto LABEL_21;
  }
  v9 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  if ( !v9 )
  {
    v8 = USB4_HOSTROUTER_MGR::RemoveHostRouter(Context, *((const struct _UNICODE_STRING **)NotificationStructure + 5));
    goto LABEL_19;
  }
  v10 = -1073741811;
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
  return v10;
}
