/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@VMultitaskingViewGestureHandler@@@winrt@@AEAAXXZ @ 0x18049E124
 * Callers:
 *     ??1?$com_ptr@VMultitaskingViewGestureHandler@@@winrt@@QEAA@XZ @ 0x180499BCC (--1-$com_ptr@VMultitaskingViewGestureHandler@@@winrt@@QEAA@XZ.c)
 *     MultitaskingViewGestureHandler::TeardownThumbnailsAsync$_ResumeCoro$1 @ 0x18049D6F0 (MultitaskingViewGestureHandler--TeardownThumbnailsAsync$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<MultitaskingViewGestureHandler>::unconditional_release_ref(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewGestureHandler,ITouchpadGesture,ITouchSwipe>::Release(v2);
}
