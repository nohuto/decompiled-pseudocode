/*
 * XREFs of ??$from_com_ref@AEBUITransitionState@Transitions@Udwm@winrt@@@?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@winrt@@AEAAXAEBUITransitionState@Transitions@Udwm@1@@Z @ 0x1800D9950
 * Callers:
 *     ??$make_weak@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA?AU?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@0@AEBUITransitionState@Transitions@Udwm@0@@Z @ 0x1800D9B8C (--$make_weak@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA-AU-$weak_ref@UITransitionState.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180094A2C (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800D72B8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$try_as@UIWeakReferenceSource@impl@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@$0A@@impl@winrt@@YA?AU?$com_ptr@UIWeakReferenceSource@impl@winrt@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800D9BB4 (--$try_as@UIWeakReferenceSource@impl@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@23.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
int *__fastcall winrt::weak_ref<winrt::Udwm::Transitions::ITransitionState>::from_com_ref<winrt::Udwm::Transitions::ITransitionState const &>(
        __int64 *a1,
        _QWORD *a2)
{
  int *result; // rax
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, __int64 *); // rsi
  int v6; // eax
  int v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  result = (int *)&retaddr;
  if ( *a2 )
  {
    v7 = 0;
    v8 = 0LL;
    winrt::impl::try_as<winrt::impl::IWeakReferenceSource,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(&v11);
    v4 = v11;
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL);
    if ( *a1 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(a1);
    v6 = v5(v4, a1);
    result = winrt::check_hresult(&v10, v6, (__int64)&v7);
    if ( v4 )
      return (int *)winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v11);
  }
  return result;
}
