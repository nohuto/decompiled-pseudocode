/*
 * XREFs of ??1?$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@QEAA@XZ @ 0x1804D7138
 * Callers:
 *     _VirtualDesktopAddAnimationCoordinator_CreateInstance_::_1_::dtor$0 @ 0x1806F17EA (_VirtualDesktopAddAnimationCoordinator_CreateInstance_--_1_--dtor$0.c)
 *     _SwitchItemCloseAnimationCoordinator_CreateInstance_::_1_::dtor$0 @ 0x1806F17FC (_SwitchItemCloseAnimationCoordinator_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopRemoveAnimationCoordinator_VirtualDesktopRemoveAnimationCoordinator_VirtualDesktopMetrics_const_&_int_&_ISwitchThumbnailFactory___&__::_1_::dtor$2 @ 0x1806F1A39 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopRemoveAnimationCoordinator_VirtualDesk.c)
 *     _VirtualDesktopRemoveAnimationCoordinator_CreateInstance_::_1_::dtor$0 @ 0x1806F1A4B (_VirtualDesktopRemoveAnimationCoordinator_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::~ComPtr<SwitchItemCloseAnimationCoordinator>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease(a1);
}
