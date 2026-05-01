/*
 * XREFs of ?Release@?$EventInvocationContextProvider@$00@details@wil@@UEAAKXZ @ 0x1802CEFF0
 * Callers:
 *     ?Release@?$EventInvocationContextProvider@$00@details@wil@@W7EAAKXZ @ 0x1803FAA90 (-Release@-$EventInvocationContextProvider@$00@details@wil@@W7EAAKXZ.c)
 *     ?Release@?$EventInvocationContextProvider@$00@details@wil@@WBA@EAAKXZ @ 0x1803FAAA0 (-Release@-$EventInvocationContextProvider@$00@details@wil@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall wil::details::EventInvocationContextProvider<1>::Release(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release(a1);
}
