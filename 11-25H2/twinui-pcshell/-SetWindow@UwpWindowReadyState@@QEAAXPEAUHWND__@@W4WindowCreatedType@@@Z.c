/*
 * XREFs of ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1801110DC
 * Callers:
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180110B94 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     _lambda_eb4780c1661a573af0d01df637dfa0a8_::operator() @ 0x18018EAC8 (_lambda_eb4780c1661a573af0d01df637dfa0a8_--operator().c)
 * Callees:
 *     ?Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x180073D20 (-Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ?Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x180073D50 (-Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x18007440C (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1801CCA58 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ @ 0x1801D1AEC (-_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ.c)
 *     ?GetShouldWaitForLayoutCompletion@LayoutCompletedHelper@@YA_NPEAUHWND__@@@Z @ 0x180219C5C (-GetShouldWaitForLayoutCompletion@LayoutCompletedHelper@@YA_NPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang@@@details@wil@@QEAA_NXZ @ 0x18041A360 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang@.c)
 */

char __fastcall UwpWindowReadyState::SetWindow(__int64 a1, LayoutCompletedHelper *a2, int a3)
{
  char IsReadyForPresentation; // r14
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  unsigned __int8 IsEnabled; // al
  HWND v10; // rdx
  bool ShouldWaitForLayoutCompletion; // al
  char result; // al
  __int64 v13; // rdx
  struct tagRECT Rect; // [rsp+20h] [rbp-38h] BYREF

  IsReadyForPresentation = WindowReadyState::IsReadyForPresentation((WindowReadyState *)a1);
  *v8 = v7;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang>::GetImpl'::`2'::impl);
  UwpWindowReadyState::WaitFlags::Clear((int *)(a1 + 8), a1, 8 * (IsEnabled ^ 1) + 6);
  if ( a2 )
  {
    ShouldWaitForLayoutCompletion = LayoutCompletedHelper::GetShouldWaitForLayoutCompletion(a2, v10);
    *(_BYTE *)(a1 + 24) = ShouldWaitForLayoutCompletion;
    if ( ShouldWaitForLayoutCompletion && a3 != 1 )
      UwpWindowReadyState::WaitFlags::Set((int *)(a1 + 8), a1, 2);
    Rect = 0LL;
    GetWindowRect((HWND)a2, &Rect);
    *(_DWORD *)(a1 + 28) = Rect.right - Rect.left;
    *(_DWORD *)(a1 + 32) = Rect.bottom - Rect.top;
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang>::GetImpl'::`2'::impl) )
      *(_QWORD *)(a1 + 16) = 0LL;
    UwpWindowReadyState::_WaitForUnfreezeIfNecessary((UwpWindowReadyState *)a1);
  }
  result = WindowReadyState::IsReadyForPresentation((WindowReadyState *)a1);
  if ( result != IsReadyForPresentation )
  {
    LOBYTE(v13) = result;
    return std::_Func_class<void,bool>::operator()(a1 + 40, v13);
  }
  return result;
}
