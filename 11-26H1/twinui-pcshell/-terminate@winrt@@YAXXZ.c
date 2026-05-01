/*
 * XREFs of ?terminate@winrt@@YAXXZ @ 0x1802D94E8
 * Callers:
 *     ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@2@@experimental@std@@QEBAXXZ @ 0x1802D9790 (-unhandled_exception@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInsta.c)
 *     std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_a1bf07eabb51e841d7b59a4e813e5668__const___::promise_type::unhandled_exception @ 0x180475E70 (std--experimental--coroutine_traits_winrt--fire_and_forget__lambda_a1bf07eabb51e841d7b59a4e813e5.c)
 * Callees:
 *     ??Bhresult@winrt@@QEBAHXZ @ 0x1802C78C8 (--Bhresult@winrt@@QEBAHXZ.c)
 *     WINRT_IMPL_RoFailFastWithErrorContext @ 0x1802CB7E3 (WINRT_IMPL_RoFailFastWithErrorContext.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802D7AF0 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

void __fastcall __noreturn winrt::terminate(winrt *this)
{
  unsigned int *v1; // rax
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = winrt::to_hresult(&v2);
  winrt::hresult::operator int(v1);
  WINRT_IMPL_RoFailFastWithErrorContext();
  abort();
}
