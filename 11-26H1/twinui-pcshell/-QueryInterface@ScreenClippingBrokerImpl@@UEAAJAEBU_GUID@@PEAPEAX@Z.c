/*
 * XREFs of ?QueryInterface@ScreenClippingBrokerImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18054B3C0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIScreenClippingBroker@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18054B3D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18054B3D0.c)
 *     ?QueryInterface@ScreenClippingBrokerImpl@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18054B3E0 (-QueryInterface@ScreenClippingBrokerImpl@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIScreenClippingBroker@@@Details@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18054B3F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18054B3F0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ScreenClippingBrokerImpl::QueryInterface(__int64 this, const struct _GUID *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,IScreenClippingBroker>>(
           this,
           a2,
           a3);
}
