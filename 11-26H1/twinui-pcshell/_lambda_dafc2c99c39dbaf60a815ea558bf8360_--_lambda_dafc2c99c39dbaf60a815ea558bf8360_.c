/*
 * XREFs of _lambda_dafc2c99c39dbaf60a815ea558bf8360_::_lambda_dafc2c99c39dbaf60a815ea558bf8360_ @ 0x1802ED524
 * Callers:
 *     ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x18005A670 (-ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ.c)
 *     ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005C880 (-QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005CA0C (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005CD2C (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005CE4C (-EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x18018A018 (-_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ.c)
 *     ?SetPosition@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x180305C30 (-SetPosition@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewPosition@@@Z.c)
 *     ?HandleFlashingChangeForApplication@CApplicationViewManager@@UEAAXPEAUIImmersiveApplication@@H@Z @ 0x180308890 (-HandleFlashingChangeForApplication@CApplicationViewManager@@UEAAXPEAUIImmersiveApplication@@H@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall lambda_dafc2c99c39dbaf60a815ea558bf8360_::_lambda_dafc2c99c39dbaf60a815ea558bf8360_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *result; // rax

  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  result = a1;
  a1[1] = a3;
  return result;
}
