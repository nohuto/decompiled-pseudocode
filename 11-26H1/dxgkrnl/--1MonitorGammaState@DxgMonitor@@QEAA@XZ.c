/*
 * XREFs of ??1MonitorGammaState@DxgMonitor@@QEAA@XZ @ 0x14027AA1C
 * Callers:
 *     ?reset@?$unique_ptr@VMonitorGammaState@DxgMonitor@@U?$default_delete@VMonitorGammaState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorGammaState@DxgMonitor@@@Z @ 0x14006CB14 (-reset@-$unique_ptr@VMonitorGammaState@DxgMonitor@@U-$default_delete@VMonitorGammaState@DxgMonit.c)
 * Callees:
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x14002DDD0 (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14006CEFC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DxgMonitor::MonitorGammaState::~MonitorGammaState(ReferenceCounted **this)
{
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 19));
  auto_rc<DXGK_GAMMA_RAMP>::reset(this + 18, 0LL);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 12));
}
