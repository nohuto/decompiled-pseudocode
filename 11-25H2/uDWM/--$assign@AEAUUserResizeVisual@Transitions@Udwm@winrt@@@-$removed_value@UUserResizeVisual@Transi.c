/*
 * XREFs of ??$assign@AEAUUserResizeVisual@Transitions@Udwm@winrt@@@?$removed_value@UUserResizeVisual@Transitions@Udwm@winrt@@X@impl@winrt@@QEAAXAEAUUserResizeVisual@Transitions@Udwm@2@@Z @ 0x1800DCFE4
 * Callers:
 *     ?RemoveAt@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXI@Z @ 0x1800DEBB4 (-RemoveAt@-$vector_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUser.c)
 *     ?RemoveAtEnd@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXXZ @ 0x1800DECB0 (-RemoveAtEnd@-$vector_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UU.c)
 *     ?SetAt@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXIAEBUUserResizeVisual@Transitions@Udwm@2@@Z @ 0x1800DEEBC (-SetAt@-$vector_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserRes.c)
 * Callees:
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::removed_value<winrt::Udwm::Transitions::UserResizeVisual,void>::assign<winrt::Udwm::Transitions::UserResizeVisual &>(
        winrt::Udwm::Transitions::AnimationCompletedHandler *a1,
        __int64 *a2)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler(a1);
    *((_BYTE *)a1 + 8) = 0;
  }
  result = *a2;
  *a2 = 0LL;
  *(_QWORD *)a1 = result;
  *((_BYTE *)a1 + 8) = 1;
  return result;
}
