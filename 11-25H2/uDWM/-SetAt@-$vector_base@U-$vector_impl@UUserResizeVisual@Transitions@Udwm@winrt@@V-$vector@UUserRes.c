/*
 * XREFs of ?SetAt@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXIAEBUUserResizeVisual@Transitions@Udwm@2@@Z @ 0x1800DEEBC
 * Callers:
 *     ?SetAt@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x1800DEE80 (-SetAt@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResizeV.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18002A4B8 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800D3F50 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??$assign@AEAUUserResizeVisual@Transitions@Udwm@winrt@@@?$removed_value@UUserResizeVisual@Transitions@Udwm@winrt@@X@impl@winrt@@QEAAXAEAUUserResizeVisual@Transitions@Udwm@2@@Z @ 0x1800DCFE4 (--$assign@AEAUUserResizeVisual@Transitions@Udwm@winrt@@@-$removed_value@UUserResizeVisual@Transi.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800DD85C (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$_Optional_destruct_base@UUserResizeVisual@Transitions@Udwm@winrt@@$0A@@std@@QEAA@XZ @ 0x1800DD884 (--1-$_Optional_destruct_base@UUserResizeVisual@Transitions@Udwm@winrt@@$0A@@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1800EB100 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual>::SetAt(
        __int64 a1,
        unsigned int a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // r10
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 *v9; // rbx
  const struct winrt::impl::slim_source_location *v10; // rax
  _BYTE v11[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v13[32]; // [rsp+48h] [rbp-20h] BYREF

  v11[8] = 0;
  v4 = a1 + 8;
  if ( !a1 )
    v4 = 48LL;
  if ( a2 >= (unsigned __int64)((__int64)(*(_QWORD *)(v4 + 8) - *(_QWORD *)v4) >> 3) )
  {
    v10 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v13);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v10);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(a1));
  v8 = (_QWORD *)(v7 + 8);
  if ( !v7 )
    v8 = v6;
  v9 = (__int64 *)(*v8 + 8 * v5);
  winrt::impl::removed_value<winrt::Udwm::Transitions::UserResizeVisual,void>::assign<winrt::Udwm::Transitions::UserResizeVisual &>(
    (winrt::Udwm::Transitions::AnimationCompletedHandler *)v11,
    v9);
  winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)v9, a3);
  std::_Optional_destruct_base<winrt::Udwm::Transitions::UserResizeVisual,0>::~_Optional_destruct_base<winrt::Udwm::Transitions::UserResizeVisual,0>((winrt::Udwm::Transitions::AnimationCompletedHandler *)v11);
}
