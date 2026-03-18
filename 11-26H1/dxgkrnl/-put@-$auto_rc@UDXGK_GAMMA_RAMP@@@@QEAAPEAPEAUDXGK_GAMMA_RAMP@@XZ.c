/*
 * XREFs of ?put@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ @ 0x14005D53C
 * Callers:
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14027AF14 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 *     ?_SetScalarMultiplier@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14027B3D0 (-_SetScalarMultiplier@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 *     ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1403AAB80 (-OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

_QWORD *__fastcall auto_rc<DXGK_GAMMA_RAMP>::put(_QWORD *a1)
{
  if ( *a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 202;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"An auto_rc must be empty before calling put()",
      202LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return a1;
}
