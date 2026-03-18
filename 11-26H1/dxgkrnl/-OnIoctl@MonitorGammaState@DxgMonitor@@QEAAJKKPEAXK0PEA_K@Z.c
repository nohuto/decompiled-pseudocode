/*
 * XREFs of ?OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x14027ADFC
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z @ 0x1403EA898 (-_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z.c)
 * Callees:
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x140076FC4 (Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14027AF14 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 *     ?_SetScalarMultiplier@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14027B3D0 (-_SetScalarMultiplier@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 *     ?_QueryColorSpaceTransformCaps@MonitorGammaState@DxgMonitor@@AEBAJKPEAXPEA_K@Z @ 0x1403AAAD4 (-_QueryColorSpaceTransformCaps@MonitorGammaState@DxgMonitor@@AEBAJKPEAXPEA_K@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::OnIoctl(
        DxgMonitor::MonitorGammaState *this,
        int a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        _QWORD *a6,
        unsigned __int64 *a7)
{
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  unsigned int v15; // ebx
  __int64 v16; // xmm0_8

  v10 = a2 - 2297856;
  if ( !v10 )
    return DxgMonitor::MonitorGammaState::_QueryColorSpaceTransformCaps(this, a5, a6, a7);
  v11 = v10 - 4;
  if ( v11 )
  {
    v12 = v11 - 4;
    if ( v12 )
    {
      v13 = v12 - 4;
      if ( v13 )
      {
        if ( v13 == 4 && (unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline() )
          return DxgMonitor::MonitorGammaState::_SetScalarMultiplier(this, a3, a4);
        return 3221225659LL;
      }
      v15 = 0;
      if ( !(unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline() )
        return 3221225659LL;
      if ( !a7 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 138;
      }
      *a7 = 0LL;
      if ( a5 >= 0xC )
      {
        v16 = *((_QWORD *)this + 10);
        *a7 = 12LL;
        *a6 = v16;
        *((_DWORD *)a6 + 2) = *((_DWORD *)this + 22);
      }
      else
      {
        return (unsigned int)-1073741789;
      }
      return v15;
    }
    else
    {
      *a7 = 0LL;
      return 0LL;
    }
  }
  else
  {
    *a7 = 0LL;
    return DxgMonitor::MonitorGammaState::_SetColorSpaceTransform(this, a3, a4);
  }
}
