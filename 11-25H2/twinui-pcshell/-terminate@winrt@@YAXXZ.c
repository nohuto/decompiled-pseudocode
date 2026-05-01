/*
 * XREFs of ?terminate@winrt@@YAXXZ @ 0x1802E0720
 * Callers:
 *     ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@2@@experimental@std@@QEBAXXZ @ 0x1802E09C8 (-unhandled_exception@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInsta.c)
 *     std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_7dcf87eb4336ac1cd65e4151029d03fa__const___::promise_type::unhandled_exception @ 0x18046A19C (std--experimental--coroutine_traits_winrt--fire_and_forget__lambda_7dcf87eb4336ac1cd65e4151029d0.c)
 * Callees:
 *     ??Bhresult@winrt@@QEBAHXZ @ 0x1802D07A8 (--Bhresult@winrt@@QEBAHXZ.c)
 *     WINRT_IMPL_RoFailFastWithErrorContext @ 0x1802D48C3 (WINRT_IMPL_RoFailFastWithErrorContext.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DEE08 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
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
