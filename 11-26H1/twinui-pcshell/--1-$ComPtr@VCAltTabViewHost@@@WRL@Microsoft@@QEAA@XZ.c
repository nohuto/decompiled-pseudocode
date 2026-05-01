/*
 * XREFs of ??1?$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C8684
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAltTabViewHost_CAltTabViewHost_IMultitaskingData___&_IMultitaskingViewManagerInternal___&_IApplicationViewSwitcher___&_IImmersiveAppCrusher___&_IMultitaskingViewVisibilityServiceInternal___&_IMultitaskingViewGestureState___&_IApplicationViewCollection___&_ITouchGestureSettings___&__::_1_::dtor$2 @ 0x1806F11D9 (_Microsoft--WRL--Details--MakeAndInitialize_CAltTabViewHost_CAltTabViewHost_IMultitaskingData___.c)
 *     _CAltTabViewHost_CreateInstance_::_1_::dtor$0 @ 0x1806F11EB (_CAltTabViewHost_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CAltTabViewHost>::~ComPtr<CAltTabViewHost>(volatile int **a1)
{
  return Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease(a1);
}
