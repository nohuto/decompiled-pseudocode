/*
 * XREFs of ??1?$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@QEAA@XZ @ 0x1804C50DC
 * Callers:
 *     _VirtualDesktopAddAnimationCoordinator_CreateInstance_::_1_::dtor$0 @ 0x1806C98CC (_VirtualDesktopAddAnimationCoordinator_CreateInstance_--_1_--dtor$0.c)
 *     _SwitchItemCloseAnimationCoordinator_CreateInstance_::_1_::dtor$0 @ 0x1806C98DE (_SwitchItemCloseAnimationCoordinator_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopRemoveAnimationCoordinator_VirtualDesktopRemoveAnimationCoordinator_VirtualDesktopMetrics_const_&_int_&_ISwitchThumbnailFactory___&__::_1_::dtor$2 @ 0x1806C9B18 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopRemoveAnimationCoordinator_VirtualDesk.c)
 *     _VirtualDesktopRemoveAnimationCoordinator_CreateInstance_::_1_::dtor$0 @ 0x1806C9B2A (_VirtualDesktopRemoveAnimationCoordinator_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::~ComPtr<SwitchItemCloseAnimationCoordinator>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease(a1);
}
