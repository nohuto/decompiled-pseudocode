/*
 * XREFs of ??$as@UITransitionStateNativePrivate@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionStateNativePrivate@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800DBB48
 * Callers:
 *     ?PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindow3D@@W4ShellTransitionType@234@@Z @ 0x180061700 (-PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindo.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x18008EED4 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND.c)
 * Callees:
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@3@@Z @ 0x18002A92C (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transi.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800D72B8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::as<ITransitionStateNativePrivate,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64 *, __int64 *))
{
  __int64 (__fastcall **v3)(_QWORD, __int64 *, __int64 *); // rax
  int v4; // eax
  int v6; // [rsp+28h] [rbp-20h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    v9 = 0LL;
    v6 = 0;
    v3 = *a2;
    v7 = 0LL;
    v4 = (*v3)(a2, &winrt::impl::guid_v<ITransitionStateNativePrivate>, &v9);
    winrt::check_hresult(&v8, v4, (__int64)&v6);
    winrt::impl::root_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>>::abi_guard::abi_guard(
      a1,
      v9);
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
