/*
 * XREFs of ??4?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAAEAV0@AEAV0@@Z @ 0x14002E0D0
 * Callers:
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14027AF14 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 *     ?_SetScalarMultiplier@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14027B3D0 (-_SetScalarMultiplier@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x14002DDD0 (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 */

ReferenceCounted **__fastcall auto_rc<DXGK_GAMMA_RAMP>::operator=(ReferenceCounted **a1, ReferenceCounted **a2)
{
  ReferenceCounted *v4; // rdx

  v4 = *a2;
  *a2 = 0LL;
  auto_rc<DXGK_GAMMA_RAMP>::reset(a1, v4);
  return a1;
}
