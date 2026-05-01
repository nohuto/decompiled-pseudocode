/*
 * XREFs of ??0TouchGestureComponent@@QEAA@XZ @ 0x18026F720
 * Callers:
 *     ??0?$heap_implements@VTouchGestureComponent@@@impl@winrt@@QEAA@XZ @ 0x180567294 (--0-$heap_implements@VTouchGestureComponent@@@impl@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x180151C9C (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ?register_service_information@immersive_shell_component@winrt@@IEAAXU?$array_view@$$CBUservice_description@immersive_shell_component@winrt@@@2@@Z @ 0x18015205C (-register_service_information@immersive_shell_component@winrt@@IEAAXU-$array_view@$$CBUservice_d.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenEdgeAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F9878 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenEdgeAnimations@@@details@wil@@.c)
 *     ??$make_self@VTouchEdgeGestureManager@@$$V@winrt@@YA?AU?$com_ptr@VTouchEdgeGestureManager@@@0@XZ @ 0x180222080 (--$make_self@VTouchEdgeGestureManager@@$$V@winrt@@YA-AU-$com_ptr@VTouchEdgeGestureManager@@@0@XZ.c)
 *     ??0TouchGestureSettings@@QEAA@XZ @ 0x1802314FC (--0TouchGestureSettings@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802D566C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
TouchGestureComponent *__fastcall TouchGestureComponent::TouchGestureComponent(TouchGestureComponent *this, __int64 a2)
{
  RTL_SRWLOCK *v3; // r14
  __int128 **v4; // rdi
  __int128 *v5; // rsi
  __int128 *v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  TouchGestureComponent *v10; // rsi
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 (__fastcall ***v13)(_QWORD, __int64 *, __int128 **); // rcx
  unsigned int v14; // eax
  __int128 *v16; // [rsp+20h] [rbp-39h] BYREF
  int v17; // [rsp+28h] [rbp-31h]
  char v18[8]; // [rsp+30h] [rbp-29h] BYREF
  __int128 *v19; // [rsp+38h] [rbp-21h] BYREF
  int v20; // [rsp+40h] [rbp-19h] BYREF
  __int128 v21; // [rsp+48h] [rbp-11h]
  TouchGestureComponent *v22; // [rsp+58h] [rbp-1h]
  __int128 v23; // [rsp+60h] [rbp+7h] BYREF
  __int64 v24; // [rsp+70h] [rbp+17h]
  __int64 v25; // [rsp+78h] [rbp+1Fh]

  v22 = this;
  *(_QWORD *)this = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_QWORD *)this + 1) = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>::`vftable';
  v3 = (RTL_SRWLOCK *)((char *)this + 16);
  winrt::immersive_shell_component::immersive_shell_component((TouchGestureComponent *)((char *)this + 16), a2);
  *(_QWORD *)this = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<TouchGestureComponent,IGlobalRudeWindowNotifications,void>'};
  *((_QWORD *)this + 1) = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<TouchGestureComponent,IInputHostLayoutChanges,void>'};
  v3->Ptr = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<TouchGestureComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 4) = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 6) = &TouchGestureComponent::`vftable';
  *((_QWORD *)this + 13) = 0LL;
  v4 = (__int128 **)((char *)this + 112);
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_DWORD *)this + 100) = 0;
  *((_BYTE *)this + 408) = 0;
  v5 = (__int128 *)operator new(0x78uLL);
  v16 = v5;
  memset_0(v5, 0, 0x78uLL);
  TouchGestureSettings::TouchGestureSettings((TouchGestureSettings *)v5);
  *(_QWORD *)v5 = &winrt::impl::heap_implements<TouchGestureSettings>::`vftable'{for `winrt::impl::producers_base<TouchGestureSettings,std::tuple<ITouchGestureSettings>>'};
  *((_QWORD *)v5 + 1) = &TouchGestureSettings::`vftable'{for `winrt::impl::root_implements<TouchGestureSettings,ITouchGestureSettings>'};
  v19 = v5;
  if ( (__int128 **)((char *)this + 112) == &v19 )
  {
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v19);
  }
  else
  {
    if ( *v4 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 14);
    *v4 = v5;
  }
  v23 = xmmword_18078C600;
  v6 = *v4;
  if ( *v4 )
  {
    v16 = 0LL;
    v20 = 0;
    v21 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(__int128 *, __int64 *, __int128 **))v6)(
           v6,
           &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>,
           &v16);
    winrt::check_hresult(v18, v7, &v20);
    v24 = (__int64)v16;
  }
  else
  {
    v24 = 0LL;
  }
  v25 = 0LL;
  v16 = &v23;
  v17 = 1;
  winrt::immersive_shell_component::register_service_information(v3, (__int64)&v16);
  `eh vector destructor iterator'(
    &v23,
    0x20uLL,
    1uLL,
    (void (*)(void *))winrt::immersive_shell_component::service_description::~service_description);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenEdgeAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputDrivenEdgeAnimations>::GetImpl'::`2'::impl,
    1u,
    v8,
    v9);
  v10 = (TouchGestureComponent *)winrt::make_self<TouchEdgeGestureManager,>(&v16);
  v11 = (_QWORD *)((char *)this + 120);
  if ( (TouchGestureComponent *)((char *)this + 120) != v10 )
  {
    if ( *v11 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 15);
    v12 = *(_QWORD *)v10;
    *(_QWORD *)v10 = 0LL;
    *v11 = v12;
  }
  if ( v16 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v16);
  v23 = xmmword_18078C610;
  v13 = (__int64 (__fastcall ***)(_QWORD, __int64 *, __int128 **))*((_QWORD *)this + 15);
  if ( v13 )
  {
    v16 = 0LL;
    v20 = 0;
    v21 = 0LL;
    v14 = (**v13)(v13, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>, &v16);
    winrt::check_hresult(v18, v14, &v20);
    v24 = (__int64)v16;
  }
  else
  {
    v24 = 0LL;
  }
  v25 = 0LL;
  v16 = &v23;
  v17 = 1;
  winrt::immersive_shell_component::register_service_information((RTL_SRWLOCK *)this + 2, (__int64)&v16);
  `eh vector destructor iterator'(
    &v23,
    0x20uLL,
    1uLL,
    (void (*)(void *))winrt::immersive_shell_component::service_description::~service_description);
  return this;
}
