/*
 * XREFs of ?PosChanged@UwpWindowReadyState@@QEAAXHH@Z @ 0x18024E0B0
 * Callers:
 *     ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1801129B4 (-PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 * Callees:
 *     ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x180071244 (--$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogg.c)
 *     ?Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x180073D20 (-Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x18007440C (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1801CCA58 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang@@@details@wil@@QEAA_NXZ @ 0x18041A360 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang@.c)
 */

void __fastcall UwpWindowReadyState::PosChanged(UwpWindowReadyState *this, unsigned int a2, unsigned int a3)
{
  int *v3; // rbp
  int *v5; // r14
  char v8; // r12
  char IsReadyForPresentation; // al

  v3 = (int *)((char *)this + 8);
  v5 = (int *)((char *)this + 28);
  v8 = *((_DWORD *)this + 2) == 0;
  if ( a2 != *((_DWORD *)this + 7) || a3 != *((_DWORD *)this + 8) )
  {
    if ( *((_BYTE *)this + 24) )
      UwpWindowReadyState::WaitFlags::Set((int *)this + 2, (__int64)this, 2);
    BeginLayoutUpdate(*(_QWORD *)this);
    *(_QWORD *)v5 = __PAIR64__(a3, a2);
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang>::GetImpl'::`2'::impl) )
  {
    ++*((_QWORD *)this + 2);
    ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
      (__int64 *)this,
      (int *)this + 4,
      v5,
      (int *)this + 8);
    UwpWindowReadyState::WaitFlags::Set(v3, (__int64)this, 8);
  }
  IsReadyForPresentation = WindowReadyState::IsReadyForPresentation(this);
  if ( v8 != IsReadyForPresentation )
    std::_Func_class<void,bool>::operator()((__int64)this + 40, IsReadyForPresentation);
}
