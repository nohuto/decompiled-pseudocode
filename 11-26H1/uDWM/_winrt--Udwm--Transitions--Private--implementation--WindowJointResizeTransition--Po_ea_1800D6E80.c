/*
 * XREFs of _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1_::operator() @ 0x1800D6E80
 * Callers:
 *     winrt::impl::delegate_winrt::Udwm::Transitions::UnloadDelegate__winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1___::Invoke @ 0x1800D7150 (winrt--impl--delegate_winrt--Udwm--Transitions--UnloadDelegate__winrt--Udwm--Transitions--Privat.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?Complete@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800732F4 (-Complete@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@.c)
 *     ??$get_self@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@winrt@@YAPEAUUserResizeVisual@implementation@Transitions@Udwm@0@AEBUIUserResizeVisual@340@@Z @ 0x18007C954 (--$get_self@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@win.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x18008D1E0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?get@?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x1800D8140 (-get@-$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1_::operator()(
        __int64 *a1,
        struct IUnknown *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  void (__fastcall *v7)(__int64, __int64 *, void **); // rbx
  void **v8; // rax
  __int64 v10; // [rsp+40h] [rbp+20h] BYREF
  __int64 v11; // [rsp+48h] [rbp+28h] BYREF

  v3 = *a1;
  if ( *a1 )
  {
    v10 = 0LL;
    v7 = *(void (__fastcall **)(__int64, __int64 *, void **))(*(_QWORD *)v3 + 24LL);
    v8 = winrt::put_abi((winrt *)&v10, a2);
    v7(v3, &winrt::impl::guid_v<winrt::Udwm::Transitions::ITransition>, v8);
    v4 = 0LL;
    if ( v10 )
    {
      v4 = winrt::get_self<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::IUserResizeVisual>(&v10);
      v10 = 0LL;
    }
    v11 = v4;
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v10);
    v5 = v4;
    result = v4;
  }
  else
  {
    v4 = 0LL;
    v11 = 0LL;
    v5 = 0LL;
    result = 0LL;
  }
  if ( v5 )
  {
    if ( (*(_DWORD *)(result + 176))-- != 1 )
      goto LABEL_14;
    winrt::weak_ref<winrt::Udwm::Transitions::ITransitionState>::get(a1 + 1, &v10);
    if ( v10 )
      winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::Complete(&v10);
  }
  else
  {
    winrt::weak_ref<winrt::Udwm::Transitions::ITransitionState>::get(a1 + 1, &v10);
    if ( v10 )
      winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::Complete(&v10);
  }
  result = winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v10);
LABEL_14:
  if ( v4 )
    return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v11);
  return result;
}
