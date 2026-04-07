/*
 * XREFs of ??$from_com_ref@AEBUITransitionState@Transitions@Udwm@winrt@@@?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@winrt@@AEAAXAEBUITransitionState@Transitions@Udwm@1@@Z @ 0x1800D6950
 * Callers:
 *     ??$make_weak@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA?AU?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@0@AEBUITransitionState@Transitions@Udwm@0@@Z @ 0x1800D6BC4 (--$make_weak@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA-AU-$weak_ref@UITransitionState.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x18004EE40 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$try_as@UIWeakReferenceSource@impl@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@$0A@@impl@winrt@@YA?AU?$com_ptr@UIWeakReferenceSource@impl@winrt@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800D6BF0 (--$try_as@UIWeakReferenceSource@impl@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@23.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::weak_ref<winrt::Udwm::Transitions::ITransitionState>::from_com_ref<winrt::Udwm::Transitions::ITransitionState const &>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, __int64 *); // rsi
  int v5; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  const char *v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  if ( *a2 )
  {
    v6 = 4448;
    v7 = "OneCoreUap\\Internal\\BuildMetadata\\internal\\cppwinrt\\winrt\\base.h";
    v8 = 0LL;
    winrt::impl::try_as<winrt::impl::IWeakReferenceSource,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(&v10);
    v3 = v10;
    v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL);
    if ( *a1 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(a1);
    v5 = v4(v3, a1);
    winrt::check_hresult(&v9, v5, (__int64)&v6);
    if ( v3 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v10);
  }
}
