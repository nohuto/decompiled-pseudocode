/*
 * XREFs of ?RemoveUsb4HRPowerRefInternal@Usb4HostRouterPoFxRefv2@DxgMonitor@@AEAAJXZ @ 0x140278824
 * Callers:
 *     ?OnCleanup@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAXXZ @ 0x1402782A4 (-OnCleanup@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAXXZ.c)
 *     ?_OnChangePowerOff@MonitorUsb4State@DxgMonitor@@AEAAXXZ @ 0x14027973C (-_OnChangePowerOff@MonitorUsb4State@DxgMonitor@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1400063B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 */

__int64 __fastcall DxgMonitor::Usb4HostRouterPoFxRefv2::RemoveUsb4HRPowerRefInternal(
        DxgMonitor::Usb4HostRouterPoFxRefv2 *this)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 40) )
  {
    v2 = PoFxRemoveComponentRelation(
           *((_QWORD *)this + 3),
           *((unsigned int *)this + 4),
           *((_QWORD *)this + 4),
           &GUID_NULL);
    v4 = v2;
    if ( v2 < 0 )
    {
      WdLogSingleEntry4(2LL, *((_QWORD *)this + 3), *((unsigned int *)this + 4), *((_QWORD *)this + 4), v2);
      WdLogGlobalForLineNumber = 857;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(v3, (__int64)&Dxgk_ReportPowerComponentState);
    PoFxIdleComponent(*((_QWORD *)this + 3), *((unsigned int *)this + 4), 1LL);
    ++g_DbgUsb4IdelCount;
    *((_BYTE *)this + 40) = 0;
    if ( (unsigned int)dword_1401665B8 > 5 && tlgKeywordOn((__int64)&dword_1401665B8, 4096LL) )
    {
      v10 = *((_DWORD *)this + 4);
      v9 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        (__int64)&unk_1401464EF,
        v6,
        v7,
        (__int64)&v10,
        (__int64)&v9);
    }
  }
  return 0LL;
}
