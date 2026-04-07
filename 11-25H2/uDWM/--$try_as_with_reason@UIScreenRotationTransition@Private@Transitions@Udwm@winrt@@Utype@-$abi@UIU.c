/*
 * XREFs of ??$try_as_with_reason@UIScreenRotationTransition@Private@Transitions@Udwm@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIScreenRotationTransition@Private@Transitions@Udwm@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@AEAUhresult@1@@Z @ 0x1800E1114
 * Callers:
 *     ?OnGlobalTimeUpdated@?$consume_Udwm_Transitions_Private_IScreenRotationTransition@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x180090AB8 (-OnGlobalTimeUpdated@-$consume_Udwm_Transitions_Private_IScreenRotationTransition@UScreenRotatio.c)
 * Callees:
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@3@@Z @ 0x18002A92C (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::try_as_with_reason<winrt::Udwm::Transitions::Private::IScreenRotationTransition,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64 *, __int64 *),
        _DWORD *a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v8 = 0LL;
    v5 = (**a2)(a2, &winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IScreenRotationTransition>, &v8);
    v6 = v8;
    *a3 = v5;
    winrt::impl::root_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>>::abi_guard::abi_guard(
      a1,
      v6);
  }
  else
  {
    *a3 = 0;
    *a1 = 0LL;
  }
  return a1;
}
