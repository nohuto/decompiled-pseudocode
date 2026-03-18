/*
 * XREFs of ?AddUsb4HRPowerRef@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAJU_LUID@@I@Z @ 0x140277BE4
 * Callers:
 *     ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402789DC (-SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x140278EC8 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1400017BC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     Feature_Usb4FixDoublePoFxRef__private_IsEnabledDeviceUsageNoInline @ 0x140098BD8 (Feature_Usb4FixDoublePoFxRef__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DxgMonitor::Usb4HostRouterPoFxRefv2::AddUsb4HRPowerRef(
        DxgMonitor::Usb4HostRouterPoFxRefv2 *this,
        struct _LUID a2,
        unsigned int a3)
{
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v7; // esi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebp
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _LUID v19; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v20[8]; // [rsp+48h] [rbp-20h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF
  int v22; // [rsp+88h] [rbp+20h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v20, (DxgMonitor::Usb4HostRouterPoFxRefv2 *)((char *)this + 48));
  IsEnabledDeviceUsageNoInline = Feature_Usb4FixDoublePoFxRef__private_IsEnabledDeviceUsageNoInline();
  v7 = 0;
  if ( *((_BYTE *)this + 40) )
  {
    if ( IsEnabledDeviceUsageNoInline )
      goto LABEL_16;
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 780;
  }
  DxgkLogCodePointPacket(0x7Du, 0, a3, 0, *(_QWORD *)&a2);
  if ( g_DbgUsb4MonitorPowerOnDelayInSeconds )
  {
    Interval.QuadPart = -10000000LL * g_DbgUsb4MonitorPowerOnDelayInSeconds;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v8 = PoFxAddComponentRelation(*((_QWORD *)this + 3), *((unsigned int *)this + 4), *((_QWORD *)this + 4), &GUID_NULL);
  v11 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry3(2LL, v8, *((_QWORD *)this + 3), *((unsigned int *)this + 4));
    WdLogGlobalForLineNumber = 823;
  }
  else
  {
    v12 = WdLogNewEntry5_WdTrace(v10, v9);
    v13 = bTracingEnabled == 0;
    *(_QWORD *)(v12 + 24) = *((_QWORD *)this + 3);
    v14 = *((unsigned int *)this + 4);
    *(_QWORD *)(v12 + 32) = v14;
    WdLogGlobalForLineNumber = 798;
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(v14, (__int64)&Dxgk_ReportPowerComponentState);
    PoFxActivateComponent(*((_QWORD *)this + 3), *((unsigned int *)this + 4), 1LL);
    ++g_DbgUsb4ActivateCount;
    if ( (unsigned int)dword_1401665B8 > 5 && tlgKeywordOn((__int64)&dword_1401665B8, 4096LL) )
    {
      v22 = *((_DWORD *)this + 4);
      Interval.LowPart = a3;
      v19 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v15,
        (__int64)&unk_14014654C,
        v16,
        v17,
        (__int64)&v22,
        (__int64)&v19,
        (__int64)&Interval);
    }
    *((_BYTE *)this + 40) = 1;
  }
  DxgkLogCodePointPacket(0x7Du, 1u, a3, v11, *(_QWORD *)&a2);
  v7 = v11;
LABEL_16:
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v20);
  return v7;
}
