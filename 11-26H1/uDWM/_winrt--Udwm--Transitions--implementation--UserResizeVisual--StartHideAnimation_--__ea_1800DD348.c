/*
 * XREFs of _winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_2_::_lambda_1_::operator() @ 0x1800DD348
 * Callers:
 *     std::_Func_impl_no_alloc__winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_2_::_lambda_1__void_::_Do_call @ 0x1800DDD70 (std--_Func_impl_no_alloc__winrt--Udwm--Transitions--implementation--UserResizeVisua_ea_1800DDD70.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$get_self@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@winrt@@YAPEAUUserResizeVisual@implementation@Transitions@Udwm@0@AEBUIUserResizeVisual@340@@Z @ 0x18007C954 (--$get_self@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@win.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x18008D1E0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800DDA90 (-Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_2_::_lambda_1_::operator()(
        winrt::Udwm::Transitions::implementation::UserResizeVisual **a1,
        struct IUnknown *a2)
{
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v2; // rdi
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v3; // rbx
  void (__fastcall *v4)(winrt::Udwm::Transitions::implementation::UserResizeVisual *, __int64 *, void **); // rbx
  void **v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    v6 = 0LL;
    v4 = *(void (__fastcall **)(winrt::Udwm::Transitions::implementation::UserResizeVisual *, __int64 *, void **))(*(_QWORD *)v2 + 24LL);
    v5 = winrt::put_abi((winrt *)&v6, a2);
    v4(v2, &winrt::impl::guid_v<winrt::Udwm::Transitions::IUserResizeVisual>, v5);
    v3 = 0LL;
    if ( v6 )
    {
      v3 = (winrt::Udwm::Transitions::implementation::UserResizeVisual *)winrt::get_self<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::IUserResizeVisual>(&v6);
      v6 = 0LL;
    }
    v7 = v3;
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v6);
    v2 = v3;
  }
  else
  {
    v3 = 0LL;
    v7 = 0LL;
  }
  if ( v2 )
  {
    winrt::Udwm::Transitions::implementation::UserResizeVisual::Unload(v3);
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)&v7);
  }
}
