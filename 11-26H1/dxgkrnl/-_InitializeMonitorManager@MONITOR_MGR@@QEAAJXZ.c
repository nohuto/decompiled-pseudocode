/*
 * XREFs of ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x140274F2C
 * Callers:
 *     ?MonitorCreateMonitorManager@@YAJPEAVADAPTER_DISPLAY@@PEAX@Z @ 0x140191D64 (-MonitorCreateMonitorManager@@YAJPEAVADAPTER_DISPLAY@@PEAX@Z.c)
 * Callees:
 *     Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline @ 0x140086EE4 (Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Initialize@USB4_POWERON_WORK_QUEUE@@QEAAJXZ @ 0x140278138 (-Initialize@USB4_POWERON_WORK_QUEUE@@QEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_InitializeMonitorManager(USB4_POWERON_WORK_QUEUE **this, __int64 a2)
{
  USB4_POWERON_WORK_QUEUE *v3; // rcx
  __int64 result; // rax
  int v5; // edi
  int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  WdLogGlobalForLineNumber = 322;
  if ( g_IsInternalRelease || (*(_DWORD *)(*((_QWORD *)this[3] + 2) + 444LL) & 0x200) != 0 )
  {
    v6 = 0;
    qword_140166F98 = (__int64)&v6;
    v7 = 0;
    qword_140166FA8 = (__int64)&v6;
    qword_140166FD0 = (__int64)&v7;
    qword_140166FE0 = (__int64)&v7;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &unk_140166F80, 0LL, 0LL);
    if ( v6 )
      *((_BYTE *)this + 92) = 0;
    if ( v7 )
      *((_BYTE *)this + 19) = 0;
  }
  if ( !(unsigned int)Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_12;
  v3 = this[12];
  if ( !v3 )
  {
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 376;
    return result;
  }
  v5 = USB4_POWERON_WORK_QUEUE::Initialize(v3);
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(2LL);
    result = (unsigned int)v5;
    WdLogGlobalForLineNumber = 382;
  }
  else
  {
LABEL_12:
    *((_BYTE *)this + 20) = 1;
    return 0LL;
  }
  return result;
}
