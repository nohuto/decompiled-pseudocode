/*
 * XREFs of ?RemoveAt@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXI@Z @ 0x1800DEBB4
 * Callers:
 *     ?RemoveAt@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHI@Z @ 0x1800DEB80 (-RemoveAt@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResi.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800D3F50 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??$assign@AEAUUserResizeVisual@Transitions@Udwm@winrt@@@?$removed_value@UUserResizeVisual@Transitions@Udwm@winrt@@X@impl@winrt@@QEAAXAEAUUserResizeVisual@Transitions@Udwm@2@@Z @ 0x1800DCFE4 (--$assign@AEAUUserResizeVisual@Transitions@Udwm@winrt@@@-$removed_value@UUserResizeVisual@Transi.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800DD85C (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$_Optional_destruct_base@UUserResizeVisual@Transitions@Udwm@winrt@@$0A@@std@@QEAA@XZ @ 0x1800DD884 (--1-$_Optional_destruct_base@UUserResizeVisual@Transitions@Udwm@winrt@@$0A@@std@@QEAA@XZ.c)
 *     ?erase@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@2@@Z @ 0x1800DFC28 (-erase@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVisual@Transit.c)
 *     _CxxThrowException_0 @ 0x1800EB100 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual>::RemoveAt(
        __int64 a1,
        unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rcx
  const struct winrt::impl::slim_source_location *v8; // rax
  _BYTE v9[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v11[24]; // [rsp+48h] [rbp-20h] BYREF
  char v12; // [rsp+70h] [rbp+8h] BYREF

  v9[8] = 0;
  v3 = a1 + 8;
  if ( !a1 )
    v3 = 48LL;
  if ( a2 >= (unsigned __int64)((__int64)(*(_QWORD *)(v3 + 8) - *(_QWORD *)v3) >> 3) )
  {
    v8 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v11);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v8);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(a1));
  v5 = a1 + 8;
  if ( !a1 )
    v5 = 48LL;
  v6 = (__int64 *)(*(_QWORD *)v5 + 8 * v4);
  winrt::impl::removed_value<winrt::Udwm::Transitions::UserResizeVisual,void>::assign<winrt::Udwm::Transitions::UserResizeVisual &>(
    (winrt::Udwm::Transitions::AnimationCompletedHandler *)v9,
    v6);
  v7 = a1 + 8;
  if ( !a1 )
    v7 = 48LL;
  std::vector<winrt::Udwm::Transitions::UserResizeVisual>::erase(v7, &v12, v6);
  std::_Optional_destruct_base<winrt::Udwm::Transitions::UserResizeVisual,0>::~_Optional_destruct_base<winrt::Udwm::Transitions::UserResizeVisual,0>((winrt::Udwm::Transitions::AnimationCompletedHandler *)v9);
}
