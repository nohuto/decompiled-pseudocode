/*
 * XREFs of _lambda_6c2381c8148a5bf607d7998e82322cb8_::__lambda_6c2381c8148a5bf607d7998e82322cb8_ @ 0x1800902F4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___::_CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___ @ 0x180128CB8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___--_CTask.c)
 *     _lambda_36ac732e4dc79f438aaac687fe092223_::operator() @ 0x1802DDDB8 (_lambda_36ac732e4dc79f438aaac687fe092223_--operator().c)
 *     ?Switch@CAppViewManager@@UEAAXPEAUIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802F5480 (-Switch@CAppViewManager@@UEAAXPEAUIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Wind.c)
 *     _lambda_67b2f18edae7de11733e212eb4a2dec4_::operator() @ 0x180304AC0 (_lambda_67b2f18edae7de11733e212eb4a2dec4_--operator().c)
 *     CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___::_CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___ @ 0x18049758C (CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___--_CMultitaskingViewTas.c)
 *     ?ToggleAllUpView@CAllUpViewService@@UEAAJPEAUHMONITOR__@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180497A00 (-ToggleAllUpView@CAllUpViewService@@UEAAJPEAUHMONITOR__@@W4ALL_UP_VIEW_FLAGS@@@Z.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___ @ 0x1804CC1DC (AsyncFrameEvents--_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_4c1352802533852b573d4ad647ba047a___ @ 0x1804CC2F4 (AsyncFrameEvents--_NotifyFrameEvent__lambda_4c1352802533852b573d4ad647ba047a___.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_9d6f2e50a9d1c22d8e47d66903bcf204___ @ 0x1804CC40C (AsyncFrameEvents--_NotifyFrameEvent__lambda_9d6f2e50a9d1c22d8e47d66903bcf204___.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___ @ 0x1804CC528 (AsyncFrameEvents--_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___ @ 0x1804CC640 (AsyncFrameEvents--_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___.c)
 *     ?ContextMenuInvoked@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@I@Z @ 0x1804CD5E0 (-ContextMenuInvoked@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@I@Z.c)
 *     _CAppViewManager::Switch_::_1_::dtor$2 @ 0x1806E102B (_CAppViewManager--Switch_--_1_--dtor$2.c)
 *     _CAllUpViewService::ToggleAllUpView_::_1_::dtor$3 @ 0x1806EF904 (_CAllUpViewService--ToggleAllUpView_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall lambda_6c2381c8148a5bf607d7998e82322cb8_::__lambda_6c2381c8148a5bf607d7998e82322cb8_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
