/*
 * XREFs of ?QueryInterface@?$ValueReference@I@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A0ED0
 * Callers:
 *     ?QueryInterface@?$ValueReference@I@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A0EE0 (-QueryInterface@-$ValueReference@I@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$IReference@I@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A0EF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$IReferen.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ValueReference<unsigned int>::QueryInterface(__int64 a1, const struct _GUID *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IReference<unsigned int>,Microsoft::WRL::FtmBase>>(
           a1,
           a2,
           a3);
}
