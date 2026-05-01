/*
 * XREFs of ??0MultitaskingViewGestureHandler@@QEAA@XZ @ 0x180135F9C
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewGestureHandler@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x180135ED8 (--$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@.c)
 * Callees:
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x180136284 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@WRL@Microsoft@@QEAA@XZ @ 0x1802B1B44 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIMultitaskingViewGestureHandler@@UITo.c)
 */

// Hidden C++ exception states: #wind=16
MultitaskingViewGestureHandler *__fastcall MultitaskingViewGestureHandler::MultitaskingViewGestureHandler(
        MultitaskingViewGestureHandler *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewGestureHandler,ITouchpadGesture,ITouchSwipe>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewGestureHandler,ITouchpadGesture,ITouchSwipe>();
  *(_QWORD *)this = &MultitaskingViewGestureHandler::`vftable';
  *((_QWORD *)this + 1) = &MultitaskingViewGestureHandler::`vftable'{for `ITouchpadGesture'};
  *((_QWORD *)this + 2) = &MultitaskingViewGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITouchSwipe>'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0x3F947AE147AE147BLL;
  *((_QWORD *)this + 19) = 0x3F947AE147AE147BLL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 300000LL;
  *((_QWORD *)this + 24) = 300000LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_BYTE *)this + 224) = 0;
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 58) = 5;
  *((_QWORD *)this + 30) = 0LL;
  *((_BYTE *)this + 248) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  winrt::impl::resume_apartment_context::resume_apartment_context((MultitaskingViewGestureHandler *)((char *)this + 280));
  return this;
}
