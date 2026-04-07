/*
 * XREFs of ?reset@?$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004911C
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180006850 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180029CCC (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?Initialize@CCompositor@@IEAAJXZ @ 0x180068B90 (-Initialize@CCompositor@@IEAAJXZ.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180081384 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitializeTelemetry@CDisplayAnimatedVisual@@AEAAXXZ @ 0x18008D570 (-InitializeTelemetry@CDisplayAnimatedVisual@@AEAAXXZ.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x180099384 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180099C14 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?Shutdown@CCompositor@@IEAAXXZ @ 0x1800A9FA0 (-Shutdown@CCompositor@@IEAAXXZ.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800AC090 (--1CDesktopManager@@EEAA@XZ.c)
 *     ?InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z @ 0x1800B6510 (-InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z.c)
 *     ?EndAnimationFrameStats@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D5CB8 (-EndAnimationFrameStats@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     ?StartAnimationFrameStats@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D6690 (-StartAnimationFrameStats@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
