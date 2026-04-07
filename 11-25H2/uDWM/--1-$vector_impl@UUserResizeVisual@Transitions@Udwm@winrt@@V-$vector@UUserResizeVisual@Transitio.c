/*
 * XREFs of ??1?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UEAA@XZ @ 0x1800DD918
 * Callers:
 *     ??_E?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UEAAPEAXI@Z @ 0x1800DDA00 (--_E-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResizeVisual@Transiti.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18003E6C0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x1800DCC4C (--$_Destroy_range@V-$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUser.c)
 */

__int64 __fastcall winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>::~vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>(
        __int64 a1)
{
  winrt::Udwm::Transitions::AnimationCompletedHandler *v2; // rcx

  v2 = *(winrt::Udwm::Transitions::AnimationCompletedHandler **)(a1 + 48);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>(
      v2,
      *(winrt::Udwm::Transitions::AnimationCompletedHandler **)(a1 + 56));
    std::_Deallocate<16,0>(
      *(void **)(a1 + 48),
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 48)) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  return winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>::~root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>();
}
