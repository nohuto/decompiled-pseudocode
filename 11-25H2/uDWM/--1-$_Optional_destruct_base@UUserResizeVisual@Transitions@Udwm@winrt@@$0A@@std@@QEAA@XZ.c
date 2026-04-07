/*
 * XREFs of ??1?$_Optional_destruct_base@UUserResizeVisual@Transitions@Udwm@winrt@@$0A@@std@@QEAA@XZ @ 0x1800DD884
 * Callers:
 *     ??1?$removed_value@UUserResizeVisual@Transitions@Udwm@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1800DD8C4 (--1-$removed_value@UUserResizeVisual@Transitions@Udwm@winrt@@X@impl@winrt@@QEAA@XZ.c)
 *     ?RemoveAt@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXI@Z @ 0x1800DEBB4 (-RemoveAt@-$vector_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUser.c)
 *     ?RemoveAtEnd@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXXZ @ 0x1800DECB0 (-RemoveAtEnd@-$vector_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UU.c)
 *     ?SetAt@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXIAEBUUserResizeVisual@Transitions@Udwm@2@@Z @ 0x1800DEEBC (-SetAt@-$vector_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserRes.c)
 * Callees:
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 */

void __fastcall std::_Optional_destruct_base<winrt::Udwm::Transitions::UserResizeVisual,0>::~_Optional_destruct_base<winrt::Udwm::Transitions::UserResizeVisual,0>(
        winrt::Udwm::Transitions::AnimationCompletedHandler *a1)
{
  if ( *((_BYTE *)a1 + 8) )
    winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler(a1);
}
