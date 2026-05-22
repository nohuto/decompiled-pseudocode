/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialManipulationStartedEventArgs@2345@@Foundation@Windows@@V_lambda_aff27c65643147f110e8d55ec9bad72e_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialManipulationStartedEventArgs@2345@@Foundation@Windows@@@01@$$QEAV_lambda_aff27c65643147f110e8d55ec9bad72e_@@@Z @ 0x1800C1CA8
 * Callers:
 *     ?RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ @ 0x1800C3E7C (-RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ.c)
 * Callees:
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialManipulationStartedEventArgs@2345@@Foundation@Windows@@V_lambda_aff27c65643147f110e8d55ec9bad72e_@@$0?0PEAUISpatialGestureRecognizer@Spatial@Input@UI@3@PEAUISpatialManipulationStartedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialGestureRecognizer@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVSpatialManipulationStartedEventArgs@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@3@PEAUISpatialManipulationStartedEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_aff27c65643147f110e8d55ec9bad72e_@@@Z @ 0x1800C204C (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatia_ea_1800C204C.c)
 */

__int64 *__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs *>,_lambda_aff27c65643147f110e8d55ec9bad72e_>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 *result; // rax
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v5;
  if ( v5 )
  {
    v4 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::ISpatialGestureRecognizer *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs *,Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs *>>::*)(Windows::UI::Input::Spatial::ISpatialGestureRecognizer *,Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs *>,_lambda_aff27c65643147f110e8d55ec9bad72e_,-1,Windows::UI::Input::Spatial::ISpatialGestureRecognizer *,Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs *>,_lambda_aff27c65643147f110e8d55ec9bad72e_,-1,Windows::UI::Input::Spatial::ISpatialGestureRecognizer *,Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs *>(
           v5,
           a2);
    v7 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v7);
  result = a1;
  *a1 = v4;
  return result;
}
