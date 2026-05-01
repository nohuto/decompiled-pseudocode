/*
 * XREFs of ??1?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C64C8
 * Callers:
 *     _CMultitaskingViewHotKeyHandler_CreateInstance_::_1_::dtor$0 @ 0x1806DB72C (_CMultitaskingViewHotKeyHandler_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CMultitaskingViewHotKeyHandler_CMultitaskingViewHotKeyHandler_IImmersiveWindowMessageService___&_IImmersiveMonitorManager___&_IMultitaskingViewTaskScheduler___&_IApplicationViewCollection___&__::_1_::dtor$2 @ 0x1806DF958 (_Microsoft--WRL--Details--MakeAndInitialize_CMultitaskingViewHotKeyHandler_CMultitaskingViewHotK.c)
 *     _PositionAdjustmentHistory::AddPositionAdjustment_::_1_::dtor$2 @ 0x1806F379D (_PositionAdjustmentHistory--AddPositionAdjustment_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::~ComPtr<PositionAdjustmentHistory>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(a1);
}
