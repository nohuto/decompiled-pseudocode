/*
 * XREFs of _winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete_::_5_::_lambda_1_::operator() @ 0x18007AA4C
 * Callers:
 *     std::_Func_impl_no_alloc__winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete_::_5_::_lambda_1__long_::_Do_call @ 0x1800D8650 (std--_Func_impl_no_alloc__winrt--Udwm--Transitions--implementation--TopLevelWindow3_ea_1800D8650.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ??$?9UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@YA_NAEBU?$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@0@$$T@Z @ 0x18007AAD4 (--$-9UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@.c)
 *     ?get@?$weak_ref@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x18008BFD4 (-get@-$weak_ref@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D59A4 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete_::_5_::_lambda_1_::operator()(
        __int64 a1)
{
  char v1; // al
  const char *v2; // r9
  __int64 v3; // rbx
  int v4; // eax
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  const char *v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  winrt::weak_ref<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::get(a1, &v10);
  v1 = winrt::operator!=<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>(&v10);
  try
  {
    v3 = v10;
    if ( v1 )
    {
      v6 = 1111;
      v7 = "clientcore\\windows\\dwm\\udwm\\objfre\\amd64\\winrt/Udwm.Transitions.h";
      v8 = 0LL;
      v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 40) + 24LL))(*(_QWORD *)(v10 + 40));
      if ( v4 < 0 )
        winrt::throw_hresult((unsigned int)v4, &v6);
    }
    if ( v3 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x68,
                           (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.toplevelwindow3dwrapper.cpp",
                           v2);
  }
  return result;
}
