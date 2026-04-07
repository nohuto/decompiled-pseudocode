/*
 * XREFs of ?OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ @ 0x18006AFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180042430 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?OnGlobalTimeUpdated@?$consume_Udwm_Transitions_Private_IScreenRotationTransition@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006B0BC (-OnGlobalTimeUpdated@-$consume_Udwm_Transitions_Private_IScreenRotationTransition@UScreenRotatio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CGlobalTimeTrackVisual::OnGlobalTimeUpdated(CGlobalTimeTrackVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  char v4; // si
  __int64 v5; // rcx
  __int64 v6; // rbx
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  v2 = *((_QWORD *)this + 26);
  v10 = 0LL;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Udwm::Transitions::ITransition>,
      &v10);
    v3 = v10;
  }
  else
  {
    v3 = 0LL;
  }
  v4 = winrt::Windows::Foundation::operator!=(&v10, &v11);
  if ( v3 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v10);
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 26);
    v10 = 0LL;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v5 + 24LL))(
        v5,
        &winrt::impl::guid_v<winrt::Udwm::Transitions::ITransition>,
        &v10);
      v6 = v10;
    }
    else
    {
      v6 = 0LL;
    }
    try
    {
      winrt::impl::consume_Udwm_Transitions_Private_IScreenRotationTransition<winrt::Udwm::Transitions::Private::ScreenRotationTransition>::OnGlobalTimeUpdated(&v10);
      if ( v6 )
        winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v10);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x11,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwmglobaltimetrackvisual.cpp",
        v7);
    }
  }
  return 0LL;
}
