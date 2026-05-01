/*
 * XREFs of ?reset@?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAAXPEAVFocusHoldingTank@@@Z @ 0x180050904
 * Callers:
 *     ?OnLauncherShow@XamlLauncher@@UEAAXXZ @ 0x1800508D0 (-OnLauncherShow@XamlLauncher@@UEAAXXZ.c)
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x180050E80 (--1XamlLauncherState@@UEAA@XZ.c)
 *     ??1XamlLauncher@@UEAA@XZ @ 0x18005192C (--1XamlLauncher@@UEAA@XZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x180076FE0 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180245B10 (-UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180249650 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ??1?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAA@XZ @ 0x1802C7EDC (--1-$unique_ptr@VFocusHoldingTank@@U-$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ??4?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x180459630 (--4-$unique_ptr@VFocusHoldingTank@@U-$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAAAEAV.c)
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x18045B19C (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 * Callees:
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x18045E800 (--1FocusHoldingTank@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<FocusHoldingTank,wistd::default_delete<FocusHoldingTank>>::reset(
        FocusHoldingTank **a1,
        FocusHoldingTank *a2)
{
  FocusHoldingTank *v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    FocusHoldingTank::~FocusHoldingTank(v2);
    operator delete(v2, (const struct std::nothrow_t *)0x18);
  }
}
