/*
 * XREFs of ?SetLastWireformat@DXGMONITOR@@QEAAXT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1403632DC
 * Callers:
 *     ?MonitorSetLastWireformat@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x14026FD14 (-MonitorSetLastWireformat@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?MonitorSetLastWireformatAndColorspace@@YAJPEAUHDXGMONITOR__@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x140361E40 (-MonitorSetLastWireformatAndColorspace@@YAJPEAUHDXGMONITOR__@@T_D3DKMDT_WIRE_FORMAT_AND_PREFEREN.c)
 *     ?MonitorSetLastWireformatAndColorspace@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x140364A10 (-MonitorSetLastWireformatAndColorspace@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_.c)
 * Callees:
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x14002DDD0 (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?OnOutputColorspaceUpdated@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x14036338C (-OnOutputColorspaceUpdated@MonitorColorState@DxgMonitor@@QEAAXXZ.c)
 */

void __fastcall DXGMONITOR::SetLastWireformat(DXGMONITOR *this, union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE a2)
{
  __int64 v3; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  *((union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)this + 115) = a2;
  DxgMonitor::MonitorColorState::OnOutputColorspaceUpdated(*((DxgMonitor::MonitorColorState **)this + 28));
  v3 = *((_QWORD *)this + 31);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v4, (struct DXGFASTMUTEX *)(v3 + 96));
  auto_rc<DXGK_GAMMA_RAMP>::reset((ReferenceCounted **)(v3 + 144), 0LL);
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v4);
}
