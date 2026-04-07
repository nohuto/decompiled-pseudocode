/*
 * XREFs of ?OnGlobalTimeUpdated@?$consume_Udwm_Transitions_Private_IScreenRotationTransition@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006B0BC
 * Callers:
 *     ?OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ @ 0x18006AFD0 (-OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ??$try_as_with_reason@UIScreenRotationTransition@Private@Transitions@Udwm@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIScreenRotationTransition@Private@Transitions@Udwm@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@AEAUhresult@1@@Z @ 0x18006B154 (--$try_as_with_reason@UIScreenRotationTransition@Private@Transitions@Udwm@winrt@@Utype@-$abi@UIU.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D59A4 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::consume_Udwm_Transitions_Private_IScreenRotationTransition<winrt::Udwm::Transitions::Private::ScreenRotationTransition>::OnGlobalTimeUpdated(
        _QWORD *a1)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-20h] BYREF
  const char *v4; // [rsp+28h] [rbp-18h]
  __int64 v5; // [rsp+30h] [rbp-10h]
  int v6; // [rsp+50h] [rbp+10h] BYREF
  __int64 v7; // [rsp+58h] [rbp+18h] BYREF

  v6 = 0;
  winrt::impl::try_as_with_reason<winrt::Udwm::Transitions::Private::IScreenRotationTransition,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v7,
    *a1,
    &v6);
  v3 = 20;
  v4 = "clientcore\\windows\\dwm\\udwm\\objfre\\amd64\\winrt\\Udwm.Transitions.Private.h";
  v5 = 0LL;
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6, &v3);
  v3 = 22;
  v4 = "clientcore\\windows\\dwm\\udwm\\objfre\\amd64\\winrt\\Udwm.Transitions.Private.h";
  v5 = 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
  if ( v1 < 0 )
    winrt::throw_hresult((unsigned int)v1, &v3);
  return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v7);
}
