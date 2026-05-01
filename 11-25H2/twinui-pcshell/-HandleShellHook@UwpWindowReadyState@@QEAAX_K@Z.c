/*
 * XREFs of ?HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z @ 0x1801B7084
 * Callers:
 *     ?HandlePresentationReadinessChange@UwpWindowWrapperBase@@UEAAX_K@Z @ 0x1801B7020 (-HandlePresentationReadinessChange@UwpWindowWrapperBase@@UEAAX_K@Z.c)
 * Callees:
 *     ??$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_K@Z @ 0x18006FDFC (--$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@S.c)
 *     ?Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x180073D50 (-Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x18007440C (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1801CCA58 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ @ 0x1801D1AEC (-_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ.c)
 *     ??$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAPEAUHWND__@@@Z @ 0x1802CC364 (--$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@S.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang@@@details@wil@@QEAA_NXZ @ 0x18041A360 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang@.c)
 */

void __fastcall UwpWindowReadyState::HandleShellHook(UwpWindowReadyState *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int *v4; // rcx
  int v5; // r8d
  _QWORD *v6; // rdi
  __int64 v7; // rax
  UwpWindowReadyState *v8; // rcx
  bool IsReadyForPresentation; // al
  __int64 v10; // rdx

  if ( WindowReadyState::IsReadyForPresentation(this) )
    return;
  switch ( v2 )
  {
    case 31LL:
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang>::GetImpl'::`2'::impl) )
      {
        v6 = (_QWORD *)((char *)this + 16);
        v7 = *((_QWORD *)this + 2);
        if ( v7 )
        {
          *v6 = v7 - 1;
          ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionRemoved<HWND__ * const &,unsigned __int64 &>(
            (__int64 *)this,
            (int *)this + 4);
          if ( !*v6 )
          {
            v4 = (int *)((char *)this + 8);
            v5 = 8;
            goto LABEL_12;
          }
        }
        else
        {
          ViewManagerInteropTraceLogging::WindowReadiness_ExtraPositionAcknowledgment<HWND__ * &>(this);
        }
      }
      break;
    case 36LL:
      v4 = (int *)(v3 + 8);
      v5 = 4;
      goto LABEL_12;
    case 38LL:
      v4 = (int *)(v3 + 8);
      v5 = 2;
LABEL_12:
      UwpWindowReadyState::WaitFlags::Clear(v4, (__int64)this, v5);
      break;
  }
  if ( WindowReadyState::IsReadyForPresentation(this) )
    UwpWindowReadyState::_WaitForUnfreezeIfNecessary(v8);
  IsReadyForPresentation = WindowReadyState::IsReadyForPresentation(this);
  if ( IsReadyForPresentation )
  {
    LOBYTE(v10) = IsReadyForPresentation;
    std::_Func_class<void,bool>::operator()((char *)this + 40, v10);
  }
}
