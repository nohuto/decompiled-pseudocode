/*
 * XREFs of ?AddRef@ScreenClippingBrokerImpl@@WDA@EAAKXZ @ 0x180318990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ScreenClippingBrokerImpl::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<HSTRING__ *,HSTRING__ *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,Microsoft::WRL::FtmBase>::AddRef(
           a1 - 48,
           a2);
}
