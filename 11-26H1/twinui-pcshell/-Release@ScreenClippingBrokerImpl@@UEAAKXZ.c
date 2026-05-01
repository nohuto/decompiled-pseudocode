/*
 * XREFs of ?Release@ScreenClippingBrokerImpl@@UEAAKXZ @ 0x18054B4B0
 * Callers:
 *     ?Release@ScreenClippingBrokerImpl@@W7EAAKXZ @ 0x18054B4C0 (-Release@ScreenClippingBrokerImpl@@W7EAAKXZ.c)
 *     ?Release@ScreenClippingBrokerImpl@@WCI@EAAKXZ @ 0x18054B4D0 (-Release@ScreenClippingBrokerImpl@@WCI@EAAKXZ.c)
 *     ?Release@ScreenClippingBrokerImpl@@WDA@EAAKXZ @ 0x18054B4E0 (-Release@ScreenClippingBrokerImpl@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ScreenClippingBrokerImpl::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,IScreenClippingBroker>::Release(this);
}
