/*
 * XREFs of ?OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ @ 0x1800E12A0
 * Callers:
 *     <none>
 * Callees:
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18002A6D0 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?OnGlobalTimeUpdated@?$consume_Udwm_Transitions_Private_IScreenRotationTransition@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x180090AB8 (-OnGlobalTimeUpdated@-$consume_Udwm_Transitions_Private_IScreenRotationTransition@UScreenRotatio.c)
 *     ?get@?$weak_ref@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x1800E13D0 (-get@-$weak_ref@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CGlobalTimeTrackVisual::OnGlobalTimeUpdated(CGlobalTimeTrackVisual *this)
{
  char *v1; // rdi
  _QWORD *v2; // rax
  char v3; // bl
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  char v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v1 = (char *)this + 240;
  v2 = (_QWORD *)winrt::weak_ref<winrt::Udwm::Transitions::Private::ScreenRotationTransition>::get(
                   (char *)this + 240,
                   &v8);
  v3 = winrt::Windows::Foundation::operator!=(v2, &v7);
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v8);
  if ( v3 )
  {
    winrt::weak_ref<winrt::Udwm::Transitions::Private::ScreenRotationTransition>::get(v1, &v7);
    try
    {
      winrt::impl::consume_Udwm_Transitions_Private_IScreenRotationTransition<winrt::Udwm::Transitions::Private::ScreenRotationTransition>::OnGlobalTimeUpdated(&v7);
      winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v7);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x1F,
        (int)"clientcore\\windows\\dwm\\udwm\\udwmglobaltimetrackvisual.cpp",
        v4);
    }
  }
  return 0LL;
}
