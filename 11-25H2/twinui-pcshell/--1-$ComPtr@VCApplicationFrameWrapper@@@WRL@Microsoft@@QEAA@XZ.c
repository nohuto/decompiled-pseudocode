/*
 * XREFs of ??1?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x18022D9F8
 * Callers:
 *     _CApplicationFrameService::SynchronizeFrameInformation_::_1_::dtor$0 @ 0x1806A7B96 (_CApplicationFrameService--SynchronizeFrameInformation_--_1_--dtor$0.c)
 *     _CApplicationFrameService::EnsureFramePool_::_1_::dtor$2 @ 0x1806A850D (_CApplicationFrameService--EnsureFramePool_--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplicationFrameWrapper_CApplicationFrameWrapper_CApplicationFrameService___IApplicationFrameManager___IApplicationFrame___Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short____&_unsigned_long_const_&__::_1_::dtor$2 @ 0x1806ADD9E (_Microsoft--WRL--Details--MakeAndInitialize_CApplicationFrameWrapper_CApplicationFrameWrapper_CA.c)
 *     _CApplicationFrameService::DestroyFrame_::_1_::dtor$0 @ 0x1806B6F03 (_CApplicationFrameService--DestroyFrame_--_1_--dtor$0.c)
 *     _CApplicationFrameService::EndFrameRecovery_::_1_::dtor$2 @ 0x1806B7E13 (_CApplicationFrameService--EndFrameRecovery_--_1_--dtor$2.c)
 *     _CApplicationFrameService::BeginFrameRecovery_::_1_::dtor$4 @ 0x1806B81CD (_CApplicationFrameService--BeginFrameRecovery_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::~ComPtr<CApplicationFrameWrapper>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(a1);
}
