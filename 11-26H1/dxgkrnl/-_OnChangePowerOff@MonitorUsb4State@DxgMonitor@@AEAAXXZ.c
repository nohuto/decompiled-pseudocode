/*
 * XREFs of ?_OnChangePowerOff@MonitorUsb4State@DxgMonitor@@AEAAXXZ @ 0x14027973C
 * Callers:
 *     ?_ChangePowerStatus@DXGMONITOR@@QEAAX_N@Z @ 0x140412914 (-_ChangePowerStatus@DXGMONITOR@@QEAAX_N@Z.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?RemoveUsb4HRPowerRefInternal@Usb4HostRouterPoFxRefv2@DxgMonitor@@AEAAJXZ @ 0x140278824 (-RemoveUsb4HRPowerRefInternal@Usb4HostRouterPoFxRefv2@DxgMonitor@@AEAAJXZ.c)
 */

void __fastcall DxgMonitor::MonitorUsb4State::_OnChangePowerOff(DxgMonitor::MonitorUsb4State *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  unsigned int v4; // edi
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // rbx
  char v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 954;
  }
  v2 = *(_QWORD *)this;
  *((_WORD *)this + 28) = 1;
  v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 8LL))(v2, &v8);
  v4 = *((unsigned __int8 *)this + 56);
  v5 = *v3;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  DxgkLogCodePointPacket(0x7Au, v6, v4, 0, v5);
  v7 = *((_QWORD *)this + 10);
  if ( v7 )
  {
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v8, (struct DXGFASTMUTEX *)(v7 + 48));
    DxgMonitor::Usb4HostRouterPoFxRefv2::RemoveUsb4HRPowerRefInternal((DxgMonitor::Usb4HostRouterPoFxRefv2 *)v7);
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v8);
  }
}
