/*
 * XREFs of ?get@?$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x1800E0E10
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_545816354afdfcb0efb7a4f85f5e27cb__void_::_Do_call @ 0x1800E0D40 (std--_Func_impl_no_alloc__lambda_545816354afdfcb0efb7a4f85f5e27cb__void_--_Do_call.c)
 * Callees:
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??$get_self@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@winrt@@YAPEAUUserResizeVisual@implementation@Transitions@Udwm@0@AEBUIUserResizeVisual@340@@Z @ 0x18008DA2C (--$get_self@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@win.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1800999F8 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IUnknown *__fastcall winrt::weak_ref<winrt::Udwm::Transitions::implementation::UserResizeVisual>::get(
        __int64 *a1,
        struct IUnknown *a2)
{
  __int64 v2; // rsi
  void (__fastcall *v4)(__int64, __int64 *, void **); // rbx
  void **v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    v8 = 0LL;
    v4 = *(void (__fastcall **)(__int64, __int64 *, void **))(*(_QWORD *)v2 + 24LL);
    v5 = winrt::put_abi((winrt *)&v8, a2);
    v4(v2, &winrt::impl::guid_v<winrt::Udwm::Transitions::IUserResizeVisual>, v5);
    v6 = 0LL;
    if ( v8 )
    {
      v6 = winrt::get_self<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::IUserResizeVisual>(&v8);
      v8 = 0LL;
    }
    a2->lpVtbl = (struct IUnknownVtbl *)v6;
    winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v8);
  }
  else
  {
    a2->lpVtbl = 0LL;
  }
  return a2;
}
